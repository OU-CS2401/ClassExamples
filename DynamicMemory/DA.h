#include <iostream>

class DA{
    public:
        DA();

        // The Big 3
        // Destructor or Deconstructor
        ~DA();
        // Copy Constructor
        DA(const DA& other);
        // Assignment operator
        void operator = (const DA& other);

        void add_item(int item);
        void see_all(std::ostream& outs) const;

        // double average() const;
        // void remove(int index);

        // void remove_all(int target);

        // iterator functions
        void start() {current_index = 0;}
        bool is_item() {return current_index < used;}
        void advance() {current_index++;}
        int current() {return data[current_index];}

        // other functions that use the iterator
        void remove();

        // put item before the item that the iterator is pointing to or at the beginning if iterator is invalid
        void insert(int item);

        // put item after the item that the iterator is pointing to or at the end if iterator is invalid
        void attach(int item);

    private:
        int* data;
        int used;
        int size;
        void resize();

        // internal iterator
        int current_index;
};