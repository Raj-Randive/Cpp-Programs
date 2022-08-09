#include<iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}
 
int main()
{
    int money = 100000;

    // Here we have not given any second argument to the function so it will print the "Default_Argument" value.

    cout << "If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after 1 year."<< endl << endl;


    // Here we are over-writing the default value of the argument FACTOR.
    cout << "For VIPs: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.08) << " Rs after 1 year."<< endl;

    return 0;
}