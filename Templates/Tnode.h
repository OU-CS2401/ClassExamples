/**
 * @file Tnode.h
 * @author Patricia Lindner
 * @brief This file provides a template framework for a singly linked list node
 * @date 2026-03-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */


/*
    TEMPLATE RULES:
        1. You must add the template header with template parameter before the class declaration.
        2. Every function of a template class is a template function regardless of if it uses the template parameter type or not.
        3. The name of a template class MUST be followed by < > every time it is used unless it is the name of a function (constructor/deconstructor).
            a. If you are writing function definitions you use <T> (or whatever the template parameter is)
            b. If you are writing an application (main program) you use <int> (or whatever real type you want to store in the container)

*/

#ifndef TNODE_H
#define TNODE_H

template <typename T>
class Tnode{
    public:
        Tnode(T d = T(), Tnode* n = nullptr);

        // accessors
        Tnode* next() const;
        T data() const {return dataF;}

        // mutator
        void set_next(Tnode* n) {nextF = n;}
        void set_data(T d) {dataF = d;}

    private:
        T dataF;
        Tnode* nextF;
};

#include "tnode.template"

#endif