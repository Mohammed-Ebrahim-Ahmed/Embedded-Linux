#include <stdio.h>

int binarySearch(int* data, int size, int key)
{
	int lv = 0, hv = size-1;
	int mid;
	int mask = -1;
	int terminate = 0;
	while(lv <= hv && !terminate)
	{
		mid = (lv + hv)/2;
		if(data[mid] == key)
		{
			mask = mid;
			terminate = 1;
		}
		else if(data[mid] < key)
		{
			lv = mid+1;
		}
		else
		{
			hv = mid -1;
		}
	}
	return mask;
}

int main()
{
	int arr[] = {1,3,5,7,9,10};
	int key;
	int index;
	int dummy;
	printf("Enter the number you want to enter: ");
	//fflush(stdin);fflush(stdout);
	scanf("%d", &key);
	index = binarySearch(arr, sizeof(arr)/sizeof(arr[0]), key);
       	if(index == -1)
	{
		printf("The value doesn't not exist in the array, try again!");
	}
	else
	{
		printf("The value %d found at position %d",key, index+1);
	}
	printf("\n Enter any number to exit: ");	
	scanf("%d", &dummy);
	return 0;
}
