#include <generated/csr.h>
#include <stdio.h>

void additionSwitches(void);

void additionSwitches(void) {
    uint32_t low = switches_state_low_read();
    uint32_t high = switches_state_high_read();
    uint32_t result = low + high;
    printf("The switches are set to: %ld + %ld\n",high,low);
    printf("Please press button E16 to display the result!\n");
    uint32_t rem;
    int i=0;
    while(low>0){
        rem = low % 10;
        low = (low - rem)/10;
        i++;
        switch(i) {
        case 1:
            seg_out0_write(rem);
            //printf("read reg0: %ld\n remainder: %ld\n",seg_out0_read(),rem);
            break;
        case 2:
            seg_out1_write(rem);
            //printf("read reg1: %ld\n remainder: %ld\n",seg_out1_read(),rem);
            break;
        case 3:
            seg_out2_write(rem);
            //printf("read reg2: %ld\n remainder: %ld\n",seg_out2_read(),rem);
            break;
        case 4:
            seg_out3_write(rem);
            //printf("read reg3: %ld\n remainder: %ld\n",seg_out3_read(),rem);
            break;
        default:
            break;
        }
    }
    i=0;
    while(high>0){
        rem = high % 10;
        high = (high - rem)/10;
        i++;
        switch(i) {
        case 1:
            seg_out4_write(rem);
            //printf("read reg4: %ld\n remainder: %ld\n",seg_out4_read(),rem);
            break;
        case 2:
            seg_out5_write(rem);
            //printf("read reg5: %ld\n remainder: %ld\n",seg_out5_read(),rem);
            break;
        case 3:
            seg_out6_write(rem);
            //printf("read reg6: %ld\n remainder: %ld\n",seg_out6_read(),rem);
            break;
        case 4:
            seg_out7_write(rem);
            //printf("read reg7: %ld\n remainder: %ld\n",seg_out7_read(),rem);
            break;
        default:
            break;
        }
    }
    i=0;
    while(1){
        //no interupts needed because we just wait for the button
        if(button_in_read()){
            while(result>0){
                rem = result % 10;
                result = (result - rem)/10;
                i++;
                switch(i) {
                case 1:
                    seg_out0_write(rem);
                    break;
                case 2:
                    seg_out1_write(rem);
                    break;
                case 3:
                    seg_out2_write(rem);
                    break;
                default:
                    break;
                }
            }
        seg_out3_write(0);
        seg_out4_write(0);
        seg_out5_write(0);
        seg_out6_write(0);
        seg_out7_write(0);
        break;
        }
    }

}