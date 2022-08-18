#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;

    public:
        simple(int a, int b = 23){
            data1 = a;
            data2 = b;
        }

        void printData();
};


void simple :: printData(){
    cout << "The value of data1 and data2 is: " << data1 << " and "<< data2<<endl;
}


int main()
{
    // simple s(1, 4); // --> Will print both values but if i don't specify the value of "b" then it will print the default value of "b" which is 23...

    simple s(2);  // --> Like this
    
    s.printData();


    return 0;
}