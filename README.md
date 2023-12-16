# blowfish
BLOWFISH ENCRYPTION ALGORITHM

## 2023 Undergraduate Research Opportunities Program
3학년 2학기 연구참여과정 프로젝트

## Files

### project
#### blowfish.c
blowfish algorithm in one file
- BF_F(uint32_t (*s)[256], uint32_t x)
- Blowfish_Enc(uint32_t *p, uint32_t (*s)[256], uint32_t *pt, uint32_t *ct)
- Blowfish_Init(uint32_t *p, uint32_t (*s)[256], unsigned char *key, int keyLen)

### blowfish.c
blowfish encryption algorithm
- BF_F(BF *ctx, uint32_t x)
- Blowfish_Enc(BF *ctx, uint32_t *pt, uint32_t *ct)
- Blowfish_Dec(BF *ctx, uint32_t *ct, uint32_t *dt)
- Blowfish_Init(BF *ctx, unsigned char *key, int keyLen)

### blowfish.h
blowfish encryption header file

### blowfish_main.c
blowfish encryption test file
