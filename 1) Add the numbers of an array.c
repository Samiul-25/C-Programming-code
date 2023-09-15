#include<stdio.h>
int main()
{
    int c,n,array[100],sum=0;
    printf("Enter total number to add:");
    scanf("%d",&n);
    printf("Enter the number : ");
    for(c=0; c<n; c++)
    {
        scanf("%d",&array[c]);
        sum=sum+array[c];
    }
    printf("The Sum is = %d",sum);
    return 0;

}
