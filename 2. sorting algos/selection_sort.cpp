#include <iostream>
#include <vector>
using namespace std;

void selection_sort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++){
        for(int j = i +1; j < n; j++){
            if(arr[j]<arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }
    
}

int main()
{
    int arr[] = {-12, 4, 5, 6, -13, 45, 89};
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}