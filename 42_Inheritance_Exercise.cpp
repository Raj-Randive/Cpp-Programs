/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
using namespace std;
#include <cmath>

class SimpleCalculator{
    int a, b;

    public:
        void getDataSimple(){
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }

        void performOperationsSimple(){
            cout << "The value of a + b is : " <<a+b<<endl;
            cout << "The value of a - b is : " <<a-b<<endl;
            cout << "The value of a * b is : " <<a*b<<endl;
            cout << "The value of a / b is : " <<a/b<<endl;
        }
     

};

class ScientificCalculator{
    int a, b;

    public:
        void getDataScientific(){
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }

        void performOperationsScientific(){
            cout << "The value of cos(a) is : " <<cos(a)<<endl;
            cout << "The value of sin(a) is : " <<sin(a)<<endl;
            cout << "The value of exp(a) is : " <<exp(a)<<endl;
            cout << "The value of tan(a) is : " <<tan(a) <<endl;
        }

};


class HybridCalculator : public SimpleCalculator, public ScientificCalculator{



};


int main()
{
    // SimpleCalculator c1;
    // c1.getDataSimple();
    // c1.performOperationsSimple();

    // cout << "\n"<<endl;
    // ScientificCalculator c2;
    // c2.getDataScientific();
    // c2.performOperationsScientific();

    HybridCalculator h1;
    h1.getDataSimple();
    h1.performOperationsSimple();

    cout << "\n"<<endl;
    h1.getDataScientific();
    h1.performOperationsScientific();

    

    return 0;
}