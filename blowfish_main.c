#include <stdio.h>
#include "blowfish.h"

//blowfish test
int main(void) {
    unsigned long plain[2] = {0xffffffff, 0xffffffff};
    BF ctx;
    unsigned char key[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    Blowfish_Init(&ctx, key, 8);
    Blowfish_Enc(&ctx, &plain[0], &plain[1]);
    printf("%08lX %08lX\n", plain[0], plain[1]);
    if (plain[0] == 0x51866FD5L && plain[1] == 0xB85ECB8AL) printf("good!\n");
    else printf("???\n");
    
    Blowfish_Dec(&ctx, &plain[0], &plain[1]);
    if (plain[0] == 0xffffffff && plain[1] == 0xffffffff) printf("good!\n");
    else printf("???\n");
}