#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

int calTotalmarks(vector<int> marks){
    int total = 0;
    for(int i = 0; i < marks.size(); i++){
        total += marks[i];
    }
    return total;
}

// bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
//     vector<int> m1 = s1.second;
//     vector<int> m2 = s2. second;
//     return calTotalmarks(m1) > calTotalmarks(m2);
// } 

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2){
    string m1 = s1.first;
    string m2 = s2.first;
    return m1  < m2;
    // return strcmp(m1, m2)>0;
}

int main(){

    vector<pair<string, vector<int> > > student_marks = {
        {"kailash", {1, 2, 3, 4, 5}},
        {"karan", {2, 3, 4, 5, 6}},
        {"raj", {3, 4, 5, 6, 7}},
        {"lama", {4, 5, 6, 7, 8}},
        {"sanchit", {5, 6, 7, 8, 9}},
        {"aryan", {6, 7, 8, 9, 10}}
    };

    sort(student_marks.begin(), student_marks.end(), compare);

    for(auto s : student_marks){
        cout<<s.first << " "<<calTotalmarks(s.second)<<endl;
    }


return 0;
}