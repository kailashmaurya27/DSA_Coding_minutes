#include<iostream>
using namespace std;

int main(){

    int x = 5;
    int *xptr = &x;
    int **xxptr = &xptr;

    cout<<xptr<<endl;  // variable to a pointer
    cout<<xxptr<<endl; // Pointer to a pointer
    cout<<*xptr<<endl;


return 0;
}