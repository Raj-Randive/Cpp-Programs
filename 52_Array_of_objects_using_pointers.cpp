// Arrays of objects using pointers...!!

#include<iostream>
using namespace std;


class ShopItem{

    int id;
    float price;

    public:

        void setData(int a, float b){
            id = a;
            price = b;
        }

        void getData(){
            cout << "Code of this item is: " << id << endl;
            cout << "Price of this item is: " << price << endl;
        }

};


int main()
{
    int size = 3;

    //#1 General Store item
    //#2 Veggies item
    //#3 Hardware item

    ShopItem *ptr = new ShopItem[size]; // Array of objects

    // Initialized "ptrTemp" just to run loop number 2
    ShopItem *ptrTemp = ptr; // Points to first object
    ptrTemp = ptr; 

    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and Price of item " << i+1 << ": ";
        cin >> p >> q;

        ptr -> setData(p, q);
        ptr++;

    }

    // Humne ye ptrTemp banaya hai because jab pehla loop run hoga tab ptr last object ko point karega so we need to make that pointer to first object so that it prints the correct values

    for (int i = 0; i < size; i++)
    {
        cout << "\nItem number " << i+1 << ": " <<endl;
        ptrTemp -> getData();
        ptrTemp++;
    }
    
    
    

    return 0;
}