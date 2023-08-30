#include <iostream>
using namespace std;

int compute(int a, int b)
{
  if (a == 0)
    return b;
  return compute(a - 1,  a + b);
}

int main(){

    int n = 5;
    int m = 6;

    cout<< compute(n,m)<<endl;

    return 0;
}