/**
 * @brief This file declares a template singly linked list class
 * 
 */

#ifndef TLL_H
#define TLL_H

#include <iostream>
#include "Tnode.h"

template<class T>
class TLList{
    public:
        TLList();
        ~TLList();
        TLList(const TLList& other);
        TLList& operator = (const TLList& other);

        void add(const T& item);
        void display(std::ostream& outs)const;
    
    private:
        // <T> passes the instantiation type to the node
        node<T>* head;
        node<T>* tail;
};

#include "TLList.template"

#endif