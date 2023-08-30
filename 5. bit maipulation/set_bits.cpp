#include<bits/stdc++.h>
using namespace std;

int set_bits(int n){
    int count = 0;
    while(n>0){
        int lastbits = (n & 1);
        count+=lastbits;
        n = n>>1;   
    }
    return count;
}

// best method ------->

int count_bits_hack(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1);
        ans ++;
    }
    return ans;
}


int main(){

    int n;
    cin>>n;

    cout<<set_bits(n)<<endl;
    cout<<count_bits_hack(n)<<endl;

return 0;
}