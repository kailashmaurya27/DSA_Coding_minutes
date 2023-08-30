#include <bits/stdc++.h>
using namespace std;

void count_sort(int *a, int n)
{
    
        int largest = -1;

        for(int i = 0; i < n; i++){
            largest = max(largest, a[i]);
        }

        vector<int> freq(largest+1, 0);

        for (int i = 0; i < n; i++){
            freq[a[i]]++;
        }

        int j = 0;
        for (int i = 0; i <= largest; i++){
            while(freq[i]>0){
                a[j] = i;
                freq[i]--;
                j++;
            }
        }
        return;
}

int main()
{
    int arr[] = {-12, 4, 5, 6, -13, 45, 89};
    int n = sizeof(arr) / sizeof(int);
    count_sort(arr, n);

    for (auto x : arr)
    {
        cout << x << ", ";
    }

    return 0;
}