// Container classes
// This class uses an automatic array to store the collection
#include <iostream>

class Numbers{
    public:
        static const size_t SIZE = 100;
        Numbers() {used = 0;}

        void add_item(int item);
        void see_all(std::ostream& outs) const;

        double average() const;
        void remove(int index);

        void remove_all(int target);

    private:
        int data[SIZE];
        int used;
};
