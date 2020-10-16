
#include "shape_math.h"


#define pi 3.14

int rectangle_area(int len_rect, int bred_rect)
{
      return len_rect*bred_rect;
}
int rectangle_peri(int len_rect, int bred_rect)
{
      return 2*(len_rect+bred_rect);
}

int circle_area(int radius)
{
     return pi*radius*radius;
}

int circle_peri(int radius)
{
     return 2*pi*radius;
}
int square_area(int side)
{
     return side*side;
}

int square_peri(int side)
{    
    return 4*side;
}
int triangle_area(int side1,int side2, int side3)
{
    int semi,prod,area;
    semi=(side1+side2+side3)/2;
    prod=semi*(semi-side1)*(semi-side2)*(semi-side3); 
    area=sqrt(prod);
    return area;
}
int triangle_peri(int side1,int side2, int side3)
{
    return side1+side2+side3;
}


int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int mod(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 % operand2;
}

int is_prime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return -1;
  else
  return 1;
}

int is_even_odd(int operand1)
{
	if(operand1%2==0)
		return 1;
	else
		return 0;
}

int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * factorial(operand1-1);
}

int positive(int operand1)
{
	if(operand1>0)
		return 1;
}

int negative(int operand1)
{
	if(operand1<0)
		return 0;
}

int zero(int operand1)
{
	if(operand1==0)
		return 0;
}

int getReverse(int operand1) {
    int r=0;
    while (operand1>0) {
        r=(r*10)+(operand1%10);
        operand1=operand1/10;
    }
    return r;
  }
   

int getSumOfDigits(int operand1){
    int sum = 0;
    while(operand1!= 0){
        sum =sum + operand1%10;
        operand1= operand1/10; 
    }
    return sum;
}
int magic(int operand1, int operand2, int operand3){
	if ((operand1* operand2) == operand3)
		return 1;
	else
		return 0;
}
	
