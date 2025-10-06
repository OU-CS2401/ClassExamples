#include "SLL.h"

LL_Cont::LL_Cont(){
    head = tail = nullptr;
}

LL_Cont& LL_Cont::operator = (const LL_Cont& other){
    if(this == &other){
        return *this;
    }

    NODE* ptr = head;

    // destroy old list
    while(ptr != nullptr){
        head = head -> next();
        delete ptr;
        ptr = head;
    }


    for(NODE* ptr = head; ptr != nullptr; ptr = head){
        head = head -> next();
        delete ptr;
    }

    // make a copy
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        NODE *src, *dest;
        head = new NODE(other.head -> data());
        src = other.head -> next();
        dest = head;

        while(src != nullptr){
            dest -> set_next(new NODE(src -> data()));
            src = src -> next();
            dest = dest -> next();
        }
        tail = dest;
    }

    return *this;
}

LL_Cont::LL_Cont(const LL_Cont& other){
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        NODE *src;
        head = new NODE(other.head -> data());
        src = other.head -> next();
        tail = head;

        while(src != nullptr){
            tail -> set_next(new NODE(src -> data()));
            src = src -> next();
            tail = tail -> next();
        }
    }
}

LL_Cont::~LL_Cont(){
    NODE* ptr = head;

    while(ptr != nullptr){
        head = head -> next();
        delete ptr;
        ptr = head;
    }


    for(NODE* ptr = head; ptr != nullptr; ptr = head){
        head = head -> next();
        delete ptr;
    }

}

void LL_Cont::add_to_end(int item){
    if(head == nullptr){
        head = tail = new NODE(item);
        return;
    }

    tail -> set_next(new NODE(item));
    tail = tail -> next();
}

void LL_Cont::add_to_begin(int item){
    head = new NODE(item, head);
    if(tail == nullptr){
        tail = head;
    }
}

void LL_Cont::remove(int item){
    NODE *before, *ptr;
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
    delete ptr;
}