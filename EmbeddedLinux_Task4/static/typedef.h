#ifndef TYPEDEF_H_
#define TYPEDEF_H_

typedef signed char s8;
typedef unsigned char u8;
typedef short int s16;
typedef unsigned short int u16;
typedef signed int s32;
typedef unsigned int u32;
typedef long long int s64;
typedef unsigned long long int u64;

typedef float f32;
typedef double f64;

typedef volatile char* volatile_s8_ptr;
typedef volatile unsigned char* volatile_u8_ptr;
typedef volatile short int* volatile_s16_ptr;
typedef volatile unsigned short int* volatile_u16_ptr;
typedef volatile signed int* volatile_s32_ptr;
typedef volatile unsigned int* volatile_u32_ptr;
typedef volatile long long int* volatile_s64_ptr;
typedef volatile unsigned long long int* volatile_u64_ptr;
typedef volatile float* volatile_f32_ptr;
typedef volatile double* volatile_f64_ptr;

#endif
