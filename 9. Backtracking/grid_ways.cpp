#include<bits/stdc++.h>
using namespace std;

// time complexity- (2^m+n)

int solvegrid(int i, int j, int m, int n){
    if(i == n-1 and j == m-1){
        return 1;
    }

    if(j>=n or i>=m){
        return 0;
    }

    int ans = solvegrid(i+1, j, m, n) + solvegrid(i, j+1, m, n);
    return ans;
}


// time complexity- (o(m+n))

int fact(int x){

    if(x == 0){
        return 1;
    }

    int ans = x*fact(x-1);
    return ans;

}

int main(){

    int m, n;
    cin>>m>>n;
    // cout<<solvegrid(0,0,m,n);

    int ans = fact(m+n-2)/(fact(m-1)*fact(n-1));
    cout<<ans<<" ";
    
return 0;
}