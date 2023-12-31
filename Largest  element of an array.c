#include<stdio.h>

int main()
{
    int a[50], size, i, big;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);

    big = a[0]; // initializing
    /*
        from 2nd element to the last element
        find the bigger element than big and
        update the value of big
    */
    for(i = 1; i < size; i++)
    {
        if(big < a[i])   // if larger value is encountered
        {
            big = a[i]; // update the value of big
        }
    }
    printf("The largest element is: %d", big);

    return 0;
}
