#include<bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    int x = 0;
    for(int i = 0; i < v.size(); i++){
        x = x ^ (v[i]);
    }
    return x;
}

int main(){

    vector<int> v = {1,2,3,4,1,4,3};
    cout<<xoring(v);
    

return 0;
}