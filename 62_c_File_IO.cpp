// File I/O in C++
// Using open() member functions...!!

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is Raj here!" << endl;
    out << "Hello how are you" << endl;
    out << "Doing CP now and then" << endl;
    out.close();
    
    // **********************************************************************************

    ifstream in;
    string st, st2;
    in.open("sample.txt");
    
    // in >> st;
    // in >> st >> st2;
    // getline(in, st);

    while (in.eof() == 0) 
    // Means jab tak eof(end of file) na aa jaye tab tak print karte raho.
    {
        getline(in, st);
        cout << st << endl;
    }
    
    in.close();

    return 0;
}