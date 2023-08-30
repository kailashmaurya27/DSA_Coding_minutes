#include<iostream>
#include"vector.h"
using namespace std;

int main(){

    Vector v(5);

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }


return 0;
}