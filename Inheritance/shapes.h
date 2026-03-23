// Parent Class
class Shape{
    public:
        double cost() {return area() * cost_per_unit;}
        // virtual function, can override for children
        virtual double area() {return 0;}

        // purely virtual, MUST override for children
        //virtual double area() = 0;

    protected:
        double cost_per_unit;
};

class Rectangle:public Shape{
    public:
        double area() {return length * width;}

    private:
        double length;
        double width;
};

class Circle:public Shape{
    public:
        double area() {return 3.14 * radius * radius;}

    private:
        double radius;
};

class Triangle:public Shape{
    public:
        double area() {return 0.5 * base * height;}

    private:
        double base;
        double height;
};