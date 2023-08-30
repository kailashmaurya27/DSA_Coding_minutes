#include <iostream>
using namespace std;

// PREFIX SUM APPROACH -> TIME COMPLEXITY IS 0(N^2)

int largestSubarraySum2(int *arr, int n)
{   
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i]; // this is for prefix sum array
    }

    int largest_sum = 0;

    for (int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int subarraySum = i  > 0 ? prefix[j] - prefix[i -1] : prefix[j]; // this loop is for subarray sum which is having the the largest value
            largest_sum = max(largest_sum, subarraySum);

        }
    }
    return largest_sum;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    largestSubarraySum2(arr, n);

    cout<<largestSubarraySum2(arr, n)<<endl;

    return 0;
}