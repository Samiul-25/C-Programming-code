#include<stdio.h>
int main()
{
    int num,i;
    float c,big;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    printf("Enter %d numbers :\n", num);
    printf("\tElement 1: ");
    scanf("%f", &big);
    for(i = 2; i <= num; i++)
    {
        printf("\tElement %d  : ", i);
        scanf("%f", &c);
        if(big < c)
            big = c;
    }
    printf("\nThe largest of the %d numbers is  %f ", num, big);
    return 0;
}
