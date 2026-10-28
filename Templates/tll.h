#include "tnode.h"
#include "node_it.h"

template <class T>
class TLList{
    public:
        typedef node_it<T> iterator;

        TLList();
        ~TLList();
        TLList(const TLList& other);
        void operator = (const TLList& other);

        void add(const T& item);

        // external iterator support 
        iterator begin() {return iterator(head);}
        iterator end() {return iterator(nullptr);}
        // r_begin, r_end
        // insert and remove functions 
        // Tnode<T>* tmp == it.current;

    private:
        Tnode<T>* head;
        Tnode<T>* tail;
};

#include "tll.tcc"