#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, s = 0;
    printf("Enter a number:\t");
    scanf("%d", &a);
    c = a;
   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }
   if(s == c)
   {
      printf("The number is a palindrome", c);
   }
   else
   {
      printf("The number is not a palindrome", c);
   }
  getch();
}
