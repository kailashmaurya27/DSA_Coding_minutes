#include<iostream>
#include<vector>
using namespace std;



int main(){

// vector<int> arr = {1,2,3,4,5,6};

// fill constructor
vector<int> arr(10,7);

// fill constructor
vector<int> visited(100,0);

// pop_back function -> simply removes the last element
// arr.pop_back();

// push_back function
visited.push_back(7);

for(int i = 0; i < visited.size(); i++){
    cout<<visited[i]<<endl;
}

cout<<visited.size()<<endl;
cout<<visited.capacity()<<endl;

    

return 0;
}