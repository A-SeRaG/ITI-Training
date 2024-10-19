
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "avr/delay.h"

#define SET_BIT(REG, BIT) REG|=(1<<BIT)
#define CLR_BIT(REG, BIT) REG&=~(1<<BIT)
#define TOGL_BIT(REG, BIT) REG^=(1<<BIT)
#define GIT_BIT(REG, BIT) 1&(1>>BIT)

#endif /* BIT_MATH_H_ */
