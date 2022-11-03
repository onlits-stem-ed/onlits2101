#include <stdio.h>
int main()
{
    int a, b, n, i, gcd;
    printf("Enter two numbers below:\n");
    scanf("%d%d", &a, &b);
    n = a < b ? a : b;
    for (i = 1; i <= n; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d.\n", a, b, gcd);
    return 0;
}