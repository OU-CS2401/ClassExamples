#include "shapes.h"
#include <iostream>

using namespace std;

int main(){
    Shape s1[3];
    Circle c;
    Rectangle r;
    Triangle t;

    s1[0] = c;
    s1[1] = r;
    s1[2] = t;


    //cout << s.cost() << endl;
    cout << r.cost() << endl;

    // polymorphism
    Shape* s[3];
    s[0] = new Circle;
    s[1] = new Rectangle;
    s[2] = new Triangle;

    cout << s[0] -> cost() << endl;

    delete s[0];


    //
    Shape** s_array = new Shape*[3];
    delete [] s_array;
}