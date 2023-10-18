//Blowfish.h

typedef struct {
  unsigned long P[16 + 2]; //Round Key
  unsigned long S[4][256]; //S-box
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
void Blowfish_Enc(BF *ctx, unsigned long *xl, unsigned long *xr);

/*****************************************************
 * Decryption Function
 * 
 * ctx : BF struct
 * xl : left cipher text
 * xr : right cipher text
 *****************************************************/
void Blowfish_Dec(BF *ctx, unsigned long *xl, unsigned long *xr);