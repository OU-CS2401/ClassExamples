#include "node.h"

class LL_Container{
    public:
        LL_Container() {head = tail = nullptr;}

        // The Big 3
        ~LL_Container();
        LL_Container(const LL_Container& other);
        LL_Container& operator = (const LL_Container& other);


        // other useful stuff
        void add_to_end(int item);
        void add_to_head(int item);
        void remove(int target);

    private:
        NODE* head;
        NODE* tail;
};