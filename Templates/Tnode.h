/**
 * @brief This file declares and defines a template node
 * 
 */

#ifndef TNODE_H
#define TNODE_H

template<class T>
class node{
    public:
        // T() as a default uses the default constructor for the T type
        node(T d = T(), node* n = nullptr);

        T data()const {return data_field;}
        node* next()const {return next_field;}

        void set_data(T item) {data_field = item;}
        void set_next(node* n) {next_field = n;}

    private:
        T data_field;
        node* next_field;
};

#endif