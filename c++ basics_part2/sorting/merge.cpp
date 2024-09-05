/*
Time Complexity:
Best,Average,Worst Case: O(N*log2(N))
Space complexity: O(N)
*/

#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = 0;
    int brr[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            i++;
        }
        else
        {
            brr[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }

    for (int p = 0; p < k; p++)
    {
        arr[low + p] = brr[p];
    }
}

void merge_sort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {3, 2, 4, 6, 1, 5};
    int n = 6;
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
