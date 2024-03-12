// This file is Copyright (c) 2020 Florent Kermarrec <florent@enjoy-digital.fr>
// License: BSD

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <irq.h>
#include <csr-defs.h>
#include <libbase/uart.h>
#include <libbase/console.h>
#include <generated/csr.h>
//#include <generated/soc.h>

void isr_button(void);

/*-----------------------------------------------------------------------*/
/* Uart                                                                  */
/*-----------------------------------------------------------------------*/

static char *readstr(void)
{
	char c[2];
	static char s[64];
	static int ptr = 0;

	if(readchar_nonblock()) {
		c[0] = getchar();
		c[1] = 0;
		switch(c[0]) {
			case 0x7f:
			case 0x08:
				if(ptr > 0) {
					ptr--;
					fputs("\x08 \x08", stdout);
				}
				break;
			case 0x07:
				break;
			case '\r':
			case '\n':
				s[ptr] = 0x00;
				fputs("\n", stdout);
				ptr = 0;
				return s;
			default:
				if(ptr >= (sizeof(s) - 1))
					break;
				fputs(c, stdout);
				s[ptr] = c[0];
				ptr++;
				break;
		}
	}

	return NULL;
}

static char *get_token(char **str)
{
	char *c, *d;

	c = (char *)strchr(*str, ' ');
	if(c == NULL) {
		d = *str;
		*str = *str+strlen(*str);
		return d;
	}
	*c = 0;
	d = *str;
	*str = c+1;
	return d;
}

static void prompt(void)
{
	printf("\e[92;1mlitex-demo-app\e[0m> ");
}

/*-----------------------------------------------------------------------*/
/* Help                                                                  */
/*-----------------------------------------------------------------------*/

static void help(void)
{
	puts("\nLiteX minimal demo app built "__DATE__" "__TIME__"\n");
	puts("Available commands:");
	puts("help               - Show this command");
	puts("reboot             - Reboot CPU");
#ifdef CSR_LEDS_BASE
	puts("led                - Led demo");
	puts("cblinkled           - cblinkled");
#endif
	puts("donut              - Spinning Donut demo");
	puts("helloc             - Hello C");
	puts("printSwitches		 - Display switch values");
	puts("additionSwitches		 - Display switch values on board");
#ifdef WITH_CXX
	puts("hellocpp           - Hello C++");
#endif
}

/*-----------------------------------------------------------------------*/
/* Commands                                                              */
/*-----------------------------------------------------------------------*/

static void reboot_cmd(void)
{
	ctrl_reset_write(1);
}

#ifdef CSR_LEDS_BASE
static void led_cmd(void)
{
	int i;
	printf("Led demo...\n");

	printf("Counter mode...\n");
	for(i=0; i<32; i++) {
		leds_out_write(i);
		busy_wait(100);
	}

	printf("Shift mode...\n");
	for(i=0; i<4; i++) {
		leds_out_write(1<<i);
		busy_wait(200);
	}
	for(i=0; i<4; i++) {
		leds_out_write(1<<(3-i));
		busy_wait(200);
	}

	printf("Dance mode...\n");
	for(i=0; i<4; i++) {
		leds_out_write(0x55);
		busy_wait(200);
		leds_out_write(0xaa);
		busy_wait(200);
	}
}
#endif

extern void cblinkled(void);

static void cblinkled_cmd(void)
{
	printf("C-blink-led demo...\n");
	cblinkled();
}

extern void print_switches(void);

static void print_switches_cmd(void)
{
	printf("Print switches demo...\n");
	print_switches();
}

extern void additionSwitches(void);

static void additionSwitches_cmd(void)
{
	printf("Addition switches demo...\n");
	additionSwitches();
}

extern void donut(void);

static void donut_cmd(void)
{
	printf("Donut demo...\n");
	donut();
}

extern void helloc(void);

static void helloc_cmd(void)
{
	printf("Hello C demo...\n");
	helloc();
}

#ifdef WITH_CXX
extern void hellocpp(void);

static void hellocpp_cmd(void)
{
	printf("Hello C++ demo...\n");
	hellocpp();
}
#endif

/*-----------------------------------------------------------------------*/
/* Console service / Main                                                */
/*-----------------------------------------------------------------------*/

static void console_service(void)
{
	char *str;
	char *token;

	str = readstr();
	if(str == NULL) return;
	token = get_token(&str);
	if(strcmp(token, "help") == 0)
		help();
	else if(strcmp(token, "reboot") == 0)
		reboot_cmd();
#ifdef CSR_LEDS_BASE
	else if(strcmp(token, "led") == 0)
		led_cmd();
#endif
	else if(strcmp(token, "donut") == 0)
		donut_cmd();
	else if(strcmp(token, "helloc") == 0)
		helloc_cmd();
	else if(strcmp(token, "cblinkled") == 0)
		cblinkled_cmd();
	else if(strcmp(token, "printSwitches") == 0)
		print_switches_cmd();
	else if(strcmp(token, "additionSwitches") == 0)
		additionSwitches_cmd();
#ifdef WITH_CXX
	else if(strcmp(token, "hellocpp") == 0)
		hellocpp_cmd();
#endif
	prompt();
}

void isr_button(void){
	printf("isr occured!\n");
	uint32_t status = button_ev_pending_read();
	if(status & (1<<0)){
		leds_out_write(0x00000002);
		button_ev_pending_write(1);
		//button_ev_pending_i0_write(0);
	}
	button_ev_enable_write(1);
	prompt();
}


int main(void)
{
//#ifdef CONFIG_CPU_HAS_INTERRUPT
	irq_setmask(0);
	irq_setie(1);
	button_ev_pending_write(button_ev_pending_read());
	// button_ev_enable_i0_write(1);
	button_ev_enable_write(1);
	irq_attach(BUTTON_INTERRUPT, isr_button);
	irq_setmask(irq_getmask()|(1<<BUTTON_INTERRUPT));
	// unsigned int mask;
	// mask = irq_getmask();
	// mask |= 1<<BUTTON_IRQ_INTERRUPT;
	// irq_setmask(mask);
	

// #endif
	uart_init();

	help();
	prompt();

	while(1) {
		console_service();
		//printf("%u\n",irq_getmask());
		//int test = irq_pending();
		//  uint32_t test2 = button_ev_pending_read();
		// uint32_t test = irq_pending();
		//  if(test2!=0){
		//  	printf("%ld\n", test2);
		//  }
		// if ((test)!=0 && test!=2){
		// 	printf("%lu\n", test);
		// }
		// uint32_t value = read_register(0xBC0);

    	// // Print the value
    	// printf("Value at address 0x%X: %u\n", 0xBC0, value);
	}

	return 0;
}
