// Prime numer
#include <stdio.h>
void main()
{
    int n, m = 0, flag = 0, i;
    printf("Enter n : ");
    scanf("%d", &n);
    m = n / 2;

    for (i = 2; i <= m; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 0 || n == 1)
    {
        printf("%d is neither prime nor composite", n);
    }
    else
    {
        if (flag == 0)
        {
            printf("\n %d is prime number", n);
        }
        else
        {
            printf("\n %d is not prime number", n);
        }
    }
}
