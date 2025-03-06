/**
 * @file DAcontainer.cc
 * @author Patricia Lindner
 * @brief This file demonstrates how to make a template class
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <string>
using namespace std;

// Class declaration
template <class T>
class DArray{
    public:
        DArray();

        // The Big 3
        /**
         * @brief Destroy the DArray object
         * 
         */
        ~DArray();

        /**
         * @brief Construct a new DArray object that is a deep copy of an existing one
         * 
         * @param other - the object I'm copying from
         */
        DArray(const DArray& other);

        /**
         * @brief Make myself a deep copy of another existing object
         * 
         * @param other - the objet I'm copying from
         */
        void operator = (const DArray& other);
        
    private:
        // data is just a pointer, not a whole array - the array in allocated on the heap
        T* data;
        // cap (cap) now a variable, not static const
        int cap;
        int used;
        void resize();
};


// Main program. Usually this would be in its own .cc file
int main(){
    // instantiation for int
    DArray<int> nums;

    // instantiation for string
    DArray<string> names;
}


// Member function definitions. Usually this would be in a .cc file
/*
    Remember:
        1. Every function of a template class is a template function
        2. When you use the name of a template class, you must add < >
            a. You do not need to put < > when you are in the initial declaration of the class
            b. You do not need to put < > when the name is being used as the name of a function (constructor/deconstructor)
            c. When you are declaring or defining functions (class.h or class.cc), you put <T>
            d. When you are writing an application (main.cc), you put <real_type>
*/
template <class T>
DArray<T>::DArray(){
    cap = 5;
    used = 0;
    data = new T[cap];
}


template <class T>
void DArray<T>::resize(){
    T* tmp;
    tmp = new T[cap + 5];
    
    for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }

    // DO NOT DELETE TMP
    delete []data;
    data = tmp;
    cap += 5;
}

template <class T>
DArray<T>::~DArray(){
    delete []data;
}

template <class T>
DArray<T>::DArray(const DArray<T>& other){
    used = other.used;
    cap = other.cap;

    data = new T[cap];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

template <class T>
void DArray<T>::operator = (const DArray<T>& other){
    // check if I tried to assign myself to myself
    // if I don't, I will blow away my own data
    if(this == &other){
        return;
    }

    // deallocate the old data array
    // use deconstructor code
    
    // make a copy of other just like in the copy constructor
}