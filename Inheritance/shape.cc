#include <iostream>
using namespace std;

class Shape{
    public:
        Shape() {cost_per = 0;}
        
        double cost() {return area() * cost_per;}

        // This area function is virtual; it can be optionall overridden by children
        //virtual double area() {return 1;}

        // This area function is purely virtual; must be defined by all children
        //virtual double area() = 0;

    protected:
        double cost_per;
};

class Rectangle:public Shape{
    public:
        Rectangle(double l = 0, double w = 0, double c = 0) {length = l; width = w; cost_per = c;}
        double area() {return length * width;}

    private:
        double length;
        double width;
};

class Circle:public Shape{
    public:
        Circle(double r = 0, double c = 0) {radius = r; cost_per = c;}
        double area() {return 3.14 * radius * radius;}

    private:
        double radius;
};

class Triangle:public Shape{
    public:
        Triangle(double b = 0, double h = 0, double c = 0) {base = b; height = h; cost_per = c;}
        double area() {return 0.5 * base * height;}
    
    private:
        double base;
        double height;
};

int main(){
/*
    // This section of code will work if you have a virtual area function (but NOT with the purely virtual function)
    Shape s;
    Rectangle r(2, 14, 1);
    Triangle t(1.5, 2.5, 3);
    Circle c(2, 5);

    // can set s = c (passing c - a child - where a parent object is expected)
    s = c;
    // cannot set c = s (passing s - a parent - where a child object is expected)
    c = s;

    cout << "Cost of r: " << r.cost() << endl;
    cout << "Cost of t: " << t.cost() << endl;
    cout << "Cost of c: " << c.cost() << endl;
*/

    // You can still make Shape pointers even if Shape is an abstract class.
    Shape* s;
    Rectangle r;

    // This works because what is expected on the right-hand-side is a Shape (parent) address
    // I can pass a child whenever a parent is expected, so I can pass a child object's address instead
    s = &r;

    s = new Rectangle(2, 14, 1);
    cout << "Cost of dynamically allocated Rectangle : " << (*s).cost() << endl;
    cout << "Can use the -> operator to call the func: " << s -> cost() << endl;

    // Polymorphism - making a data structure that seems to hold different types of objects
    // allocate an array of parent pointers
    Shape* box[5];
    // make each parent pointer point to a different type of child object
    box[0] = new Rectangle(2, 14, 1);
    box[1] = new Triangle(1.5, 2.5, 3);
    box[2] = new Circle(2, 5);

    cout << "Cost of box[0] (r): " << box[0] -> cost() << endl;
    cout << "Cost of box[1] (t): " << box[1] -> cost() << endl;
    cout << "Cost of box[2] (c): " << box[2] -> cost() << endl;
}