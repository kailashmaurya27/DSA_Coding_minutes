#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char a[1000] = "apple";
    char b[1000];

    cout<<strlen(a)<<endl;

    cout<<strcpy(b, a)<<endl;

    cout<<strcmp(a, b)<<endl; // returns zero 0

    char web[] = "www.";
    char domain[] = "kailashmaurya.com";

    // cout<<strcat(web, domain)<<endl;

    strcpy(b, strcat(web, domain));

    cout<< b;

    cout<<strcmp(b, a)<<endl;


 
return 0;
}