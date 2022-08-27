#include<iostream>
using namespace std;


union money{
    int rice;
    char car;
    float pounds;

    // We Will use one data type out of these three at a time...!!
    // And by this it provides better memory management...!!
};


int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'W';

    // In union we can only use one thing at a time out of defines values..!!

    cout << "We are getting a garbage value at place of rice as it has overwritten by car: " << m1.rice << endl;
    cout << "Now this will be printed instead of rice: " << m1.car << endl;

    return 0;
}