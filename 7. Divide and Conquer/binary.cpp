#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &v,int s, int e, int x)
{

    int mid = s + (e - s) / 2;

    if (e >= s)
    {
        if (v[mid] == x)
        {
            return mid;
        }
        if (v[mid] > x)
        {
            return binarySearch(v,s, mid +1, x);
        }
        else
        {
            return binarySearch(v,mid + 1, e, x);
        }
    }
    return -1;
}

int main()
{

    vector<int> v{11, 3, 5, 7, 9};
    int x = 3;
    int e = v.size()-1;

    cout<<binarySearch(v,0,e,x)<<endl;

    

    return 0;
}