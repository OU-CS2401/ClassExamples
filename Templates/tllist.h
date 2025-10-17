#include "tnode.h"
#include "node_iterator.h"
#include <iostream>
using namespace std;

#ifndef TLLIST_H
#define TLLIST_H

template<class T>
class TLList{
    public:
        TLList() {head = tail = nullptr;}

        void add(T item) {head = new Tnode<T>(item, head);}

        // iterator stuff
        // This line allows you to type "iterator" instead of "node_iterator<T>"
        typedef node_iterator<T> iterator;

        iterator begin()const {return iterator(head);}
        iterator end()const {return iterator(nullptr);}

    private:
        Tnode<T>* head;
        Tnode<T>* tail;
};

#endif