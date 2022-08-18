#include<iostream>
using namespace std;


class Point{
    int x, y;

    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout << "The point is (" << x << ", " << y << ")" << endl;
        }
};


int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
}

// Quiz: create a function(Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points.