#include "NODE.h"

class LL_Cont{
    public:
        LL_Cont();

        // The Big 3
        ~LL_Cont();
        LL_Cont(const LL_Cont& other);
        LL_Cont& operator = (const LL_Cont& other);

        void add_to_end(int item);
        void add_to_begin(int item);

        void remove(int item);

    private:
        NODE* head;
        NODE* tail;
};