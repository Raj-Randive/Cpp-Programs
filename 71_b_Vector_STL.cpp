// STL - Standard Template Libraries...!!
// Getting started with vectors !

#include<iostream>
#include<vector>
using namespace std;

template <class T> // template function

void display(vector<T> &v) {  // vector <int> ko hum ek data-type ki tarah use kar rahe hai...!
    
    cout << "\n\nDisplaying this vector." << endl;
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
    vector<char> vec2(4); // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 87); // 6-element vector of 87s.

    display(vec1);

    vec2.push_back('5');
    vec2.push_back('a');
    vec2.push_back('R');
    display(vec2);

    display(vec3); 

    display(vec4);
    cout << vec4.size();
 

    return 0;
}