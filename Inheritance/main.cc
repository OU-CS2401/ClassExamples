#include <iostream>
#include "shapes.h"
using namespace std;

int main(){
    Triangle t;
    Circle c;
    Rectangle r;

    //Shape s; // won't work with purely virtual area function

    // This section causes slicing since the array is of Shape objects
    Shape s[10];
    s[0] = r; 

    cout << s[0].cost();

    // This section does not cause slicing since the array is of Shape pointers
    Shape* s2[10];
    s2[0] = new Rectangle(); 

    cout << s2[0] -> cost();

}