#include<stdio.h>
int main()
{
    int num,i = 3, count, c;
    printf("Enter the number of prime numbers required :  ");
    scanf("%d", &num);
    if(num >= 1)
    {
        printf("First %d prime numbers are :  ", num);
        printf("2 ");
    }
    for(count = 2; count <= num; i++)
    {
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        if(c == i)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}
