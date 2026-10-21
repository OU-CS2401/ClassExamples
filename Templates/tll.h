#include "tnode.h"

template <class T>
class TLList{
    public:
        TLList();
        ~TLList();
        TLList(const TLList& other);
        void operator = (const TLList& other);

        void add(const T& item);

    private:
        Tnode<T>* head;
        Tnode<T>* tail;
};

#include "tll.tcc"