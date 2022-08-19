#include <iostream>
using namespace std;

class Base{

    int data1;  // By default this variable is private and is not inheritable.

    public:
        int data2;
        void setData();
        int getData1();
        int getData2();

};
// ****************************************************

// Deriving a Class from Base Class...!
class Derived : private Base{

    int data3;

    public:
        void process();
        void display();

};
// ****************************************************

void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

void Derived :: process(){ 
    setData();
    data3 = data2 * getData1();  // We can't write data1 directly as it is the private member of Base Class, and so we can't inherit it. That's why we are using function to get data1.
}

void Derived :: display(){

    cout << "Value of data1 is : " << getData1() << endl;  // We are taking the value of Data1 from the getData1 method, because the data1 is the private member of Base class.

    cout << "Value of data2 is : " << data2 << endl;
    cout << "Value of data3 is : " << data3 << endl;
}



// ****************************************************

int main()
{
    Derived der;  // der is the object of Derived Class.

    // der.setData();  --> Can't do this because now it is private 
    // so we can't call setData() function from here. So we have to call it within the derived class only.
    
    der.process();
    der.display();


    return 0;
}