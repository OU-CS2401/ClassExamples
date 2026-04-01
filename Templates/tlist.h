/**
 * @file tlist.h
 * @author Patricia Lindner
 * @brief This file demonstrates a framework for a template linked list container
 * @date 2026-03-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "Tnode.h"
#include "titerator.h"

#ifndef TLLIST_H
#define TLLIST_H

template <typename T>
class TLList{
    public:
        typedef node_iterator<T> iterator;

        TLList();
        ~TLList();
        TLList(TLList& other);
        TLList& operator = (TLList& other);

        void add(T item);

        // external iterator support
        iterator begin() const {return iterator(head);}
        iterator end() const {return iterator(nullptr);}

        // functions that use the iterator
        void remove(iterator& it);

    private:
        Tnode<T>* head;
        Tnode<T>* tail;
};

#include "tlist.template"

#endif