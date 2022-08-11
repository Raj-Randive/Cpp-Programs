#include<iostream>
using namespace std; 

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    
    public:

        void initCounter(void){
            counter = 0;
        }

        void setPrice(void);  // We call this as Methods...!!
        void displayPrice(void); // We call this as Methods...!!
};

void shop :: setPrice(void){
    cout << "Enter Id of your item number "<< counter+1 << ": " ;
    cin >> itemId[counter];
    cout << "Enter Price of your item: " ;
    cin >> itemPrice[counter];

    counter++;
}

void shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item with Id " << itemId[i] << " is: " << itemPrice[i] << endl;
    }
    
}




int main()
{
    int n;

    shop dukaan;  // Creating an object...!!
    dukaan.initCounter();

    cout << "Enter how many items are there in your dukaan : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        dukaan.setPrice();
    }

    cout << endl;
    dukaan.displayPrice();

 
    return 0;
}  