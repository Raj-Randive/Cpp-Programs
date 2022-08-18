#include<iostream>
using namespace std;


class Number{
    int a;

    public:

        // We have to always create a default constructor like this. Without it there will be an error while creating objects.
        Number(){
            a = 0; // Default value of a..!!
        } 

        Number(int num){
            a = num;
        }

        // COPY CONSTRUCTOR...!!
        // When no copy constructor is found, complier supplies its own copy constructor.
        Number(Number &obj){   
            cout << "Copy constructor called. ";
            a = obj.a;
        }
 
        void display (){
            cout << "The numbers for this object is: " << a <<endl;

        }

};



int main()
{
    Number x, y(21), z(42), z2;

    // x = Number(2);

    x.display();
    y.display();
    z.display();

    // I want to create a "z1" objects which should exactly resembles z (or x) (or y)

    Number z1(z); // Copy Constructor is Invoked.
    z1.display();
    

    z2 = z; // Copy Constructor is NOT Invoked. As already bane huye object ko assign kar diya "z" se --> It will not work.

    Number z3 = z; // Copy Constructor is Invoked. Invoke ho raha hai because ye ekhi line me object ban raha hai so copy constructor call ho jayega.

    return 0;
}