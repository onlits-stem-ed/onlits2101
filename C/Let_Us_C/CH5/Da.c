#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d.\n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    int f = 1, i;
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}