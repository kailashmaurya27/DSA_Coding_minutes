#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length()==b.length()){
        return a<b;
    }
    return a.length() < b.length() ;
}

void findSubsets(char *input, char *output, int i, int j, vector<string> &list){
    // base case
    if(input[i] == '\0'){
        output[j] = '\0';
        string temp(output);
        list.push_back(temp);
        return;
    }
    // rec Case, Include the ith letter
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1, list);
    // Overwriting, Exclude the ith letter
    findSubsets(input, output, i+1, j, list);
}

int main(){

    char input[100];
    char output[100];
    vector<string> list;
    cin>>input;
    findSubsets(input, output, 0, 0, list); 
    sort(list.begin(), list.end(), compare);

    for(auto s : list){
        cout<<s<<" ";
    }

return 0;
}