#include<iostream>
using namespace std;

class Employee{

    int id;
    static int count; 

    public:
        void setData(void){
            cout << "\nEnter the id: ";
            cin >> id;
            count++;
        }
        void getData(void){
            cout << "The id of the employee is: " << id << " and this is employee number: " << count <<endl;
        }
};

int Employee :: count; // Default value is 0
// int Employee :: count = 1000;  ---> Will start the count from 1000

int main()
{

    Employee Raj, Mike, Dustin;
    // Raj.id = 12;
    // Raj.count = 32;  
    // --> Can't do like this as id and count are private.

    Raj.setData();
    Raj.getData();
    
    Mike.setData();
    Mike.getData();
    
    Dustin.setData();
    Dustin.getData();

    

    return 0;
}