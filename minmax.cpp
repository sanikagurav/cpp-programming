#include <iostream>
using namespace std;

void findMinMax(int arr[], int low, int high, int& min, int& max)
{
    if (low == high)
    {
        min = arr[low];
        max = arr[low];
    }
    else if (high == low + 1)
     {
        if (arr[low] > arr[high])
        {
            max = arr[low];
            min = arr[high];
        }
        else
        {
            max = arr[high];
            min = arr[low];
        }
    }
    else
    {
        int mid = (low + high) / 2;
        int min1, max1, min2, max2;

        findMinMax(arr, low, mid, min1, max1);
        findMinMax(arr, mid + 1, high, min2, max2);

        if (min1 < min2)
            min = min1;
        else
            min = min2;

        if (max1 > max2)
            max = max1;
        else
            max = max2;
    }
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min, max;
    findMinMax(arr, 0, n - 1, min, max);

    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    return 0;
}
