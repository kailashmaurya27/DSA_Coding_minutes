#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for (int i = 1; i < n; i++){
        int current = arr[i];
        int prev = i - 1;
        while(prev>=0 && arr[prev]>current){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
    
}

int main()
{
    int arr[] = {-12, 4, 5, 6, -13, 45, 89};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}