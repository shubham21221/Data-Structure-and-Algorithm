// fasteset sort;
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *secound = new int[len2];

    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        secound[i] = arr[mainArrayIndex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < secound[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex] = secound[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index2++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex] = secound[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s+e)/2;
    // left part sort karana hai
    mergeSort(arr, s, mid);

    // right part sort karana hai
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{

    int arr[5] = {4, 5, 2, 7, 1};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}