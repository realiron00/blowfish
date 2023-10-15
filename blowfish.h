//Blowfish.h

typedef struct {
  unsigned long P[16 + 2]; //라운드키 저장
  unsigned long S[4][256]; //S-box
} BF;

//라운드키 생성 함수
void Blowfish_Init(BF *ctx, unsigned char *key, int keyLen);

//암호화 함수
void Blowfish_Enc(BF *ctx, unsigned long *xl, unsigned long *xr);

//복호화 함수
void Blowfish_Dec(BF *ctx, unsigned long *xl, unsigned long *xr);