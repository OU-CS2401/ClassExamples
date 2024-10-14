#include "llist.h"

LList::LList(){
    head = tail = nullptr;
}

LList::~LList(){
    Node* rm = head;
    while(head != nullptr){
        rm = head;
        head = head -> next();
        delete rm;
    }
}

LList::LList(const LList& other){
    if(other.head == nullptr){
        head = nullptr;
        return;
    }
    Node *src, *dest;
    head = new Node(other.head -> data());
    src = other.head -> next();
    dest = head;
    while(src != nullptr){
        dest -> set_next(new Node(src -> data()));
        src = src -> next();
        dest = dest -> next();
    }
}

LList& LList::operator = (const LList& other){
    // check for self assignment
    if(this == &other){
        return *this;
    }

    // deallocate old list

    // make a copy of other

    return *this;
}


void LList::add_to_end(int d){
    if(head == nullptr){
        head = new Node(d);
        return;
    }
    node* cursor;
    for(cursor = head; cursor -> next() != nullptr; cursor = cursor -> next()){
        
    }
    cursor -> set_next(new Node(d));
    // cursor -> next() = new node;
    // cursor -> next() -> next() = nullptr;
    // cursor -> next() -> data() = d;
}

void LList::add_to_begin(int d){
    if(head == nullptr){
        head = new Node(d);
        // head -> set_data(d);
        // head -> set_next(nullptr);
        return;
    }
    Node* cursor = head;
    head = new Node(d);
    head -> set_next(cursor);
}

void LList::remove(int target){
    if(head == nullptr) return;

    if(head -> data == target){
        node* cursor = head;
        head = head -> next;
        delete cursor;
        return;
    }

    node* prev, *cursor;

    // find the node to remove and the previous node
    for(cursor = head; cursor -> next -> data; cursor = cursor -> next){

    }

    if(cursor -> next != nullptr){
        prev = cursor;
        cursor = cursor -> next;
        prev -> next = prev -> next -> next;
        delete cursor;
    }
}