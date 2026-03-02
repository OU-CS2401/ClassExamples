#include "DLL.h"


DLL_Container::~DLL_Container(){
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

    
    // OPTION 3
    DNODE* tmp;
    while(head != nullptr){
        tmp = head;
        head = head -> next();
        delete tmp;
    }
    tail = nullptr;
    

}

DLL_Container::DLL_Container(const DLL_Container& other){
    //NODE* tmp = new NODE(other.head -> data());


    if(other.head == nullptr){
        head = tail = nullptr;
    }
    else{
        DNODE* src;
        head = new DNODE(other.head -> data());
        src = other.head -> next();
        tail = head;
        while(src != nullptr){
            tail -> set_next(new DNODE(src -> data()));
            //tail -> next() = new NODE(src -> data());
            tail = tail -> next();
            src = src -> next();
        }
    }
}

/*
    IMPORTANT: This function has NOT been edited for a tail pointer or a doubly linked node. IT WILL NOT WORK CORRECTLY.
*/
DLL_Container& DLL_Container::operator = (const DLL_Container& other){
    // check for self assignment
    if(this == &other) return *this;
    
    // put the deconstructor code here to clear out the existing list
    DNODE* tmp;
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
        DNODE* src, *dest;
        head = new DNODE(other.head -> data());
        src = other.head -> next();
        dest = head;
        while(src != nullptr){
            dest -> set_next(new DNODE(src -> data()));
            //dest -> next() = new NODE(src -> data());
            dest = dest -> next();
            src = src -> next();
        }
    }

    return *this;
}


void DLL_Container::add_to_head(int item){
    head = new DNODE(item, nullptr, head);
    
    // if tail is nullptr, the list was empty; this new node is the only node in the list so head and tail should be pointing to the same place
    if(tail == nullptr) tail = head;
    // if tail is not equal to nullptr, there was already at least one node in the list so the old head's previous pointer needs to be reset to point to the new head node
    else head -> next() -> set_prev(head);
}
