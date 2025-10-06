#include "DLL.h"

DLL_Cont::DLL_Cont(){
    head = tail = nullptr;
}

// UNEDITED FOR DOUBLE LINKED NODE
DLL_Cont& DLL_Cont::operator = (const DLL_Cont& other){
    if(this == &other){
        return *this;
    }

    DNODE* ptr = head;

    // destroy old list
    while(ptr != nullptr){
        head = head -> next();
        delete ptr;
        ptr = head;
    }


    for(DNODE* ptr = head; ptr != nullptr; ptr = head){
        head = head -> next();
        delete ptr;
    }

    // make a copy
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        DNODE *src, *dest;
        head = new DNODE(other.head -> data());
        src = other.head -> next();
        dest = head;

        while(src != nullptr){
            dest -> set_next(new DNODE(src -> data()));
            src = src -> next();
            dest = dest -> next();
        }
        tail = dest;
    }

    return *this;
}

// UNEDITED FOR DOUBLY LINKED NODE
DLL_Cont::DLL_Cont(const DLL_Cont& other){
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        DNODE *src;
        head = new DNODE(other.head -> data());
        src = other.head -> next();
        tail = head;

        while(src != nullptr){
            tail -> set_next(new DNODE(src -> data()));
            src = src -> next();
            tail = tail -> next();
        }
    }
}

DLL_Cont::~DLL_Cont(){
    DNODE* ptr = head;

    while(ptr != nullptr){
        head = head -> next();
        delete ptr;
        ptr = head;
    }


    for(DNODE* ptr = head; ptr != nullptr; ptr = head){
        head = head -> next();
        delete ptr;
    }

}

void DLL_Cont::add_to_end(int item){
    if(head == nullptr){
        head = tail = new DNODE(item);
        return;
    }

    tail -> set_next(new DNODE(item, tail));
    tail = tail -> next();
}

void DLL_Cont::add_to_begin(int item){
    head = new DNODE(item, nullptr, head);
    head -> next() -> set_prev(head);
    if(tail == nullptr){
        tail = head;
    }
}

void DLL_Cont::remove(int item){
    DNODE* before, *ptr;
    before = ptr = head;
    // empty list
    if(head == nullptr){
        return;
    }
    while(ptr != nullptr && ptr -> data() != item){
        if(ptr -> next() != nullptr && ptr -> next() -> data() == item){
            before = ptr;
        }
        ptr = ptr -> next();
    }
    // removing head
    if(ptr == head){
        head = head -> next();
        // handle single node list
        if(head == nullptr){
            tail = nullptr;
        }
        else{
            head -> set_prev(nullptr);
        }
        delete ptr;    
        return;
    }
    // item not found
    if(ptr == nullptr){
        return;
    }
    // generic case
    before -> set_next(before -> next() -> next());
    // removing last node
    if(ptr == tail){
        tail = before;
    }
    else{
        before -> next() -> set_prev(before);
    }
    delete ptr;
}