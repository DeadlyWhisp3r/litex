#include <generated/csr.h>
#include <stdio.h>

void print_switches(void);

void print_switches(void) {
    uint32_t low = switches_state_low_read();
    uint32_t high = switches_state_high_read();
    uint32_t result = low + high;
    printf("The switches are set to: %ld + %ld,\nyielding the results: %ld\n",low, high,result);
}