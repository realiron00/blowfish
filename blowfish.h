typedef struct {
  unsigned long P[16 + 2];
  unsigned long S[4][256];
} BF;

void Blowfish_Init(BF *ctx, unsigned char *key, int keyLen);
void Blowfish_Encrypt(BF *ctx, unsigned long *xl, unsigned long *xr);
void Blowfish_Decrypt(BF *ctx, unsigned long *xl, unsigned long *xr);