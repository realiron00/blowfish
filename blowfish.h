//Blowfish.h
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
 * xl : left plain text
 * xr : right plain text
 *****************************************************/
void Blowfish_Enc(BF *ctx, uint32_t *xl, uint32_t *xr);

/*****************************************************
 * Decryption Function
 * 
 * ctx : BF struct
 * xl : left cipher text
 * xr : right cipher text
 *****************************************************/
void Blowfish_Dec(BF *ctx, uint32_t *xl, uint32_t *xr);