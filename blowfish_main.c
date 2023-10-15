#include <stdio.h>
#include "blowfish.h"


void main(void) {
  unsigned long L = 1, R = 2;
  BF ctx;

  Blowfish_Init (&ctx, (unsigned char*)"TESTKEY", 7);
  Blowfish_Enc(&ctx, &L, &R);
  printf("%08lX %08lX\n", L, R);
  if (L == 0xDF333FD2L && R == 0x30A71BB4L)
	  printf("Test encryption OK.\n");
  else
	  printf("Test encryption failed.\n");
  Blowfish_Dec(&ctx, &L, &R);
  if (L == 1 && R == 2)
  	  printf("Test decryption OK.\n");
  else
	  printf("Test decryption failed.\n");
}