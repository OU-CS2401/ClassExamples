#include "node.h"

class LL_Container{
    public:
        LL_Container() {head = nullptr;}

        // The Big 3
        ~LL_Container();
        LL_Container(const LL_Container& other);
        LL_Container& operator = (const LL_Container& other);

    private:
        NODE* head;
};