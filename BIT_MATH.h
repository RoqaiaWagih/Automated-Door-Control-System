/*
 * BIT_MATH.h
 *
 * Created: 3/7/2024 
 *  Author:  Roqaia Khalid
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT_NUM)			REG|=(1<<BIT_NUM)
#define CLR_BIT(REG,BIT_NUM)			REG&=(~(1<<BIT_NUM))
#define TOG_BIT(REG,BIT_NUM)			REG^=(1<<BIT_NUM)
#define GET_BIT(REG,BIT_NUM)		    ((REG>>BIT_NUM)&0X01)




#endif /* BIT_MATH_H_ */