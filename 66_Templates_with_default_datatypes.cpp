// Templates with default data-types

#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Raj{

    public:
        T1 a;
        T2 b;
        T3 c;
        Raj(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout << "The value of a is: " << a <<endl;
            cout << "The value of b is: " << b <<endl;
            cout << "The value of c is: " << c <<endl;

        }

};

int main()
{
    // Raj <int, char, char> obj1(4, 'r', 'a');

    Raj <> obj1(4, 6.5, 'R');  // --> Agar koi datatype specify na kare then it will print the default datatype...!!

    obj1.display();

    return 0;
}