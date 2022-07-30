// sum of digit using for loop
#include <stdio.h>
void main()
{
    int n, rem, sum;
    printf("Enter n : ");
    scanf("%d", &n);

    for (sum = 0; n > 0; n = n / 10)
    {
        rem = n % 10;
        sum = sum + rem;
    }
    printf("sum of digit of is : %d", sum);
}