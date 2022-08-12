#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;

    public:
        void setId(void){
            salary = 122;
            cout << "Enter the if of Employee: ";
            cin >> id;
        }

        void getId(void){
            cout << "The id of this employee is: "<< id << endl << endl;
        }
};

int main()
{
    // Way #1
    // Employee Raj, Mike, Dustin, Steve;
    // Raj.setId();
    // Raj.getId();

    Employee fb[100];

    for (int i = 0; i < 5; i++)
    {
        fb[i].setId(); 
        fb[i].getId(); 
    }
    

    return 0;
}