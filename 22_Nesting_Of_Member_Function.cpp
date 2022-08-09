#include<iostream>
#include<string>
using namespace std;

class binary{
    string s;  // By default it is private

    public:
        void read(void); // Declared
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};

void binary :: read(void){  // Defining the declared function
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary :: chk_bin(){   // Defining a method which is defined in the class.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);  
        }   
    }
}

// 1's Complement of Binary Number We Entered
void binary :: ones_compliment(void)
{
    chk_bin(); // Nesting member function

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0') { s.at(i) = '1'; }
        else if (s.at(i) == '1') { s.at(i) = '0'; }
    }
    
}

void binary :: display(void){
    cout<< "The ones compliment of the binary number is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i); 
    }  
}



int main()
{
    // Nesting of member functions

    binary b;
    b.read(); 
    // If we make the chk_bin function a private then we can't write it here as written below. We have to write in some of the function (i.e Nesting Function)..

    // b.chk_bin();  // Isko bahar se directly use nahi kar sakte
    b.ones_compliment();
    b.display();

    return 0;
}




//********************* QUICK RECAPE ***********************


// OPPs - Classes and Objects

    // C++ --> Initially called as C with Classes by Stroustroup
    //Classes --> Extension of structures (in C)
    // Structures had limitations
    //      --> Members are public
    //      --> No Methods
    // Classes --> Structures + more
    // Classes --> Can have methods and properties. 
    // Classes --> Can make few members as private and few as public

    // Structures in C++ are typedefed
    // You can declare objects along with the class declaration