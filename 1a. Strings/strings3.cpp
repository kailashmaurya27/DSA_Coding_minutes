#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    // char s1[1000] = {'1', '2', 'a', '\0'};
    // string s = "Kailash"; //Dynamic Array
    // string str("Kailash");

    // // if you want to take input 
    // string str1;
    // getline(cin, str1);
    // cout << str1 << endl;

    string s;

    int n = 3;
    vector<string> sarr;

    string temp;

    while(n--){
        getline(cin, temp);
        sarr.push_back(temp);
    }

    for(auto x: sarr){
        cout<<x<<endl;
    }
    

return 0;
}