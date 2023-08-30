/* kadanes algo  Kadane's Algorithm is an iterative dynamic programming algorithm. 
It calculates the maximum sum subarray ending at a particular position by using the maximum sum subarray ending at the previous position. 
Define two-variable currSum which stores maximum sum ending here and maxSum which stores maximum sum so far. */

#include<iostream>
using namespace std;

int maximum_subarray_sum(int arr[], int n){
    int cs = 0;
    int largest = INT_MIN;

    for (int i = 0; i <n; i ++){
        cs = cs + arr[i];
        if(cs<0){
            cs= 0;
        }
        largest= max(largest,cs);
    }
    return largest;
}

int main(){

    int arr[]= {-2, -3, -4, 8, 9,-12, 11};
    int n = sizeof(arr)/sizeof(int);

    cout<<maximum_subarray_sum(arr, n)<<endl;

return 0;
}
