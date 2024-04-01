/*
 * STD_TYPES.h
 *
 * Created: 3/7/2024 
 *  Author:  Roqaia Khalid
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_


typedef unsigned char               u8;
typedef signed char                 s8;

typedef unsigned short int			u16;
typedef signed short int            s16;

typedef unsigned long int           u32;
typedef signed long int             s32;

typedef float                       f32;
typedef double                      f64;

typedef enum
{
	false=0,
	true,
}BOOL;

#define NULL                        (void*)0




#endif /* STD_TYPES_H_ */