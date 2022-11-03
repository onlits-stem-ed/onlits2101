#include <stdio.h>

int power(int a, int b);        //function declaration/prototype

int main()
{
    int a, b;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    printf("%d raised to the power %d is %d.\n", a, b, power(a,b));
    return 0;
}

int power(int a, int b)
{
    int i, r=1;
    for(i=1; i<=b; i++)
    {
        r = r * a;
    }
    return a;
}