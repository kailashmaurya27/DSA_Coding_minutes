#include<iostream>
using namespace std;

class student{
    string name;
    int age;
    bool gender;

public:

// Constructor-> same class name like student, takes the attributes

    // Default Constructor
    student(){
        cout<<"Default Constructor "<<endl;
    }

    // this is known as PARAMETERISED CONSTRUCTOR
    student(string s, int a, bool g){
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }

    // COPY CONTSRUCTOR
    student(student &a){
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

// Destructor
    ~student(){
        cout<<"Destructor Called "<<endl;
    }

// Operator Overloading -> to overload the normal work of operator
    bool operator == (student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }


// SETTER FUNCTION-> to set the name of a class
    void setName(string s){
        name = s;
    }

// GETTER FUNCTION-> to print the name of a classs
    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
    }

};


int main(){

    // student a;
    // a.name = 'Kailash ';
    // a.age = 19;
    // a.gender = 0;

    // student arr[3];
    // for(int i = 0; i< 3; i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }

    // for(int i = 0; i<3; i++){
    //     arr[i].printInfo();
    // }

    student a("Kailash", 20, 0);
    // a.getName();
    // a.printInfo();
    student b;
    student c(a);

    if(c==a){
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT SAME"<<endl;
    }
    

return 0;
}