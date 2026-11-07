#include <stdio.h>

int main()
{
    int n;
    int evensum = 0;
    int oddsum = 0;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Number : %d\n", i);

        if(i % 2 == 0)
        {
            evensum = evensum + i;
        }
        else
        {
            oddsum = oddsum + i;
        }
    }

    printf("\nSum of even numbers = %d\n", evensum);
    printf("Sum of odd numbers = %d\n", oddsum);

    return 0;
}