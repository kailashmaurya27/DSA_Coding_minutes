#include<iostream>
using namespace std;

void dec(int n){
    
    if(n != 0){
        cout<<n<<" ";
        dec(n-1);
    }
    
}

void inc2(int n){
    
    if(n != 0){
        inc2(n-1);
        cout<<n<<" ";
    }
    
}

void inc(int i, int n){
    cout<<i;
    inc(i+1, n);
}

int main(){

    int i = 1;
    int n;
    cin>>n;

    // dec(n);
    // inc2(n);
    inc(i,n);
    

return 0;
}