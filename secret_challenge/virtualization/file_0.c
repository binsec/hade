/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
enum _1_main_$op;
union _1_main_$node;
struct timeval;
extern void signal(int sig , void *func ) ;
extern float strtof(char const   *str , char const   *endptr ) ;
typedef struct _IO_FILE FILE;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
enum _1_main_$op {
    _1_main__store_int$left_STA_0$right_STA_1 = 125,
    _1_main__store_void_star$left_STA_0$right_STA_1 = 31,
    _1_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1 = 214,
    _1_main__load_void_star$left_STA_0$result_STA_0 = 233,
    _1_main__constant_unsigned_long$result_STA_0$value_LIT_0 = 175,
    _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1 = 89,
    _1_main__string$result_STA_0$value_LIT_0 = 235,
    _1_main__branchIfTrue$expr_STA_0$label_LAB_0 = 191,
    _1_main__constant_int$result_STA_0$value_LIT_0 = 7,
    _1_main__convert_void_star2void_star$left_STA_0$result_STA_0 = 239,
    _1_main__goto$label_LAB_0 = 55,
    _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1 = 254,
    _1_main__label$label_LAB_0 = 85,
    _1_main__call$func_LIT_0 = 58,
    _1_main__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1 = 94,
    _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0 = 22,
    _1_main__load_int$left_STA_0$result_STA_0 = 150,
    _1_main__return_int$expr_STA_0 = 34,
    _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1 = 137,
    _1_main__convert_char2int$left_STA_0$result_STA_0 = 60,
    _1_main__load_char$left_STA_0$result_STA_0 = 108,
    _1_main__local$result_STA_0$value_LIT_0 = 252,
    _1_main__formal$result_STA_0$value_LIT_0 = 132
} ;
unsigned char _1_main_$array[1][226]  = { {        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__store_int$left_STA_0$right_STA_1,        _1_main__formal$result_STA_0$value_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_void_star$left_STA_0$result_STA_0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)8,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__load_void_star$left_STA_0$result_STA_0,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)24,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__store_void_star$left_STA_0$right_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)24, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_void_star$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)32,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__store_void_star$left_STA_0$right_STA_1,        _1_main__goto$label_LAB_0,        (unsigned char)4, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)32,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_void_star$left_STA_0$result_STA_0,        _1_main__load_char$left_STA_0$result_STA_0,        _1_main__convert_char2int$left_STA_0$result_STA_0,        _1_main__branchIfTrue$expr_STA_0$label_LAB_0, 
            (unsigned char)14,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__goto$label_LAB_0,        (unsigned char)4,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__goto$label_LAB_0,        (unsigned char)64,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)32,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__load_void_star$left_STA_0$result_STA_0,        _1_main__load_char$left_STA_0$result_STA_0,        _1_main__convert_char2int$left_STA_0$result_STA_0, 
            _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__store_int$left_STA_0$right_STA_1,        _1_main__local$result_STA_0$value_LIT_0, 
            (unsigned char)32,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__load_void_star$left_STA_0$result_STA_0,        _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)1,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0,        _1_main__constant_unsigned_long$result_STA_0$value_LIT_0, 
            (unsigned char)1,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1,        _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)32, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__store_void_star$left_STA_0$right_STA_1, 
            _1_main__goto$label_LAB_0,        (unsigned char)182,        (unsigned char)255,        (unsigned char)255, 
            (unsigned char)255,        _1_main__goto$label_LAB_0,        (unsigned char)177,        (unsigned char)255, 
            (unsigned char)255,        (unsigned char)255,        _1_main__string$result_STA_0$value_LIT_0,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)40,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__store_void_star$left_STA_0$right_STA_1,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)48,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__store_int$left_STA_0$right_STA_1,        _1_main__call$func_LIT_0,        (unsigned char)1, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)64,        (unsigned char)6,        (unsigned char)0, 
            (unsigned char)0,        _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)16,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__load_int$left_STA_0$result_STA_0,        _1_main__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1, 
            _1_main__branchIfTrue$expr_STA_0$label_LAB_0,        (unsigned char)9,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__goto$label_LAB_0,        (unsigned char)26,        (unsigned char)0, 
            (unsigned char)0,        (unsigned char)0,        _1_main__string$result_STA_0$value_LIT_0,        (unsigned char)12, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__convert_void_star2void_star$left_STA_0$result_STA_0, 
            _1_main__local$result_STA_0$value_LIT_0,        (unsigned char)56,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__store_void_star$left_STA_0$right_STA_1,        _1_main__call$func_LIT_0,        (unsigned char)2, 
            (unsigned char)0,        (unsigned char)0,        (unsigned char)0,        _1_main__goto$label_LAB_0, 
            (unsigned char)4,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            _1_main__constant_int$result_STA_0$value_LIT_0,        (unsigned char)0,        (unsigned char)0,        (unsigned char)0, 
            (unsigned char)0,        _1_main__return_int$expr_STA_0}};
extern void exit(int status ) ;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   * __restrict  __format  , ...) ;
int main(int argc , char **argv ) ;
void megaInit(void) ;
extern unsigned long strlen(char const   *s ) ;
char const   *_1_main_$strings  =    "Sum is: %d\n\000success!\n\000";
extern long strtol(char const   *str , char const   *endptr , int base ) ;
union _1_main_$node {
   void *_void_star ;
   unsigned long _unsigned_long ;
   int _int ;
   char _char ;
};
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void *malloc(unsigned long size ) ;
extern int scanf(char const   *format  , ...) ;
int main(int argc , char **argv ) 
{ 
  char _1_main_$locals[64] ;
  union _1_main_$node _1_main_$stack[1][32] ;
  union _1_main_$node *_1_main_$sp[1] ;
  unsigned char *_1_main_$pc[1] ;

  {
  megaInit();
  _1_main_$sp[0] = _1_main_$stack[0];
  _1_main_$pc[0] = _1_main_$array[0];
  while (1) {
    switch (*(_1_main_$pc[0])) {
    case _1_main__store_void_star$left_STA_0$right_STA_1: 
    (_1_main_$pc[0]) ++;
    *((void **)(_1_main_$sp[0] + 0)->_void_star) = (_1_main_$sp[0] + -1)->_void_star;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__branchIfTrue$expr_STA_0$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    if ((_1_main_$sp[0] + 0)->_int) {
      _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    } else {
      _1_main_$pc[0] += 4;
    }
    (_1_main_$sp[0]) --;
    break;
    case _1_main__constant_int$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_int = *((int *)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__goto$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    _1_main_$pc[0] += *((int *)_1_main_$pc[0]);
    break;
    case _1_main__load_void_star$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_void_star = *((void **)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__store_int$left_STA_0$right_STA_1: 
    (_1_main_$pc[0]) ++;
    *((int *)(_1_main_$sp[0] + 0)->_void_star) = (_1_main_$sp[0] + -1)->_int;
    _1_main_$sp[0] += -2;
    break;
    case _1_main__label$label_LAB_0: 
    (_1_main_$pc[0]) ++;
    break;
    case _1_main__PlusPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_void_star = (_1_main_$sp[0] + -1)->_void_star + (_1_main_$sp[0] + 0)->_unsigned_long;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__return_int$expr_STA_0: 
    (_1_main_$pc[0]) ++;
    return ((_1_main_$sp[0] + 0)->_int);
    break;
    case _1_main__convert_void_star2void_star$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_void_star = (_1_main_$sp[0] + 0)->_void_star;
    break;
    case _1_main__string$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$strings + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__load_char$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_char = *((char *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__local$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_void_star = (void *)(_1_main_$locals + *((int *)_1_main_$pc[0]));
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__Mult_unsigned_long_unsigned_long2unsigned_long$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_unsigned_long = (_1_main_$sp[0] + -1)->_unsigned_long * (_1_main_$sp[0] + 0)->_unsigned_long;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__load_int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = *((int *)(_1_main_$sp[0] + 0)->_void_star);
    break;
    case _1_main__formal$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    switch (*((int *)_1_main_$pc[0])) {
    case 1: 
    (_1_main_$sp[0] + 1)->_void_star = (void *)(& argv);
    break;
    case 0: 
    (_1_main_$sp[0] + 1)->_void_star = (void *)(& argc);
    break;
    }
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 4;
    break;
    case _1_main__IndexPI_void_star_unsigned_long2void_star$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_void_star = (_1_main_$sp[0] + -1)->_void_star + (_1_main_$sp[0] + 0)->_unsigned_long;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__Eq_int_int2int$left_STA_0$result_STA_0$right_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + 0)->_int == (_1_main_$sp[0] + -1)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__constant_unsigned_long$result_STA_0$value_LIT_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 1)->_unsigned_long = *((unsigned long *)_1_main_$pc[0]);
    (_1_main_$sp[0]) ++;
    _1_main_$pc[0] += 8;
    break;
    case _1_main__convert_char2int$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_int = (int )(_1_main_$sp[0] + 0)->_char;
    break;
    case _1_main__convert_int2unsigned_long$left_STA_0$result_STA_0: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + 0)->_unsigned_long = (unsigned long )(_1_main_$sp[0] + 0)->_int;
    break;
    case _1_main__PlusA_int_int2int$right_STA_0$result_STA_0$left_STA_1: 
    (_1_main_$pc[0]) ++;
    (_1_main_$sp[0] + -1)->_int = (_1_main_$sp[0] + -1)->_int + (_1_main_$sp[0] + 0)->_int;
    (_1_main_$sp[0]) --;
    break;
    case _1_main__call$func_LIT_0: 
    (_1_main_$pc[0]) ++;
    switch (*((int *)_1_main_$pc[0])) {
    case 1: 
    printf(*((char const   * __restrict  *)(_1_main_$locals + 40)), *((int *)(_1_main_$locals + 48)));
    break;
    case 2: 
    printf(*((char const   * __restrict  *)(_1_main_$locals + 56)));
    break;
    }
    _1_main_$pc[0] += 4;
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
