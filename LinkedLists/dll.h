#include "dnode.h"

class DLL_Cont{
    public:
        DLL_Cont() {head = tail = nullptr;}

        // The Big 3
        ~DLL_Cont();
        DLL_Cont(const DLL_Cont& other);
        DLL_Cont& operator = (const DLL_Cont& other);

        void add_end(int item);
        void remove(int target);

    private:
        DNODE* head;
        DNODE* tail;
};