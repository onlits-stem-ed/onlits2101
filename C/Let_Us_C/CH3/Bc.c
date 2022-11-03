#include <stdio.h>
int main()
{
    int n, p, r = 1, i;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter power: ");
    scanf("%d", &p);
    for (i = 1; i <= p; i++)
    {
        r *= n; // means, r = r * n;
    }
    if (p == 2)
        printf("%d-squared is %d.\n", n, r);
    else if (p == 3)
        printf("%d-cubed is %d.\n", n, r);
    else
        printf("%d raised to the power %d is %d.\n", n, p, r);
    return 0;
}