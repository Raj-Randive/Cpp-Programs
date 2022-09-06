// STL - Standard Template Libraries...!!
// Getting started with vectors !

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){  // vector <int> ko hum ek data-type ki tarah use kar rahe hai...!
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // We will print it just like an array...!!
        // cout << v.at(i) << " ";  -->  Another Method...!!
    }
    cout << endl;
    
}

int main()
{
    // Ways to create a Vector

    vector<int> vec1; // Zero length integer vector
    int element, n;

    cout << "Enter the number of elements you want in the vector: ";
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element);
    }

    display(vec1);
    // vec1.pop_back(); // Removed the last element
    // display(vec1);
    

    cout << "\n\nInserting an element\n";
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 56); 
    display(vec1);


    return 0;
}