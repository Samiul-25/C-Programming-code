#include<stdio.h>
int main()
{
	int num, sum = 0, c, remainder;
    printf("Enter the number:  ");
    scanf("%d", &num);
	while(num != 0)
    	{
        	remainder = num%10;
        	sum += remainder;
        	num = num/10;
    	}
    	printf("Sum of the digits of the entered number is = %d\n", sum);
    	return 0;
}
