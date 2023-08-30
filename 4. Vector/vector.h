class Vector{
    
// Data Members
    int *arr;
    int cs;
    int ms;

public:
    Vector(int max_size = 1){
        cs = 0;
        ms = max_size;   
        arr = new int[ms];
    }

    void push_back(int d){
        if(ms==cs){
            int *oldArr = arr;
            ms = ms*2;
            arr = new int[ms];
        
        for(int i = 0; i < cs; i++){
            arr[i] = oldArr[i];
        }

            delete [] oldArr;
        }
        arr[cs] = d;
        cs++;

    }

    void pop_back(){
        if(cs>=0){
            cs--;
        }
    }

    bool isEmpty(){
        return cs==0;
    }

    int front(){
        return arr[0];
    }

    int back(){
        return arr[cs-1];
    }

    int at(int i){
        return arr[i];
    }

    int size(){
        return cs;
    }

    int capacity(){
        return ms;
    }

    int operator[](int i){
        return arr[i];
    }


};