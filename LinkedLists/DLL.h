#include "DNODE.h"

class DLL_Cont{
    public:
        DLL_Cont();

        // The Big 3
        ~DLL_Cont();
        DLL_Cont(const DLL_Cont& other);
        DLL_Cont& operator = (const DLL_Cont& other);

        void add_to_end(int item);
        void add_to_begin(int item);

        void remove(int item);

    private:
        DNODE* head;
        DNODE* tail;
};