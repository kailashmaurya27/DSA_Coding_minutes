#include <iostream>
using namespace std;

bool getIthBit(int n, int i)
{
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0; 
}

void setIthBit(int &n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
}

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

void updateIthBit(int &n, int i, int v)
{
    clearIthBit(n, i);
    int mask = (v << i);
    n = n | mask;
}

void clearLastIBits(int &n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
}

void clearBitsInRange(int &n, int i, int j)
{
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

void replaceBits(int &n, int i, int j, int m)
{
    clearBitsInRange(n,i,j);
    int mask = (m<<i);
    n = n | mask;
}


int main()
{

    int n = 15;
    int i;
    cin>>i;
    int j = 3;
    int m = 2;

    // cout<<getIthBit(n,i)<<endl;
    setIthBit(n,i);
    // replaceBits(n, i, j, m);
    cout << n;

    return 0;
}