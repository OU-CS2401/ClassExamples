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
        Node *dest = head;

        // This is incomplete as of 2/24 - only the first node is copied so far
        while(src != nullptr){
            // Node* n = new Node();
            // dest -> set_next(n);

            dest -> set_next(new Node(src -> data()));
            src = src -> next();
            dest = dest -> next();
        }
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
    Node *cursor = head;

    while(cursor -> next() != nullptr){
        cursor = cursor -> next();
    }

    cursor -> set_next(new Node(data));

    // This function is incomplete as is - what special cases need to be considered??
}