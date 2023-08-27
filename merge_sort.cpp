#include<stdio.h>
#define MAX 100
int merge(int [], int, int, int);
int merge_sort(int list[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(list, low, mid);
		merge_sort(list, mid+1, high);
		merge(list, low, mid, high);
	}
}
int merge(int list[], int low, int mid, int high)
{
	int i=low, j=mid+1, k=low, temp[10];
	while((i<=mid) && (j<=high))
	{
		if(list[i]<list[j])
		{
			temp[k]=list[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=list[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=list[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		temp[k]=list[j];
		k++;
		j++;
	}
	for(k=low; k<=high; k++)
	{
		list[k]=temp[k];
	}
}
int printArray(int arr[], int size)
{
	int i;
	printf("\n Sorted element : ");
	for(i=0; i<size; i++)
	{
		printf("\n %d",arr[i]);
	}
}
int main()
{
	int arr[MAX], size, i;
	printf("\n Enter size of array : ");
	scanf("%d", &size);
	printf("\n Enter elements of array : ");
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	merge_sort(arr, 0, size-1);
	printArray(arr, size);
}
