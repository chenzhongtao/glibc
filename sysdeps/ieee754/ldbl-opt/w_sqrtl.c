#include <math_ldbl_opt.h>
#undef weak_alias
#define weak_alias(n,a)
#include <math/w_sqrtl.c>
long_double_symbol (libm, __sqrtl, sqrtl);
