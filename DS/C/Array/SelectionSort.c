#include "common"

#define SIZE 10

int main()
{
    int arr[] = {8, 2, 5, 7, 1, 12, 19, 3, 17, 11}; //Array initialization
    int i, j, t;
    
    //---------- Sorting logic ------------
    for(i=0; i<SIZE-1; i++)
    {
        for(j=i+1; j<SIZE; j++)
        {
            if(arr[i]>arr[j])
            {
                t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }

    printf("The sorted array is:\n");
    display(arr, SIZE);
    return 0;
}