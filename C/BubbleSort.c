				/*BUBBLE SORT*/

#include<stdio.h>
#define SIZE 5		//Symbolic Constant
int main()
{
	int no[SIZE], i , j, t;
	
	printf("Enter %d integers below:\n", SIZE);
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &no[i]);
	}
	
	for(i=0; i<SIZE-1; i++)		//Sorting logic
	{
		for(j=0; j<SIZE-1; j++)
		{
			if(no[j]>no[j+1])
			{
				//swapping
				t = no[j];
				no[j] = no[j+1];
				no[j+1] = t;
			}
		}
	}
	printf("The sorted integers in ascending order are:\n");
	
	for(i=0; i<SIZE; i++)
	{
		printf("%d\n", no[i]);
	}

	printf("\n");
	return 0;
}
