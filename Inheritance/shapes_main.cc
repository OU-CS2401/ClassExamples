#include "shapes.h"
#include <iostream>

using namespace std;

int main(){
    // Circle c;
    // Rectangle r;
    // Triangle t;

    // Polymorphic array 
    // Use parent pointers to store the addresses of child objects
    Shape* shapes[3];

    // shapes[0] = &c;
    // shapes[1] = &r;
    // shapes[2] = &t;
    shapes[0] = new Circle;
    shapes[1] = new Rectangle;
    shapes[2] = new Triangle;

    cout << shapes[0] -> cost();
    // cout << r.cost();
    // cout << t.cost();
}