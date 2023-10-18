//Blowfish.h
#include <stdio.h>
#include <stdint.h>

typedef struct {
  uint32_t P[16 + 2]; //Round Key
  uint32_t S[4][256]; //S-box
} BF;

/*****************************************************
 * Initiation Function
 * 
 * ctx : BF struct
 * key : user's key
 * keyLen : key's length
 *****************************************************/
void Blowfish_Init(BF *ctx, unsigned char *key, int keyLen);

/*****************************************************
 * Encryption Function
 * 
 * ctx : BF struct
 * pt : plain text
 * ct : cipher text
 *****************************************************/
void Blowfish_Enc(BF *ctx, uint32_t *pt, uint32_t *ct);

/*****************************************************
 * Decryption Function
 * 
 * ctx : BF struct
 * ct : cipher text
 * dt : decrypted text
 *****************************************************/
void Blowfish_Dec(BF *ctx, uint32_t *ct, uint32_t *dt);