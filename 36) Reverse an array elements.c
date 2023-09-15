#include<stdio.h>

int main()
{
    int c, d, n, array[100], new_array[100];
    printf("Enter number of elements in array :");
    scanf("%d", &n);
    printf("Enter elements:", n);

    for(c = 0; c < n; c++)
        scanf("%d", &array[c]);

    /*
        temporarily storing elements into array b
        starting from end of array a
    */
    for(c = n-1, d = 0; c >= 0; c--, d++)
        new_array[d] = array[c];

    /*
        copying reversed array into original.
        Here we are modifying original array to reverse it.
    */

    for(c = 0; c < n; c++)
        array[c] = new_array[c];

    printf("Resultant array is: ");
    for(c = 0; c < n; c++)
        printf("%d ", array[c]);
    return 0;
}
