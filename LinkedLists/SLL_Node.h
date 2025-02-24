/**
 * @file SLL_Node.h
 * @author Patricia Lindner
 * @brief This file defines a node class to be used in a singly linked list container
 * @date 2025-02-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

class Node{
    public:
        /**
         * @brief Construct a new Node object
         * 
         * @param d - data for the node (0 by default)
         * @param n - pointer to the next node (nullptr by default)
         */
        Node(int d = 0, Node* n = nullptr);

        /**
         * @brief Return the data in this node
         * 
         * @return int - data value
         */
        int data() const {return dataF;}
        /**
         * @brief Return the pointer to the next node
         * 
         * @return Node* - pointer to next node
         */
        Node* next() const {return nextPtr;}

        /**
         * @brief Set the data member
         * 
         * @param d - new data value
         */
        void set_data(int d) {dataF = d;}
        /**
         * @brief Set the next member
         * 
         * @param n - new next value
         */
        void set_next(Node* n) {nextPtr = n;}

    private:
        int dataF;
        Node* nextPtr;
};

Node::Node(int d, Node* n){
    dataF = d;
    nextPtr = n;
}