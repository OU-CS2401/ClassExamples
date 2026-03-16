/**
 * @file tlist.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2026-03-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "Tnode.h"

template <typename T>
class TLList{
    public:
        TLList();
        ~TLList();
        TLList(TLList& other);
        TLList& operator = (TLList& other);

        void add(T item);

    private:
        Tnode<T>* head;
        Tnode<T>* tail;
};

#include "tlist.template"