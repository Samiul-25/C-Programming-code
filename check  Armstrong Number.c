#include<stdio.h>
#include<math.h>
int main()
{
    int num, sum = 0, temp, a;
    printf("Enter a number:  ");
    scanf("%d", &num);
    temp = num;
    while(num != 0)
    {
        a = num%10;
        sum += a*a*a;
        num = num/10;
    }
    if(sum == temp)
        printf("\n%d is an armstrong number\n", temp);
    else
        printf("\n%d is not an armstrong number\n", temp);
    return 0;
}
