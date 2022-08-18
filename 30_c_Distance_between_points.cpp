// Calculating the distances between two points...!!
#include<iostream>
#include<math.h>
using namespace std;

class Point{

    int x, y;
    friend void distanceBtw(Point, Point);

    public:
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout << "The point is (" << x << ", " << y << ")" << endl;
        }


};

void distanceBtw(Point o1, Point o2){

    int d = sqrt(pow(o1.x - o2.x, 2) + pow(o1.y - o2.y, 2));
    cout << "The distance is: " << d << endl;

}

int main()
{
    Point p(2, 4);
    p.displayPoint();
    
    Point q(5, 8);
    q.displayPoint();

    distanceBtw(p, q);

    return 0;
}