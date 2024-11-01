#include "tnode.h"
#include "nodeit.h"

template <class T>
class TLList{
    public:
        typedef nodeIT<T> iterator;

        TLList();
        ~TLList();
        TLList(const TLList& other);
        TLList& operator = (const TLList& other);

        // external iterator support
        iterator begin() {return iterator(head);}
        iterator end() {return iterator(nullptr);}
        // rbegin, rend

        // insert_before(iterator it, T item);
        // insert_after(iterator it, T item);
        // remove(iterator it);

    private:
        TNode<T>* head;
        TNode<T>* tail;
};

template <class T>
TLList<T>& TLList<T>::operator = (const TLList<T>& other){

}