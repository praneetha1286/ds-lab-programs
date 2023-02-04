#include<stdio.h>

void selection(int a[15], int size)
{
	int i, min, temp, j;
	for(i = 0; i < size; i++)
	{
		min = i;
		for(j = i + 1; j < size; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void main()
{
        int n, i, arr[15];
        printf("Enter size of array: ");
        scanf("%d", &n);
        printf("Enter %d elements: ", n);
        for(i = 0; i < n; i++)
                scanf("%d", &arr[i]);
        printf("Elements are: \n");
        for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
        selection(arr, n);
        printf("\nElements after sorting: \n");
        for(i = 0; i < n; i++)
                printf("%d ", arr[i]);
}
/*
Enter number of elements:10
Enter 10 integers
12 8 -6 2 4 5 3 7 4 2 
Sorted list in ascending order:
-6 2 2 3 4 4 5 7 8 12
*/
