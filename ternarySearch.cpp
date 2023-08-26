#include <iostream>
#include<ctime>
#define MAX 100
using namespace std;

int ternarySearch(int arr[], int key, int l, int r)
{
	int m1, m2;
	while(r>=l)
	{
		m1=l+(r-l)/3;
		m2=r-(r-1)/3;
		if(arr[m1]==key)
		{
			return m1;
		}
		else if(arr[m2]==key)
		{
			return m2;
		}
		else if(arr[m1]>=key)
		{
			return ternarySearch(arr, key, l, m1-1);
		}
		else if(arr[m2]>=key)
		{
			return ternarySearch(arr, key, m1+1, m2-1);
		}
		else
		{
			return ternarySearch(arr, key, m2+1, r);
		}
	}
	return -1;
}
int main()
{
	int i, arr[MAX], size, key, l;
	l=0;
	clock_t start,end;
	double diff;

	start=clock();
	cout << "\n Enter size of array : ";
	cin >> size;
	cout << "\n Enter elements of array : ";
	for(i=0; i<size; i++)
	{
		cin >> arr[i];
	}
	cout << "\n Enter the element to found : ";
	cin >> key;
	int index=ternarySearch(arr, key, 0, size-1);
	if(index>=0)
	{
		cout  << key << " Element found at index " << index;
	}
	else
	{
		cout << "\n Element not found";
	}
	end=clock();
	diff=(double)(end, start)/CLOCKS_PER_SEC;
	cout << "\n Time required is : " << diff;
}
