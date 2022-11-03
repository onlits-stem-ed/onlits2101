#include <stdio.h>

int smallest(int *nos, int n);

int main()
{
    int nos[10], n, i, small, j, flag, gcd = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d integers below:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nos[i]);
    }

    small = smallest(nos, n);

    for (i = 1; i <= small; i++)
    {
        flag = 0;
        for (j = 0; j < n; j++)
        {
            if(nos[j] % i == 0)
                flag++;
        }
        printf("flag = %d\n", flag);
        if (flag == 4)
            gcd = i;
    }
    printf("The GCD is %d.\n", gcd);
    return 0;
}

int smallest(int *nos, int n)
{
    int i;
    int small = nos[0];
    for (i = 1; i < n; i++)
    {
        if (small > nos[i])
        {
            small = nos[i];
        }
    }
    return small;
}