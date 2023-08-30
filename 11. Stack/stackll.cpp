#include<iostream>
#include "stackll.h"
using namespace std;

int main(){

    Stack<char> s;
    s.push('Y');
    s.push('B');
    s.push('B');
    s.push('U');
    s.push('G');

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }

return 0;
}