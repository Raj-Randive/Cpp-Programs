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

        static void getCount(void){
            // cout << id; --> Will give an error as static member ke andar humne koi aur hi variable le liya
            
            cout << "The value of count is: " << count <<endl; 
        }
};

int Employee :: count; // Default value is 0


int main()
{

    Employee Raj, Mike, Dustin;
    // Raj.id = 12;
    // Raj.count = 32;  
    // --> Can't do like this as id and count are private.

    Raj.setData();
    Raj.getData();
    Employee :: getCount();
    
    Mike.setData();
    Mike.getData();
    Employee :: getCount();
    
    Dustin.setData();
    Dustin.getData();
    Employee :: getCount();

    return 0;
}