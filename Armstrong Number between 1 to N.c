#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,i,temp,a;
    printf("The Armstrong numbers in between 1 to 500 are :");
    for(i = 1; i <= 500; i++)
    {
        temp = i;
        sum = 0;
        while(temp != 0)
        {
            a = temp%10;
            sum += a*a*a;
            temp = temp/10;
        }
        if(sum == i)
        printf("\n\t\t\t%d", i);
    }
    return 0;
}
