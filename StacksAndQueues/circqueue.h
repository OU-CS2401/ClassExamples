template <class T>
class CircQueue{
    public:
        static const int SIZE = 100;
    private:
        int next_item(int n) {return (n + 1) % SIZE;}

        T array[SIZE];
        int front, back;
}