// sum of 1st 10 number
#include <stdio.h>
void main()
{
    int n, sum = 0,i;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("addition is : %d", sum);
}