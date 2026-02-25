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
        head = tail = nullptr;
    }
    else{
        NODE* src;
        head = new NODE(other.head -> data());
        src = other.head -> next();
        tail = head;
        while(src != nullptr){
            tail -> set_next(new NODE(src -> data()));
            //tail -> next() = new NODE(src -> data());
            tail = tail -> next();
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

void LL_Container::add_to_end(int item){
    /*
    // no tail version
    if(head == nullptr){
        head = new NODE(item);
        return;
    }
    NODE* cursor;
    for(cursor = head; cursor -> next() != nullptr; cursor = cursor -> next()); 

    cursor -> set_next(new NODE(item));
    //(*cursor).set_next(new NODE(item));
    */

    // tail version
    if(head == nullptr){
        head = tail = new NODE(item);
        return;
    }
    tail -> set_next(new NODE(item));
    tail = tail -> next();
}

void LL_Container::add_to_head(int item){
    // no tail version
    //head = new NODE(item, head);

    // tail version
    if(head == nullptr){
        head = tail = new NODE(item, head);
        return;
    }
    head = new NODE(item, head);


    // tail version #2
    head = new NODE(item, head);
    if(tail == nullptr) tail = head;
}

void LL_Container::remove(int target){
    /*
        Cases we may want to consider for removal: 
        1. empty list
        2. one node
        3. generic middle node
        4. target doesn't exist
        5. last node
        6. first node
        7. multiple nodes with target (optional)
    */

    // empty list
    if(head == nullptr){
        return;
    }

    // single node case
    if(head -> next() == nullptr){
        if(head -> data() == target){
            delete head;
            head = tail = nullptr;
        }
        return;
    }

    // first node
    if(head -> data() == target){
        NODE* second_node = head -> next();
        delete head;
        head = second_node;
        return;
    }

    // generic case W/ last node and item not found
    // THIS SEGMENT HAS NOT BEEN FULLY EDITED YET FOR CLASS NODE AND TAIL POINTER
    NODE* cursor = head;
    NODE* prev = nullptr;
    for(; cursor != nullptr && (cursor -> data() != target); cursor = cursor -> next()){
        if(cursor -> next() != nullptr && cursor -> next() -> data() == target){
            prev = cursor;
        }
    }
    if(prev != nullptr) {
        prev -> next() = cursor -> next();
        // removing last node
        if(cursor == tail){
            tail = prev;
        }
        delete cursor;
    }
}