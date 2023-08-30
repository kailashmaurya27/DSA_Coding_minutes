#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<string> books;

    books.push("Java");
    books.push("Python");
    books.push("Operating System");
    books.push("Database Management System");

    while(!books.empty()){
        cout<<books.top()<<endl;
        books.pop();
    }


return 0;
}