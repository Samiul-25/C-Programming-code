#include<stdio.h>
int main()
{
    int num,sum=0,c,value;
    printf("Enter the number :  ");
    scanf("%d", &num);
    printf("Enter integers number-\n",num);
    for(c = 1; c <= num; c++)
    {
        scanf("%d", &value);
        sum += value;
    }
    printf("sum of entered numbers  = %d", sum);
    return 0;
}
