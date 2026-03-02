#include "dnode.h"

class DLL_Container{
    public:
        DLL_Container() {head = tail = nullptr;}

        // The Big 3
        ~DLL_Container();
        DLL_Container(const DLL_Container& other);
        DLL_Container& operator = (const DLL_Container& other);


        // other useful stuff
        void add_to_end(int item);
        void add_to_head(int item);

    private:
        DNODE* head;
        DNODE* tail;
};