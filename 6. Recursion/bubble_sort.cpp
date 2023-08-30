#include <bits/stdc++.h>
using namespace std;

void bubble_sort_rec(int *arr, int n)
{
    if (n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubble_sort_rec(arr, n - 1);
}

void bubble_sort_rec_2(int *arr, int n, int j)
{
    if (n == 1 || n==0)
    {
        return;
    }
    if (j == n-1)
    {
        bubble_sort_rec_2(arr, n - 1, 0);
        return;
    }
    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }
    bubble_sort_rec_2(arr, n, j + 1);
}

int main()
{

    int arr[] = {-12, -14, -15, 90, 7, 456, 27, 29, 24};
    int n = sizeof(arr) / sizeof(int);
    int j = 0;

    bubble_sort_rec_2(arr, n, j);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}