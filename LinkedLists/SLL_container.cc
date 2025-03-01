/**
 * @file SLL_container.cc
 * @author Patricia Lindner
 * @brief This file defines a singly linked list container class
 * @date 2025-02-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "SLL_container.h"

LLCont::LLCont(const LLCont& other){
    if(other.head == nullptr){
        head = nullptr;
    }
    else{
        head = new Node(other.head -> data());

        Node *src = other.head -> next();
        tail = head;

        // This is incomplete as of 2/24 - only the first node is copied so far
        while(src != nullptr){
            // Node* n = new Node();
            // dest -> set_next(n);

            tail -> set_next(new Node(src -> data()));
            src = src -> next();
            tail = tail -> next();
        }
        //tail = dest;
    }
}

LLCont::~LLCont(){
    Node* rmptr = head;
    while(head != nullptr){
        rmptr = head;
        head = head -> next();
        delete rmptr;
    }
}

LLCont& LLCont::operator = (const LLCont& other){
    // check for self assignment
    if(this == &other){
        return *this;
    }

    // deallocate all nodes in the list
    // deconstructor code

    // make a copy
    // copy constructor code

    return *this;
}


void LLCont::add_to_end(int data){

    if(head == nullptr){
        // list is empty
        head = tail = new Node(data);
        return;
    }

    tail -> set_next(new Node(data));
    tail = tail -> next();
}

void LLCont::add_to_head(int data){
    if(head == nullptr){
        head = tail = new Node(data, head);
    }
    else{
        head = new Node(data, head);
    }
}

void LLCont::remove(int target){
    // handle empty list
    if (head == nullptr) return;

    if(head -> data() == target){
        node* tmp = head;
        head = head -> next();
        delete tmp;

        // handle single node list
        if(head == nullptr){
            tail = nullptr;
        }

        return;
    }

    // as of 2/28 we have not check for edits to include tail from this point on
    // move tmp to point at the node before the one I want to remove
    node *before, *tmp;
    for(tmp = head; tmp -> next() != nullptr && tmp -> next() -> data() != target; tmp = tmp -> next());

    if(tmp -> next() == nullptr && tmp -> data() != target) return;

    before = tmp;
    tmp = tmp -> next();

    // make the node before the one we want to remove point to the node after the one we want to remove
    before -> set_next(tmp -> next());
    // deallocate the node we wanted to remove
    delete tmp;
}