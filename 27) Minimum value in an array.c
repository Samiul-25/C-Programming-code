#include<stdio.h>
int main()
{
    int a[50], size, i, small;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    small = a[0];   // initializing
    /*
        from 2nd element to the last element
        find the smaller element than small and
        update the value of small
    */
    for(i = 1; i < size; i++)
    {
        if(small>a[i])   // if smaller value is encountered
        {
            small = a[i];   // update the value of small
        }
    }
    printf("\nThe smallest element is: %d", small);
    return 0;
}
