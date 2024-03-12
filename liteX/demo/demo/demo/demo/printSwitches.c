#include <generated/csr.h>
#include <stdio.h>

void print_switches(void);

void print_switches(void) {
    printf("The switches are set toooooo: %ld\n",switches_state_read());
}