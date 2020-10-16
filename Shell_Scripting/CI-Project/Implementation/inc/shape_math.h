
#ifndef __SHAPE_MATH_H__
#define __SHAPE_MATH_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rectangle(int len_rect, int bred_rect);
int circle(int radius);
int square(int side);
int triangle(int side1,int side2, int side3);

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int mod(int operand1,int operand2);
int is_prime(int operand1);
int is_even_odd(int operand1);
int factorial(int operand1);
int positive(int operand1); 
int negative(int operand1); 
int zero(int operand1); 
int getReverse(int num);
int getSumOfDigits(int operand1);
int magic(int operand1,int operand2,int operand3);

#endif
