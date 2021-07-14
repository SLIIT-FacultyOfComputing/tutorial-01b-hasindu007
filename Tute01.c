/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main()
{
int mark1,mark2 ;
float avg;

printf("enther the mark 1 :");
scanf("%d",&mark1);

printf("enther the mark 2 :");
scanf("%d",&mark2);

avg=(mark1 + mark2)/2 ;


printf("avg is : %.2f",avg);


return 0 ;



}
