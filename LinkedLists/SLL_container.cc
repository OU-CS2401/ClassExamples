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

        // This is incomplete as of 2/24 - only the first node is copied so far
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