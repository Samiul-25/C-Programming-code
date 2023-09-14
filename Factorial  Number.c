#include<stdio.h>
void main()
{
   int i, num;
   long int fact = 1;
   printf("Enter the number: ");
   scanf("%d" ,&num);
   for(i = 1; i <= num; i++)
   {
       fact = fact * i;
   }
   printf("Factorial number is: %ld", fact);
}
