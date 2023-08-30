#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-12, 4, 5, 6, -13, 45, 89};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}