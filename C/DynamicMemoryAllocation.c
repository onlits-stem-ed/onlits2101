#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, *arr, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

     //---Display empty array----
    printf("\nThe elements of array are as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    //---Input-------
    printf("\nEnter %d values below:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //---Display----
    printf("\nThe elements of array are as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}




/*
    GCC/MinGW
        int -   4 bytes (32 bits)
        char -  1 byte
        float - 4 bytes
    
    Turbo c++
        int -   2 bytes
        float - 4 bytes
        char -  1 byte
*/