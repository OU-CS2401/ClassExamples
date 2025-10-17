#include "tnode.h"

#ifndef NODEI_H
#define NODEI_H

// Forward declaration of TLList class
template<class T> class TLList;

template<class T>
class node_iterator{
    public:
        // Make the iterator a friend of the TLList class to all access to the current pointer
        friend class TLList<T>;

        node_iterator(Tnode<T>* c = nullptr) {current = c;}

        bool operator != (node_iterator other)const {return current != other.current;}
        bool operator == (node_iterator other)const {return current == other.current;}
        T operator * ()const {return current -> data();}

        // prefix (before)
        node_iterator operator ++ ();

        // for postfix (after), put "int" in the () so the compiler
        // can tell the difference between pre and post
        node_iterator operator ++ (int);

    private:
        Tnode<T>* current;
};

#include "node_iterator.template"

#endif