/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct AES_ctx;
enum _1_main_$op;
union _1_main_$node;
struct _IO_FILE;
struct timeval;
static void test_xcrypt_ctr(char const   *xcrypt ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
static void test_decrypt_ctr(void) ;
extern void signal(int sig , void *func ) ;
typedef unsigned long size_t;
typedef struct _IO_FILE FILE;
typedef unsigned char __uint8_t;
extern int fclose(void *stream ) ;
typedef unsigned int __uint32_t;
typedef __uint32_t uint32_t;
typedef __uint8_t uint8_t;
extern void AES_CBC_encrypt_buffer(struct AES_ctx *ctx , uint8_t *buf , uint32_t length ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
enum _1_main_$op {
    _1_main__call$func_LIT_0 = 58,
    _1_main__string$result_STA_0$value_LIT_0 = 235,
    _1_main__store_void_star$right_STA_0$left_STA_1 = 31,
    _1_main__constant_int$result_STA_0$value_LIT_0 = 7,
    _1_main__return_int$expr_STA_0 = 34,
    _1_main__convert_void_star2void_star$left_STA_0$result_STA_0 = 239,
    _1_main__goto$label_LAB_0 = 55,
    _1_main__label$label_LAB_0 = 85,
    _1_main__local$result_STA_0$value_LIT_0 = 252
} ;
unsigned char _1_main_$array[1][63]  = { {        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__string$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0,        _1_main__store_void_star$right_STA_0$left_STA_1, 
            _1_main__call$func_LIT_0,        (unsigned char)1,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__call$func_LIT_0,        (unsigned char)2,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__call$func_LIT_0,        (unsigned char)3, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__call$func_LIT_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__call$func_LIT_0,        (unsigned char)5,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__call$func_LIT_0,        (unsigned char)6,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__call$func_LIT_0,        (unsigned char)7, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__call$func_LIT_0, 
            (unsigned char)8,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__return_int$expr_STA_0}};
extern void AES_init_ctx_iv(struct AES_ctx *ctx , uint8_t const   *key , uint8_t const   *iv ) ;
static void test_decrypt_cbc(void) ;
extern void exit(int status ) ;
extern int raise(int sig ) ;
extern void AES_ECB_encrypt(struct AES_ctx *ctx , uint8_t const   *buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2), __leaf__)) memcmp)(void const   *__s1 ,
                                                                                               void const   *__s2 ,
                                                                                               size_t __n )  __attribute__((__pure__)) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
static void phex(uint8_t *str ) ;
struct AES_ctx {
   uint8_t RoundKey[176] ;
   uint8_t Iv[16] ;
};
extern void AES_CTR_xcrypt_buffer(struct AES_ctx *ctx , uint8_t *buf , uint32_t length ) ;
static void test_encrypt_ecb(void) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
static void test_encrypt_ctr(void) ;
extern void AES_ECB_decrypt(struct AES_ctx *ctx , uint8_t const   *buf ) ;
int main(int argc , char **argv ) ;
void megaInit(void) ;
char const   *_1_main_$strings  =    "\nTesting AES128\n\n\000";
extern unsigned long strlen(char const   *s ) ;
extern void AES_init_ctx(struct AES_ctx *ctx , uint8_t const   *key ) ;
static void test_encrypt_ecb_verbose(void) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
union _1_main_$node {
   void *_void_star ;
   int _int ;
};
extern void AES_CBC_decrypt_buffer(struct AES_ctx *ctx , uint8_t *buf , uint32_t length ) ;
static void test_decrypt_ecb(void) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
static void test_encrypt_cbc(void) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1), __leaf__)) memset)(void *__s ,
                                                                                               int __c ,
                                                                                               size_t __n ) ;
extern void *malloc(unsigned long size ) ;
extern int scanf(char const   *format  , ...) ;
static void phex(uint8_t *str ) 
{ 
  uint8_t len ;
  unsigned char i ;

  {
  len = (uint8_t )16;
  i = (unsigned char)0;
  while ((int )i < (int )len) {
    printf((char const   */* __restrict  */)"%.2x", (int )*(str + i));
    i = (unsigned char )((int )i + 1);
  }
  printf((char const   */* __restrict  */)"\n");
  return;
}
}
static void test_encrypt_ctr(void) 
{ 


  {
  test_xcrypt_ctr("encrypt");
  return;
}
}
static void test_decrypt_ecb(void) 
{ 
  uint8_t key[16] ;
  uint8_t in[16] ;
  uint8_t out[16] ;
  struct AES_ctx ctx ;
  int tmp ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  in[0] = (uint8_t )58;
  in[1] = (uint8_t )215;
  in[2] = (uint8_t )123;
  in[3] = (uint8_t )180;
  in[4] = (uint8_t )13;
  in[5] = (uint8_t )122;
  in[6] = (uint8_t )54;
  in[7] = (uint8_t )96;
  in[8] = (uint8_t )168;
  in[9] = (uint8_t )158;
  in[10] = (uint8_t )202;
  in[11] = (uint8_t )243;
  in[12] = (uint8_t )36;
  in[13] = (uint8_t )102;
  in[14] = (uint8_t )239;
  in[15] = (uint8_t )151;
  out[0] = (uint8_t )107;
  out[1] = (uint8_t )193;
  out[2] = (uint8_t )190;
  out[3] = (uint8_t )226;
  out[4] = (uint8_t )46;
  out[5] = (uint8_t )64;
  out[6] = (uint8_t )159;
  out[7] = (uint8_t )150;
  out[8] = (uint8_t )233;
  out[9] = (uint8_t )61;
  out[10] = (uint8_t )126;
  out[11] = (uint8_t )17;
  out[12] = (uint8_t )115;
  out[13] = (uint8_t )147;
  out[14] = (uint8_t )23;
  out[15] = (uint8_t )42;
  AES_init_ctx(& ctx, (uint8_t const   *)(key));
  AES_ECB_decrypt(& ctx, (uint8_t const   *)(in));
  printf((char const   */* __restrict  */)"ECB decrypt: ");
  tmp = memcmp((void const   *)((char *)(out)), (void const   *)((char *)(in)), (size_t )16);
  if (0 == tmp) {
    printf((char const   */* __restrict  */)"SUCCESS!\n");
  } else {
    printf((char const   */* __restrict  */)"FAILURE!\n");
  }
  return;
}
}
static void test_decrypt_cbc(void) 
{ 
  uint8_t key[16] ;
  uint8_t in[64] ;
  uint8_t iv[16] ;
  uint8_t out[64] ;
  struct AES_ctx ctx ;
  int tmp ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  in[0] = (uint8_t )118;
  in[1] = (uint8_t )73;
  in[2] = (uint8_t )171;
  in[3] = (uint8_t )172;
  in[4] = (uint8_t )129;
  in[5] = (uint8_t )25;
  in[6] = (uint8_t )178;
  in[7] = (uint8_t )70;
  in[8] = (uint8_t )206;
  in[9] = (uint8_t )233;
  in[10] = (uint8_t )142;
  in[11] = (uint8_t )155;
  in[12] = (uint8_t )18;
  in[13] = (uint8_t )233;
  in[14] = (uint8_t )25;
  in[15] = (uint8_t )125;
  in[16] = (uint8_t )80;
  in[17] = (uint8_t )134;
  in[18] = (uint8_t )203;
  in[19] = (uint8_t )155;
  in[20] = (uint8_t )80;
  in[21] = (uint8_t )114;
  in[22] = (uint8_t )25;
  in[23] = (uint8_t )238;
  in[24] = (uint8_t )149;
  in[25] = (uint8_t )219;
  in[26] = (uint8_t )17;
  in[27] = (uint8_t )58;
  in[28] = (uint8_t )145;
  in[29] = (uint8_t )118;
  in[30] = (uint8_t )120;
  in[31] = (uint8_t )178;
  in[32] = (uint8_t )115;
  in[33] = (uint8_t )190;
  in[34] = (uint8_t )214;
  in[35] = (uint8_t )184;
  in[36] = (uint8_t )227;
  in[37] = (uint8_t )193;
  in[38] = (uint8_t )116;
  in[39] = (uint8_t )59;
  in[40] = (uint8_t )113;
  in[41] = (uint8_t )22;
  in[42] = (uint8_t )230;
  in[43] = (uint8_t )158;
  in[44] = (uint8_t )34;
  in[45] = (uint8_t )34;
  in[46] = (uint8_t )149;
  in[47] = (uint8_t )22;
  in[48] = (uint8_t )63;
  in[49] = (uint8_t )241;
  in[50] = (uint8_t )202;
  in[51] = (uint8_t )161;
  in[52] = (uint8_t )104;
  in[53] = (uint8_t )31;
  in[54] = (uint8_t )172;
  in[55] = (uint8_t )9;
  in[56] = (uint8_t )18;
  in[57] = (uint8_t )14;
  in[58] = (uint8_t )202;
  in[59] = (uint8_t )48;
  in[60] = (uint8_t )117;
  in[61] = (uint8_t )134;
  in[62] = (uint8_t )225;
  in[63] = (uint8_t )167;
  iv[0] = (uint8_t )0;
  iv[1] = (uint8_t )1;
  iv[2] = (uint8_t )2;
  iv[3] = (uint8_t )3;
  iv[4] = (uint8_t )4;
  iv[5] = (uint8_t )5;
  iv[6] = (uint8_t )6;
  iv[7] = (uint8_t )7;
  iv[8] = (uint8_t )8;
  iv[9] = (uint8_t )9;
  iv[10] = (uint8_t )10;
  iv[11] = (uint8_t )11;
  iv[12] = (uint8_t )12;
  iv[13] = (uint8_t )13;
  iv[14] = (uint8_t )14;
  iv[15] = (uint8_t )15;
  out[0] = (uint8_t )107;
  out[1] = (uint8_t )193;
  out[2] = (uint8_t )190;
  out[3] = (uint8_t )226;
  out[4] = (uint8_t )46;
  out[5] = (uint8_t )64;
  out[6] = (uint8_t )159;
  out[7] = (uint8_t )150;
  out[8] = (uint8_t )233;
  out[9] = (uint8_t )61;
  out[10] = (uint8_t )126;
  out[11] = (uint8_t )17;
  out[12] = (uint8_t )115;
  out[13] = (uint8_t )147;
  out[14] = (uint8_t )23;
  out[15] = (uint8_t )42;
  out[16] = (uint8_t )174;
  out[17] = (uint8_t )45;
  out[18] = (uint8_t )138;
  out[19] = (uint8_t )87;
  out[20] = (uint8_t )30;
  out[21] = (uint8_t )3;
  out[22] = (uint8_t )172;
  out[23] = (uint8_t )156;
  out[24] = (uint8_t )158;
  out[25] = (uint8_t )183;
  out[26] = (uint8_t )111;
  out[27] = (uint8_t )172;
  out[28] = (uint8_t )69;
  out[29] = (uint8_t )175;
  out[30] = (uint8_t )142;
  out[31] = (uint8_t )81;
  out[32] = (uint8_t )48;
  out[33] = (uint8_t )200;
  out[34] = (uint8_t )28;
  out[35] = (uint8_t )70;
  out[36] = (uint8_t )163;
  out[37] = (uint8_t )92;
  out[38] = (uint8_t )228;
  out[39] = (uint8_t )17;
  out[40] = (uint8_t )229;
  out[41] = (uint8_t )251;
  out[42] = (uint8_t )193;
  out[43] = (uint8_t )25;
  out[44] = (uint8_t )26;
  out[45] = (uint8_t )10;
  out[46] = (uint8_t )82;
  out[47] = (uint8_t )239;
  out[48] = (uint8_t )246;
  out[49] = (uint8_t )159;
  out[50] = (uint8_t )36;
  out[51] = (uint8_t )69;
  out[52] = (uint8_t )223;
  out[53] = (uint8_t )79;
  out[54] = (uint8_t )155;
  out[55] = (uint8_t )23;
  out[56] = (uint8_t )173;
  out[57] = (uint8_t )43;
  out[58] = (uint8_t )65;
  out[59] = (uint8_t )123;
  out[60] = (uint8_t )230;
  out[61] = (uint8_t )108;
  out[62] = (uint8_t )55;
  out[63] = (uint8_t )16;
  AES_init_ctx_iv(& ctx, (uint8_t const   *)(key), (uint8_t const   *)(iv));
  AES_CBC_decrypt_buffer(& ctx, in, (uint32_t )64);
  printf((char const   */* __restrict  */)"CBC decrypt: ");
  tmp = memcmp((void const   *)((char *)(out)), (void const   *)((char *)(in)), (size_t )64);
  if (0 == tmp) {
    printf((char const   */* __restrict  */)"SUCCESS!\n");
  } else {
    printf((char const   */* __restrict  */)"FAILURE!\n");
  }
  return;
}
}
static void test_encrypt_cbc(void) 
{ 
  uint8_t key[16] ;
  uint8_t out[64] ;
  uint8_t iv[16] ;
  uint8_t in[64] ;
  struct AES_ctx ctx ;
  int tmp ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  out[0] = (uint8_t )118;
  out[1] = (uint8_t )73;
  out[2] = (uint8_t )171;
  out[3] = (uint8_t )172;
  out[4] = (uint8_t )129;
  out[5] = (uint8_t )25;
  out[6] = (uint8_t )178;
  out[7] = (uint8_t )70;
  out[8] = (uint8_t )206;
  out[9] = (uint8_t )233;
  out[10] = (uint8_t )142;
  out[11] = (uint8_t )155;
  out[12] = (uint8_t )18;
  out[13] = (uint8_t )233;
  out[14] = (uint8_t )25;
  out[15] = (uint8_t )125;
  out[16] = (uint8_t )80;
  out[17] = (uint8_t )134;
  out[18] = (uint8_t )203;
  out[19] = (uint8_t )155;
  out[20] = (uint8_t )80;
  out[21] = (uint8_t )114;
  out[22] = (uint8_t )25;
  out[23] = (uint8_t )238;
  out[24] = (uint8_t )149;
  out[25] = (uint8_t )219;
  out[26] = (uint8_t )17;
  out[27] = (uint8_t )58;
  out[28] = (uint8_t )145;
  out[29] = (uint8_t )118;
  out[30] = (uint8_t )120;
  out[31] = (uint8_t )178;
  out[32] = (uint8_t )115;
  out[33] = (uint8_t )190;
  out[34] = (uint8_t )214;
  out[35] = (uint8_t )184;
  out[36] = (uint8_t )227;
  out[37] = (uint8_t )193;
  out[38] = (uint8_t )116;
  out[39] = (uint8_t )59;
  out[40] = (uint8_t )113;
  out[41] = (uint8_t )22;
  out[42] = (uint8_t )230;
  out[43] = (uint8_t )158;
  out[44] = (uint8_t )34;
  out[45] = (uint8_t )34;
  out[46] = (uint8_t )149;
  out[47] = (uint8_t )22;
  out[48] = (uint8_t )63;
  out[49] = (uint8_t )241;
  out[50] = (uint8_t )202;
  out[51] = (uint8_t )161;
  out[52] = (uint8_t )104;
  out[53] = (uint8_t )31;
  out[54] = (uint8_t )172;
  out[55] = (uint8_t )9;
  out[56] = (uint8_t )18;
  out[57] = (uint8_t )14;
  out[58] = (uint8_t )202;
  out[59] = (uint8_t )48;
  out[60] = (uint8_t )117;
  out[61] = (uint8_t )134;
  out[62] = (uint8_t )225;
  out[63] = (uint8_t )167;
  iv[0] = (uint8_t )0;
  iv[1] = (uint8_t )1;
  iv[2] = (uint8_t )2;
  iv[3] = (uint8_t )3;
  iv[4] = (uint8_t )4;
  iv[5] = (uint8_t )5;
  iv[6] = (uint8_t )6;
  iv[7] = (uint8_t )7;
  iv[8] = (uint8_t )8;
  iv[9] = (uint8_t )9;
  iv[10] = (uint8_t )10;
  iv[11] = (uint8_t )11;
  iv[12] = (uint8_t )12;
  iv[13] = (uint8_t )13;
  iv[14] = (uint8_t )14;
  iv[15] = (uint8_t )15;
  in[0] = (uint8_t )107;
  in[1] = (uint8_t )193;
  in[2] = (uint8_t )190;
  in[3] = (uint8_t )226;
  in[4] = (uint8_t )46;
  in[5] = (uint8_t )64;
  in[6] = (uint8_t )159;
  in[7] = (uint8_t )150;
  in[8] = (uint8_t )233;
  in[9] = (uint8_t )61;
  in[10] = (uint8_t )126;
  in[11] = (uint8_t )17;
  in[12] = (uint8_t )115;
  in[13] = (uint8_t )147;
  in[14] = (uint8_t )23;
  in[15] = (uint8_t )42;
  in[16] = (uint8_t )174;
  in[17] = (uint8_t )45;
  in[18] = (uint8_t )138;
  in[19] = (uint8_t )87;
  in[20] = (uint8_t )30;
  in[21] = (uint8_t )3;
  in[22] = (uint8_t )172;
  in[23] = (uint8_t )156;
  in[24] = (uint8_t )158;
  in[25] = (uint8_t )183;
  in[26] = (uint8_t )111;
  in[27] = (uint8_t )172;
  in[28] = (uint8_t )69;
  in[29] = (uint8_t )175;
  in[30] = (uint8_t )142;
  in[31] = (uint8_t )81;
  in[32] = (uint8_t )48;
  in[33] = (uint8_t )200;
  in[34] = (uint8_t )28;
  in[35] = (uint8_t )70;
  in[36] = (uint8_t )163;
  in[37] = (uint8_t )92;
  in[38] = (uint8_t )228;
  in[39] = (uint8_t )17;
  in[40] = (uint8_t )229;
  in[41] = (uint8_t )251;
  in[42] = (uint8_t )193;
  in[43] = (uint8_t )25;
  in[44] = (uint8_t )26;
  in[45] = (uint8_t )10;
  in[46] = (uint8_t )82;
  in[47] = (uint8_t )239;
  in[48] = (uint8_t )246;
  in[49] = (uint8_t )159;
  in[50] = (uint8_t )36;
  in[51] = (uint8_t )69;
  in[52] = (uint8_t )223;
  in[53] = (uint8_t )79;
  in[54] = (uint8_t )155;
  in[55] = (uint8_t )23;
  in[56] = (uint8_t )173;
  in[57] = (uint8_t )43;
  in[58] = (uint8_t )65;
  in[59] = (uint8_t )123;
  in[60] = (uint8_t )230;
  in[61] = (uint8_t )108;
  in[62] = (uint8_t )55;
  in[63] = (uint8_t )16;
  AES_init_ctx_iv(& ctx, (uint8_t const   *)(key), (uint8_t const   *)(iv));
  AES_CBC_encrypt_buffer(& ctx, in, (uint32_t )64);
  printf((char const   */* __restrict  */)"CBC encrypt: ");
  tmp = memcmp((void const   *)((char *)(out)), (void const   *)((char *)(in)), (size_t )64);
  if (0 == tmp) {
    printf((char const   */* __restrict  */)"SUCCESS!\n");
  } else {
    printf((char const   */* __restrict  */)"FAILURE!\n");
  }
  return;
}
}
int main(int argc , char **argv ) 
{ 
  char _1_main_$locals[24] ;
  union _1_main_$node _1_main_$stack[1][32] ;
  union _1_main_$node *_1_main_$sp[1] ;
  unsigned char *_1_main_$pc[1] ;

  {
  megaInit();
  _1_main_$sp[0] = _1_main_$stack[0];
  _1_main_$pc[0] = _1_main_$array[0];
  while (1) {
    switch (*(_1_main_$pc[0])) {
    case _1_main__return_int$expr_STA_0: 
    (_1_main_$pc[0]) ++;
    return ((_1_main_$sp[0] + 0)->_int);
    break;
    case _1_main__constant_int$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_int = *((int *)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_void_star = (_1_main_$sp[0] + 0)->_void_star;
    break;
    case _1_main__store_void_star$right_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    *((void **)(_1_main_$sp[0] + -1)->_void_star) = (_1_main_$sp[0] + 0)->_void_star;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__string$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$strings + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__label$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    break;
    case _1_main__local$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$locals + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__call$func_LIT_0: 
    (_1_main_$pc[0]) ++;
    switch (*((int *)_1_main_$pc[0])) {
    case 8: 
    test_encrypt_ecb_verbose();
    break;
    case 1: 
    printf(*((char const   * __restrict  *)(_1_main_$locals + 16)));
    break;
    case 3: 
    test_decrypt_cbc();
    break;
    case 4: 
    test_encrypt_ctr();
    break;
    case 7: 
    test_encrypt_ecb();
    break;
    case 6: 
    test_decrypt_ecb();
    break;
    case 2: 
    test_encrypt_cbc();
    break;
    case 5: 
    test_decrypt_ctr();
    break;
    }
    _1_main_$pc[0] += 4;
    break;
    case _1_main__goto$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    break;
    }
  }
}
}
void megaInit(void) 
{ 


  {

}
}
static void test_encrypt_ecb(void) 
{ 
  uint8_t key[16] ;
  uint8_t out[16] ;
  uint8_t in[16] ;
  struct AES_ctx ctx ;
  int tmp ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  out[0] = (uint8_t )58;
  out[1] = (uint8_t )215;
  out[2] = (uint8_t )123;
  out[3] = (uint8_t )180;
  out[4] = (uint8_t )13;
  out[5] = (uint8_t )122;
  out[6] = (uint8_t )54;
  out[7] = (uint8_t )96;
  out[8] = (uint8_t )168;
  out[9] = (uint8_t )158;
  out[10] = (uint8_t )202;
  out[11] = (uint8_t )243;
  out[12] = (uint8_t )36;
  out[13] = (uint8_t )102;
  out[14] = (uint8_t )239;
  out[15] = (uint8_t )151;
  in[0] = (uint8_t )107;
  in[1] = (uint8_t )193;
  in[2] = (uint8_t )190;
  in[3] = (uint8_t )226;
  in[4] = (uint8_t )46;
  in[5] = (uint8_t )64;
  in[6] = (uint8_t )159;
  in[7] = (uint8_t )150;
  in[8] = (uint8_t )233;
  in[9] = (uint8_t )61;
  in[10] = (uint8_t )126;
  in[11] = (uint8_t )17;
  in[12] = (uint8_t )115;
  in[13] = (uint8_t )147;
  in[14] = (uint8_t )23;
  in[15] = (uint8_t )42;
  AES_init_ctx(& ctx, (uint8_t const   *)(key));
  AES_ECB_encrypt(& ctx, (uint8_t const   *)(in));
  printf((char const   */* __restrict  */)"ECB encrypt: ");
  tmp = memcmp((void const   *)((char *)(out)), (void const   *)((char *)(in)), (size_t )16);
  if (0 == tmp) {
    printf((char const   */* __restrict  */)"SUCCESS!\n");
  } else {
    printf((char const   */* __restrict  */)"FAILURE!\n");
  }
  return;
}
}
static void test_decrypt_ctr(void) 
{ 


  {
  test_xcrypt_ctr("decrypt");
  return;
}
}
static void test_encrypt_ecb_verbose(void) 
{ 
  uint8_t i ;
  uint8_t buf[64] ;
  uint8_t buf2[64] ;
  uint8_t key[16] ;
  uint8_t plain_text[64] ;
  struct AES_ctx ctx ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  plain_text[0] = (uint8_t )107;
  plain_text[1] = (uint8_t )193;
  plain_text[2] = (uint8_t )190;
  plain_text[3] = (uint8_t )226;
  plain_text[4] = (uint8_t )46;
  plain_text[5] = (uint8_t )64;
  plain_text[6] = (uint8_t )159;
  plain_text[7] = (uint8_t )150;
  plain_text[8] = (uint8_t )233;
  plain_text[9] = (uint8_t )61;
  plain_text[10] = (uint8_t )126;
  plain_text[11] = (uint8_t )17;
  plain_text[12] = (uint8_t )115;
  plain_text[13] = (uint8_t )147;
  plain_text[14] = (uint8_t )23;
  plain_text[15] = (uint8_t )42;
  plain_text[16] = (uint8_t )174;
  plain_text[17] = (uint8_t )45;
  plain_text[18] = (uint8_t )138;
  plain_text[19] = (uint8_t )87;
  plain_text[20] = (uint8_t )30;
  plain_text[21] = (uint8_t )3;
  plain_text[22] = (uint8_t )172;
  plain_text[23] = (uint8_t )156;
  plain_text[24] = (uint8_t )158;
  plain_text[25] = (uint8_t )183;
  plain_text[26] = (uint8_t )111;
  plain_text[27] = (uint8_t )172;
  plain_text[28] = (uint8_t )69;
  plain_text[29] = (uint8_t )175;
  plain_text[30] = (uint8_t )142;
  plain_text[31] = (uint8_t )81;
  plain_text[32] = (uint8_t )48;
  plain_text[33] = (uint8_t )200;
  plain_text[34] = (uint8_t )28;
  plain_text[35] = (uint8_t )70;
  plain_text[36] = (uint8_t )163;
  plain_text[37] = (uint8_t )92;
  plain_text[38] = (uint8_t )228;
  plain_text[39] = (uint8_t )17;
  plain_text[40] = (uint8_t )229;
  plain_text[41] = (uint8_t )251;
  plain_text[42] = (uint8_t )193;
  plain_text[43] = (uint8_t )25;
  plain_text[44] = (uint8_t )26;
  plain_text[45] = (uint8_t )10;
  plain_text[46] = (uint8_t )82;
  plain_text[47] = (uint8_t )239;
  plain_text[48] = (uint8_t )246;
  plain_text[49] = (uint8_t )159;
  plain_text[50] = (uint8_t )36;
  plain_text[51] = (uint8_t )69;
  plain_text[52] = (uint8_t )223;
  plain_text[53] = (uint8_t )79;
  plain_text[54] = (uint8_t )155;
  plain_text[55] = (uint8_t )23;
  plain_text[56] = (uint8_t )173;
  plain_text[57] = (uint8_t )43;
  plain_text[58] = (uint8_t )65;
  plain_text[59] = (uint8_t )123;
  plain_text[60] = (uint8_t )230;
  plain_text[61] = (uint8_t )108;
  plain_text[62] = (uint8_t )55;
  plain_text[63] = (uint8_t )16;
  memset((void *)(buf), 0, (size_t )64);
  memset((void *)(buf2), 0, (size_t )64);
  printf((char const   */* __restrict  */)"ECB encrypt verbose:\n\n");
  printf((char const   */* __restrict  */)"plain text:\n");
  i = (uint8_t )0;
  while ((int )i < 4) {
    phex(plain_text + (int )i * 16);
    i = (uint8_t )((int )i + 1);
  }
  printf((char const   */* __restrict  */)"\n");
  printf((char const   */* __restrict  */)"key:\n");
  phex(key);
  printf((char const   */* __restrict  */)"\n");
  printf((char const   */* __restrict  */)"ciphertext:\n");
  AES_init_ctx(& ctx, (uint8_t const   *)(key));
  i = (uint8_t )0;
  while ((int )i < 4) {
    AES_ECB_encrypt(& ctx, (uint8_t const   *)(plain_text + (int )i * 16));
    phex(plain_text + (int )i * 16);
    i = (uint8_t )((int )i + 1);
  }
  printf((char const   */* __restrict  */)"\n");
  return;
}
}
static void test_xcrypt_ctr(char const   *xcrypt ) 
{ 
  uint8_t key[16] ;
  uint8_t in[64] ;
  uint8_t iv[16] ;
  uint8_t out[64] ;
  struct AES_ctx ctx ;
  int tmp ;

  {
  key[0] = (uint8_t )43;
  key[1] = (uint8_t )126;
  key[2] = (uint8_t )21;
  key[3] = (uint8_t )22;
  key[4] = (uint8_t )40;
  key[5] = (uint8_t )174;
  key[6] = (uint8_t )210;
  key[7] = (uint8_t )166;
  key[8] = (uint8_t )171;
  key[9] = (uint8_t )247;
  key[10] = (uint8_t )21;
  key[11] = (uint8_t )136;
  key[12] = (uint8_t )9;
  key[13] = (uint8_t )207;
  key[14] = (uint8_t )79;
  key[15] = (uint8_t )60;
  in[0] = (uint8_t )135;
  in[1] = (uint8_t )77;
  in[2] = (uint8_t )97;
  in[3] = (uint8_t )145;
  in[4] = (uint8_t )182;
  in[5] = (uint8_t )32;
  in[6] = (uint8_t )227;
  in[7] = (uint8_t )38;
  in[8] = (uint8_t )27;
  in[9] = (uint8_t )239;
  in[10] = (uint8_t )104;
  in[11] = (uint8_t )100;
  in[12] = (uint8_t )153;
  in[13] = (uint8_t )13;
  in[14] = (uint8_t )182;
  in[15] = (uint8_t )206;
  in[16] = (uint8_t )152;
  in[17] = (uint8_t )6;
  in[18] = (uint8_t )246;
  in[19] = (uint8_t )107;
  in[20] = (uint8_t )121;
  in[21] = (uint8_t )112;
  in[22] = (uint8_t )253;
  in[23] = (uint8_t )255;
  in[24] = (uint8_t )134;
  in[25] = (uint8_t )23;
  in[26] = (uint8_t )24;
  in[27] = (uint8_t )123;
  in[28] = (uint8_t )185;
  in[29] = (uint8_t )255;
  in[30] = (uint8_t )253;
  in[31] = (uint8_t )255;
  in[32] = (uint8_t )90;
  in[33] = (uint8_t )228;
  in[34] = (uint8_t )223;
  in[35] = (uint8_t )62;
  in[36] = (uint8_t )219;
  in[37] = (uint8_t )213;
  in[38] = (uint8_t )211;
  in[39] = (uint8_t )94;
  in[40] = (uint8_t )91;
  in[41] = (uint8_t )79;
  in[42] = (uint8_t )9;
  in[43] = (uint8_t )2;
  in[44] = (uint8_t )13;
  in[45] = (uint8_t )176;
  in[46] = (uint8_t )62;
  in[47] = (uint8_t )171;
  in[48] = (uint8_t )30;
  in[49] = (uint8_t )3;
  in[50] = (uint8_t )29;
  in[51] = (uint8_t )218;
  in[52] = (uint8_t )47;
  in[53] = (uint8_t )190;
  in[54] = (uint8_t )3;
  in[55] = (uint8_t )209;
  in[56] = (uint8_t )121;
  in[57] = (uint8_t )33;
  in[58] = (uint8_t )112;
  in[59] = (uint8_t )160;
  in[60] = (uint8_t )243;
  in[61] = (uint8_t )0;
  in[62] = (uint8_t )156;
  in[63] = (uint8_t )238;
  iv[0] = (uint8_t )240;
  iv[1] = (uint8_t )241;
  iv[2] = (uint8_t )242;
  iv[3] = (uint8_t )243;
  iv[4] = (uint8_t )244;
  iv[5] = (uint8_t )245;
  iv[6] = (uint8_t )246;
  iv[7] = (uint8_t )247;
  iv[8] = (uint8_t )248;
  iv[9] = (uint8_t )249;
  iv[10] = (uint8_t )250;
  iv[11] = (uint8_t )251;
  iv[12] = (uint8_t )252;
  iv[13] = (uint8_t )253;
  iv[14] = (uint8_t )254;
  iv[15] = (uint8_t )255;
  out[0] = (uint8_t )107;
  out[1] = (uint8_t )193;
  out[2] = (uint8_t )190;
  out[3] = (uint8_t )226;
  out[4] = (uint8_t )46;
  out[5] = (uint8_t )64;
  out[6] = (uint8_t )159;
  out[7] = (uint8_t )150;
  out[8] = (uint8_t )233;
  out[9] = (uint8_t )61;
  out[10] = (uint8_t )126;
  out[11] = (uint8_t )17;
  out[12] = (uint8_t )115;
  out[13] = (uint8_t )147;
  out[14] = (uint8_t )23;
  out[15] = (uint8_t )42;
  out[16] = (uint8_t )174;
  out[17] = (uint8_t )45;
  out[18] = (uint8_t )138;
  out[19] = (uint8_t )87;
  out[20] = (uint8_t )30;
  out[21] = (uint8_t )3;
  out[22] = (uint8_t )172;
  out[23] = (uint8_t )156;
  out[24] = (uint8_t )158;
  out[25] = (uint8_t )183;
  out[26] = (uint8_t )111;
  out[27] = (uint8_t )172;
  out[28] = (uint8_t )69;
  out[29] = (uint8_t )175;
  out[30] = (uint8_t )142;
  out[31] = (uint8_t )81;
  out[32] = (uint8_t )48;
  out[33] = (uint8_t )200;
  out[34] = (uint8_t )28;
  out[35] = (uint8_t )70;
  out[36] = (uint8_t )163;
  out[37] = (uint8_t )92;
  out[38] = (uint8_t )228;
  out[39] = (uint8_t )17;
  out[40] = (uint8_t )229;
  out[41] = (uint8_t )251;
  out[42] = (uint8_t )193;
  out[43] = (uint8_t )25;
  out[44] = (uint8_t )26;
  out[45] = (uint8_t )10;
  out[46] = (uint8_t )82;
  out[47] = (uint8_t )239;
  out[48] = (uint8_t )246;
  out[49] = (uint8_t )159;
  out[50] = (uint8_t )36;
  out[51] = (uint8_t )69;
  out[52] = (uint8_t )223;
  out[53] = (uint8_t )79;
  out[54] = (uint8_t )155;
  out[55] = (uint8_t )23;
  out[56] = (uint8_t )173;
  out[57] = (uint8_t )43;
  out[58] = (uint8_t )65;
  out[59] = (uint8_t )123;
  out[60] = (uint8_t )230;
  out[61] = (uint8_t )108;
  out[62] = (uint8_t )55;
  out[63] = (uint8_t )16;
  AES_init_ctx_iv(& ctx, (uint8_t const   *)(key), (uint8_t const   *)(iv));
  AES_CTR_xcrypt_buffer(& ctx, in, (uint32_t )64);
  printf((char const   */* __restrict  */)"CTR %s: ", xcrypt);
  tmp = memcmp((void const   *)((char *)(out)), (void const   *)((char *)(in)), (size_t )64);
  if (0 == tmp) {
    printf((char const   */* __restrict  */)"SUCCESS!\n");
  } else {
    printf((char const   */* __restrict  */)"FAILURE!\n");
  }
  return;
}
}
