#include<iostream>
using namespace std;

class Y; // --> Forward Declaration as when complier reads the program from top to bottom it encounters Y. So we have to declare that class Y is there.

class X{
    int data;
    
    public:
        void setValue(int value){
            data = value;
        }
    
    friend void add(X, Y); // --> This line means ---- Dost hai mera add jo leta hai X object and Y object.   
};

class Y{
    int num;

    public:
        void setValue(int value){
            num = value;

        }

    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(3);
    
    Y b1;
    b1.setValue(5);

    add(a1, b1);

    return 0;
}