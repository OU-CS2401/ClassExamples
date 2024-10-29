class Shape{
    public:
        double cost() {return area() * cost_per;}
        //virtual double area() {return 0;}
        virtual double area() = 0;

    private:
        double cost_per;
};

class Triangle:public Shape{
    public:
        double area() {return 0.5 * base * height;}

    private:
        double base;
        double height;
};

class Circle:public Shape{
    public:
        double area() {return 3.14 * radius * radius;}

    private: 
        double radius;
};

class Rectangle:public Shape{
    public:
        double area() {return length * width;}
    
    private:
        double length;
        double width;
};