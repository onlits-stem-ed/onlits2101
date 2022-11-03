#include <stdio.h>
#include <ctype.h>
int main()
{
    char alphabet[] = " abcdefghijklmnopqrstuvwxyz";
    char letter;
    int i=0;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    letter = tolower(letter);
    if(letter < 97 || letter > 122)
    {
        printf("Not a letter\n");
        return 0;
    }

    while (alphabet[i] != '\0')     //searching
    {
        if(alphabet[i] == letter) {
            printf("The character %c is at position %d in the alphabet.\n", alphabet[i], i);
            break;
        }
        i++;
    }
    return 0;
}

/*
*   Time complexity: O(n)
*   This algorithm employs linear search method
*/