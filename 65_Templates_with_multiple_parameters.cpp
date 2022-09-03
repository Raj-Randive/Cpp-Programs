// Class Templates with multiple parameters(one, two, or more than two)

#include<iostream>
using namespace std;

/*
SYNTAX:
    template <class T1, class T2>

    class nameOfClass{
        // Body of class
    };
*/

template <class T1, class T2>
class myClass{

    public:
        T1 data1;
        T2 data2;

        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }

        void display(){
            cout << this -> data1 <<endl << this -> data2<<endl;
        }

};


int main()
{
    // myClass <int, char> obj1(6, 'R');
    myClass <int, float> obj1(6, 1.87);
    obj1.display();
    

    return 0;
}