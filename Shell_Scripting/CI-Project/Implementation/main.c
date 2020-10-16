#include<stdio.h>
#include "shape_math.h"


int main()
{
    int number,len,bred,side,rad,side1,side2,side3;
    int rect_area, rect_peri, circ_peri, circ_area,sqr_area,sqr_peri,tri_area, tri_peri;
    int num_add,num_sub,num_mul,num_div,num_mod,if_prime,if_even,fact,if_pos,if_neg,if_zero,rev,sum_dig,mag;
    /*printf("Menu:\n");
    printf("1. Calculating area of Rectangle\n");
    printf("2. Calculations on Square\n");
    printf("3. Calculations on Circle\n");
    printf("4. Calculations on Triangle\n");    
    printf("Select option from the menu: \n");
    */
    
    scanf("%d",&number);
    if((number>0)&&(number<6))
    { 
       switch(number)
        {
        case 1:
            scanf("%d %d",&len,&bred);
            rect_area=rectangle_area(len,bred);
            rect_peri=rectangle_peri(len,bred); 
            num_add=add(rect_area,rect_peri);
            num_sub=subtract(rect_area,rect_peri);
            num_mul=multiply(rect_area,rect_peri);
            num_div=divide(rect_area,rect_peri);
            num_mod=mod(rect_area,rect_peri);
            if_prime=is_prime(rect_area);
            if_prime=is_prime(rect_peri);   
            if_even=is_even_odd(rect_area); 
            if_even=is_even_odd(rect_peri);   
            if_pos=positive(rect_area);
            if_pos=positive(rect_peri);   
            if_neg=negative(rect_area);
            if_neg=negative(rect_peri);   
            if_zero=zero(rect_area);
            if_zero=zero(rect_peri);
            fact=factorial(rect_area);
            fact=factorial(rect_peri);
            rev=getSumOfDigits(rect_area);            
            sum_dig=getReverse(rect_area);
            mag=magic(rev,sum_dig,rect_area);    
            rev=getSumOfDigits(rect_peri);
            sum_dig=getReverse(rect_peri);
            mag=magic(rev,sum_dig,rect_peri); 
            break;
        case 2:
            scanf("%d",&side);
            sqr_area=square_area(side); 
            sqr_peri=square_peri(side);
            num_add=add(rect_area,rect_peri);
            num_sub=subtract(sqr_area,sqr_peri);
            num_mul=multiply(sqr_area,sqr_peri);
            num_div=divide(sqr_area,sqr_peri);
            num_mod=mod(sqr_area,sqr_peri);
            if_prime=is_prime(sqr_area);
            if_prime=is_prime(sqr_peri); 
            if_even=is_even_odd(sqr_area); 
            if_even=is_even_odd(sqr_peri);   
            if_pos=positive(sqr_area);
            if_pos=positive(sqr_peri);   
            if_neg=negative(sqr_area);
            if_neg=negative(sqr_peri);   
            if_zero=zero(sqr_area);
            if_zero=zero(sqr_peri);
            fact=factorial(sqr_area);
            fact=factorial(sqr_peri);
            rev=getSumOfDigits(sqr_area);            
            sum_dig=getReverse(sqr_area);
            mag=magic(rev,sum_dig,sqr_area);    
            rev=getSumOfDigits(sqr_peri);
            sum_dig=getReverse(sqr_peri);
            mag=magic(rev,sum_dig,sqr_peri);    
            break;
        case 3:
            scanf("%d",&rad);
            circ_area=circle_area(rad);
            circ_peri=circle_peri(rad);
            num_add=add(rect_area,rect_peri);
            num_sub=subtract(circ_area,circ_peri);
            num_mul=multiply(circ_area,circ_peri);
            num_div=divide(circ_area,circ_peri);
            num_mod=mod(circ_area,circ_peri);
            if_prime=is_prime(circ_area);
            if_prime=is_prime(circ_peri); 
            if_even=is_even_odd(circ_area); 
            if_even=is_even_odd(circ_peri);   
            if_pos=positive(circ_area);
            if_pos=positive(circ_peri);   
            if_neg=negative(circ_area);
            if_neg=negative(circ_peri);   
            if_zero=zero(circ_area);
            if_zero=zero(circ_peri);
            fact=factorial(circ_area);
            fact=factorial(circ_peri);
            rev=getSumOfDigits(circ_area);            
            sum_dig=getReverse(circ_area);
            mag=magic(rev,sum_dig,circ_area);    
            rev=getSumOfDigits(circ_peri);
            sum_dig=getReverse(circ_peri);
            mag=magic(rev,sum_dig,circ_peri);    
            break;
        case 4:
            scanf("%d %d %d",&side1,&side2,&side3);
            tri_area=triangle_area(side1,side2,side3);
            tri_peri=triangle_peri(side1,side2,side3);
            circ_area=circle_area(rad);
            circ_peri=circle_peri(rad);
            num_add=add(rect_area,rect_peri);
            num_sub=subtract(tri_area,tri_peri);
            num_mul=multiply(tri_area,tri_peri);
            num_div=divide(tri_area,tri_peri);
            num_mod=mod(tri_area,tri_peri);
            if_prime=is_prime(tri_area);
            if_prime=is_prime(tri_peri); 
            if_even=is_even_odd(tri_area); 
            if_even=is_even_odd(tri_peri);   
            if_pos=positive(tri_area);
            if_pos=positive(tri_peri);   
            if_neg=negative(tri_area);
            if_neg=negative(tri_peri);   
            if_zero=zero(tri_area);
            if_zero=zero(tri_peri);
            fact=factorial(tri_area);
            fact=factorial(tri_peri);
            rev=getSumOfDigits(tri_area);            
            sum_dig=getReverse(tri_area);
            mag=magic(rev,sum_dig,tri_area);    
            rev=getSumOfDigits(tri_peri);
            sum_dig=getReverse(tri_peri);
            mag=magic(rev,sum_dig,tri_peri);    
            break;
       default:
            printf("\nWrong input");
            break;

      }
    
    }
}
