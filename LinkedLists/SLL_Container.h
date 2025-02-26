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

        /**
         * @brief Overloaded assignment operator for a singly linked list container.
         *        Resets an existing object to be a copy of another existing object. 
         *        Must check for self-assignment, delete old data, and then copy the new data.
         * 
         * @param other - the object to copy data from
         * @return LLCont& - return a reference to this object for chaining assignments (L1 = L2 = L3;)
         */
        LLCont& operator = (const LLCont& other);

        /**
         * @brief Add a new node to the end of the list
         * 
         * @param data - the number to store in the new node
         */
        void add_to_end(int data);

    private:
        Node* head;
};