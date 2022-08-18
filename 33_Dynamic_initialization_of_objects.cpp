#include<iostream>
using namespace std;

class BankDeposit{
    int principle;
    int years;
    float interestRate;
    float returnValue;

    public:
        // Ek hi constructor ki overloading kari hai humne. See Below...
        
        BankDeposit(){} // This empty constructor is very important as when we create objects at that time the complier assign it to some empty constructor. 


        BankDeposit(int p, int y, float r);  // r can be a value like 0.04
        BankDeposit(int p, int y, int r);  // r can be a value like 14

        void show(); // Creating a Method

};


BankDeposit :: BankDeposit(int p, int y, float r){
    principle = p;
    years = y;
    interestRate = r;

    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principle = p;
    years = y;
    interestRate = float (r) /100;

    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
    
}

void BankDeposit :: show(){
    cout << endl << "Principle amount was: " << principle << " and return value after " << years << " years is: " << returnValue << endl;
}


int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    cout << "Enter the value of p, y and r " <<endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show(); // show method is called
    
    // ***************************************************
    
    cout << "Enter the value of p, y and R " <<endl;
    cin >> p >> y >> R;
    
    bd2 = BankDeposit(p, y, R); // C++ ka complier will adjust itself or we can say it can sense itself which type of values are taken and accordingly assigns that constructor to it.

    bd2.show(); // show method is called
    // ***************************************************





    return 0;
}