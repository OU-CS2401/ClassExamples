int main(){
    // Shape box[10];
    // Triangle t;
    // Circle c;
    // Rectangle r;

    // box[0] = t;
    // box[1] = c;
    // box[2] = r;


    Shape* box[10];

    box[0] = new Triangle;
    box[1] = new Circle;
    box[2] = new Rectangle;

    cout << box[0] -> cost();
}