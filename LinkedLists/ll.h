#include "node.h"

class LL_Cont{
    public:
        LL_Cont() {head = tail = nullptr;}

        // The Big 3
        ~LL_Cont();
        LL_Cont(const LL_Cont& other);
        LL_Cont& operator = (const LL_Cont& other);

        void add_end(int item);
        void add_head(int item);
        void remove(int target);

        void display() const;

    private:
        NODE* head;
        NODE* tail;
};