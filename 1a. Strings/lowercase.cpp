#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


char toUpperCase(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }
    else{
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

bool checkPallindrome(string a){
    int s = 0;
    int e = a.size()-1;

    while(s <= e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 0;
}

int main(){

    string a = "Noon";
    cout<<checkPallindrome(a)<<endl;
    cout<<toLowerCase('B')<<endl;
    

return 0;
}