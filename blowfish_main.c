#include "blowfish.h"

//blowfish test
int main(void) {
    uint32_t text[2] = {0xffffffffL, 0xffffffffL};
    printf("%08lX %08lX\n", text[0], text[1]);
    BF ctx;
    unsigned char key[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
    uint32_t enc_text[2];
    uint32_t dec_text[2];
    Blowfish_Init(&ctx, key, 8);
    Blowfish_Enc(&ctx, text, enc_text);
    printf("%08lX %08lX\n", enc_text[0], enc_text[1]);
    if (enc_text[0] == 0x51866FD5L && enc_text[1] == 0xB85ECB8AL) printf("good!\n");
    else printf("???\n");
    
    Blowfish_Dec(&ctx, enc_text, dec_text);
    if (dec_text[0] == 0xffffffff && dec_text[1] == 0xffffffff) printf("good!\n");
    else printf("???\n");
}