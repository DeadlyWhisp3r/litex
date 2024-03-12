#include <generated/csr.h>
#include <stdio.h>


void helloc(void);
void helloc(void) {
    // Words to be transmitted
    uint32_t words[4] = {'A', 'B', 'C', 'D'};
    
    // Write each word to the UART
    for (int i = 0; i < 4; i++) {
        // Write the word to the transmit/receive data register
        my_uart_rxtx_write(words[i]);
    }

    // return 0;
}