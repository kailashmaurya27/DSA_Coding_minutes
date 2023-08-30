#include <iostream>
using namespace std;

int printArray(int arr[],int n)
{

    // int n = sizeof(arr) / sizeof(int);

    cout << "In Function " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(int);

    cout << "In Main " << sizeof(arr) << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    printArray(arr,n);

    return 0;
}