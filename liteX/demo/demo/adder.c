#include <generated/csr.h>
#include <stdio.h>
#include <time.h>
 
void delay(void);

void delay(void)
{
   int c, d;
   
   for (c = 1; c <= 32767; c++)
       for (d = 1; d <= 32767; d++)
       {}
       

}

uint32_t write_and_read_registers(void);

static inline uint32_t read_register(uint32_t address) {
    volatile uint32_t *register_ptr = (volatile uint32_t *)address;
    return *register_ptr;
}

static inline void write_register(uint32_t address, uint32_t data) {
    volatile uint32_t *register_ptr = (volatile uint32_t *)address;
    *register_ptr = data;
}

uint32_t write_and_read_registers(void) {
    // Write values to registers
    printf("0x50000004: %ld\n",read_register(0x50000004));
    write_register(0x50000004, 0x10000001);
    delay();
    printf("0x50000004: %ld\n",read_register(0x50000004));
    
    delay();
    printf("0x50000008: %ld\n",read_register(0x50000008));
    write_register(0x50000008, 0x00000002);
    delay();
    printf("0x50000008: %ld\n",read_register(0x50000008));

    delay();
    printf("0x5000000c: %ld\n",read_register(0x5000000c));
    write_register(0x5000000c, 0x00000001);
    delay();
    printf("0x5000000c: %ld\n",read_register(0x5000000c));
    delay();

    // Read value from address 0xf1000000
    return read_register(0x50000000);
}

void adder(void);
void adder(void) {
    printf("0x50000004: %lu\n",read_register(0x50000004));
    printf("0x50000008: %lu\n",read_register(0x50000008));
    printf("0x5000000c: %lu\n",read_register(0x5000000c));

    write_register(0x50000004, 0x00000101);
    write_register(0x50000008, 0x00000011);
    write_register(0x5000000c, 0x00000001);
    printf("Status: %lu\n",read_register(0x50000010));
    printf("Result: %lu\n",read_register(0x50000014));
}