#include "LL.h"


LL_Container::~LL_Container(){
    /*
        All three of these version would work...
    */

    /*
    // OPTION 1
    if(head == nullptr) return;
    for(NODE* tmp = head -> next(); tmp != nullptr; tmp = tmp -> next()){
        delete head;
        head = tmp;
    }
    delete head;
    head = nullptr;
    */

    /*
    // OPTION 2
    if(head == nullptr) return;
    for(NODE* tmp = head -> next(); head != nullptr; tmp = tmp -> next()){
        delete head;
        head = tmp;
    }
    head = nullptr;
    */

    /*
    // OPTION 3
    NODE* tmp;
    while(head != nullptr){
        tmp = head;
        head = head -> next();
        delete tmp;
    }
    */

}

LL_Container::LL_Container(const LL_Container& other){
    //NODE* tmp = new NODE(other.head -> data());


    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        NODE* src, *dest;
        head = new NODE(other.head -> data());
        src = other.head -> next();
        dest = head;
        while(src != nullptr){
            dest -> set_next(new NODE(src -> data()));
            //dest -> next() = new NODE(src -> data());
            dest = dest -> next();
            src = src -> next();
        }
    }
}




LL_Container& LL_Container::operator = (const LL_Container& other){
    // check for self assignment
    if(this == &other) return *this;
    
    // put the deconstructor code here to clear out the existing list
    NODE* tmp;
    while(head != nullptr){
        tmp = head;
        head = head -> next();
        delete tmp;
    }

    // put the copy constructor code here to make a deep copy of the other this
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        NODE* src, *dest;
        head = new NODE(other.head -> data());
        src = other.head -> next();
        dest = head;
        while(src != nullptr){
            dest -> set_next(new NODE(src -> data()));
            //dest -> next() = new NODE(src -> data());
            dest = dest -> next();
            src = src -> next();
        }
    }

    return *this;
}