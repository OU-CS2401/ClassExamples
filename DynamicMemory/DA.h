#include <iostream>

class DA{
    public:
        DA();

        void add_item(int item);
        void see_all(std::ostream& outs) const;

        double average() const;
        void remove(int index);

        void remove_all(int target);

    private:
        int* data;
        int used;
        int size;
        void resize();
};