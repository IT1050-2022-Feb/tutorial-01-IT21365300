/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark01 , mark02 ;
  float average ;

  //input the marks of two subjects
 printf("Enter the mark 01 :") ;
 scanf("%f" , &mark01) ;

 printf("Enter the mark 02 :") ;
 scanf("%f" , &mark02) ;

 //calculate the average

 average = (mark01 + mark02) / 2 ;

 //print the average of two marks

 printf("Average is : %.2f" , average) ;

  
  return 0;
}

