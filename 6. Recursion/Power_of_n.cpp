#include<iostream>
using namespace std;

// TC -> O(N), SC -> O(N)

int power(int a, int n){

    if(n == 0){
        return 1;
    }
    return a * power(a, n-1);

}


// TC -> O(Log*N), SC -> O(N)

int fastPower(int a, int n){
    if(n==0){
        return 1;
    }
    int subProb = fastPower(a,n/2);
    int subPowerSq = subProb*subProb;
    if(n&1){
        return a*subPowerSq;
    }
    return subPowerSq;
}

int main(){

    int a,n;
    cin>>a>>n;

    cout<<fastPower(a,n)<<endl;    

return 0;
}