#include<iostream>
#include "stackv.h"
using namespace std;

int main(){

    Stack<char> s;
    s.push('y');
    s.push('b');
    s.push('b');
    s.push('u');
    s.push('G');

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

return 0;
}