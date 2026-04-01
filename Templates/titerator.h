
#ifndef IT_H
#define IT_H

template<typename T>
class node_iterator{
    public:
        friend class TLList<T>;

        node_iterator(Tnode<T>* c = nullptr) {current = c;}

        // move iterator to the next item in the list
        // ++it
        node_iterator operator ++ ();
        // it++
        node_iterator operator ++ (int);

        // see the data in the node the iterator is pointing to
        T operator * () const;

        // !=
        bool operator != (const node_iterator& other) const;

    private:
        Tnode<T>* current;
};

#include "titerator.template"

#endif