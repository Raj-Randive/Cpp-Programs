// Swapping Numbers Example...!!

#include<iostream>
using namespace std;

class c2;  // --> Forward Declaration...!!

class c1{
    int Val1;
    friend void exchange(c1 &, c2&);

    public:
        void intData(int a){
            Val1 = a;
        }
        void display(void){
            cout << "The value is: "<< Val1 << endl;
        }
};

class c2{
    int Val2;
    friend void exchange(c1 &, c2&);

    public:
        void intData(int a){
            Val2 = a;
        }
        void display(void){
            cout << "The value is: "<< Val2 << endl;
        }
};


void exchange(c1 &x, c2 &y){
    int temp = x.Val1;
    x.Val1 = y.Val2;
    y.Val2 = temp;
}


int main()
{
    c1 a;
    a.intData(56);
    // a.display();

    c2 b;
    b.intData(91);
    // b.display();

    exchange(a, b);

    cout << "The value after exchanging becomes: " ;
    a.display() ;
    cout << "The value after exchanging becomes: " ;
    b.display() ;
    

    return 0;
}