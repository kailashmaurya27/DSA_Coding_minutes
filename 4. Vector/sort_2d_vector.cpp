#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {-12, 4, 5, 6, -13, 45, 89};

    int key;
    cin>>key;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if(it != arr.end()){
        cout<<"Present at index "<< it - arr.begin();
    }
    else{
        cout << "Not present"<<endl;
    }
    cout<<arr.back()<<endl;

return 0;
}