#include<stdio.h>
int main()
{
    int n, m, c, d, first[10][10], second[10][10], diff[10][10];
    printf("Enter the number of rows and columns of the first matrix \n");
    scanf("%d%d", &m, &n);

    printf("Enter the elements %d of the first matrix : ", m*n);
    for(c = 1; c <= m; c++)   // to iterate the rows
        for(d = 1; d <= n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);

    printf("Enter the %d elements of the second matrix : ", m*n);
    for(c = 1; c <= m; c++)   // to iterate the rows
        for(d = 1; d <= n; d++)   // to iterate the columns
            scanf("%d", &second[c][d]);

    /*
        printing the first matrix
    */
    printf("\nThe first matrix is: \n");
    for(c = 1; c <= m; c++)   // to iterate the rows
    {
        for(d = 1; d <= n; d++)   // to iterate the columns
        {
            printf("%d\t", first[c][d]);
        }
    printf("\n");
    }

    /*
        printing the second matrix
    */
    printf("The second matrix is: \n\n");
    for(c = 1; c <= m; c++)   // to iterate the rows
    {
        for(d = 1; d <= n; d++)   // to iterate the columns
        {
            printf("%d\t", second[c][d]);
        }
    printf("\n");
    }

    /*
        finding the SUB of the two matrices
        and storing in another matrix sum of the same size
    */
    for(c = 1; c <= m; c++)
        for(d = 1; d <= n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    // printing the elements of the sub matrix
    printf("\n\nThe diff of the two entered matrices is: \n\n");
    for(c = 1; c <= m; c++)
    {
        for(d = 1; d <= n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    return 0;
}
