#include <iostream>
using namespace std;

int linear_search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 5, 6, 2, 4, 8, 8, 3};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    int index = linear_search(arr, n, key);

    if (index != -1)
    {
        cout << index << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}