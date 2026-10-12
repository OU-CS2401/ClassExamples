#include "ll.h"

using namespace std;

LL_Cont::~LL_Cont(){
    NODE* cursor = head;

    while(head != nullptr){
        cursor = head;
        head = head -> next();
        delete cursor;
    }
}


LL_Cont::LL_Cont(const LL_Cont& other){
    if(other.head == nullptr){
        head = nullptr;
        return;
    }

    NODE *src;
    head = new NODE(other.head -> data());
    src = other.head -> next();
    tail = head;

    while(src != nullptr){
        //tail -> next() = new NODE(src -> data());
        tail -> set_next(new NODE(src -> data()));

        /*
        // Previous line does the same thing as these two
        NODE* tmp = new NODE(src -> data());
        tail -> set_next(tmp);
        */

        src = src -> next();
        tail = tail -> next();
    }
    //tail = dest;
}

LL_Cont& LL_Cont::operator = (const LL_Cont& other){
    // check for self assignment
    if(this == &other){
        return *this;
    }

    // deconstructor code here

    // put copy constructor code here

    return *this;
}

void LL_Cont::add_end(int item){
    // special case for empty list
    if(head == nullptr){
        head = tail = new NODE(item);
        return;
    }

    tail -> set_next(new NODE(item));
    tail = tail -> next();
}

void LL_Cont::add_head(int item){
    if(head == nullptr){
        head = tail = new NODE(item, head);
        return;
    }
    head = new NODE(item, head);
    // if(tail == nullptr){
    //     tail = head;
    // }
}

void LL_Cont::remove(int target){

}

void LL_Cont::display() const{

}