/**
 * @file SLL_Container.h
 * @author Patricia Lindner
 * @brief This file declares a singly linked list container class
 * @date 2025-02-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "SLL_Node.h"


class LLCont{
    public:
        /**
         * @brief Construct a new LLCont object - start with an empty list
         * 
         */
        LLCont() {head = nullptr;}

        // The Big 3
        /**
         * @brief Destroy the LLCont object - deallocate all nodes
         * 
         */
        ~LLCont();

        /**
         * @brief Construct a new LLCont object that is a copy of another existing one
         * 
         * @param other - the object to copy data from
         */
        LLCont(const LLCont& other);

    private:
        Node* head;
};