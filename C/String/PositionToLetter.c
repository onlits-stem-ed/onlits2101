#include <stdio.h>
int main()
{
    char alphabet[] = " abcdefghijklmnopqrstuvwxyz";
    int number;
    printf("Enter a number in range 1 to 26: ");
    scanf("%d", &number);
    if (number >= 1 && number <= 26)
        printf("The letter %c is at position %d in alphabet.\n", alphabet[number], number);
    else
        printf("Invalid Input.\n");
    return 0;
}

/*
*   Time complexity: O(1)
* 
*/