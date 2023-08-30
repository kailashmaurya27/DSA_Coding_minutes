#include<iostream>
using namespace std;

int main(){

    char sentence[1000];
    cin.getline(sentence, 1000);

    int x = 0;
    int y = 0;

    for(int i = 0; sentence[i]!= '\0'; i++){
        switch(sentence[i]){
            case 'N' : y++;
                       break;
            case 'S' : y--;
                       break;
            case 'E' : x++;
                       break;
            case 'W' : x--;
                       break;
        }

    }

    cout<<"("<<x<<","<<y<<")"<<endl;

    // FIRST QUADRANT

    if(x>=0 and y>=0){
        while(y--){
            cout<<'N';
        }
        while(x--){
            cout<<'W';
        }
    }

    // SECOND QUADRANT

    if(x<=0 and y>=0){
        while(y--){
            cout<<'N';
        }
        while(x++){
            cout<<'W';
        }
    }
    // THIRD QUADRANT

    if(x<=0 and y<=0){
        while(y++){
            cout<<'S';
        }
        while(x++){
            cout<<'W';
        }
    }
    // FOURTH QUADRANT

    if(x>=0 and y<=0){
        while(y++){
            cout<<'S';
        }
        while(x--){
            cout<<'E';
        }
    }


    // char temp = cin.get();
    // int len = 0;
    
    // while(temp != '#'){
    //     sentence[len++] = temp;
    //     temp = cin.get();
    // }
    // sentence[len] = '\0';
    // cout<<endl<<len<<endl;
    // cout<<sentence;

    // cin.get(sentence, 10);
    // cout<<sentence;

    // cin.getline(sentence, 1000, '.'); // in place of '.' there is a '\n' by default
    // cout<<sentence;




return 0;
}