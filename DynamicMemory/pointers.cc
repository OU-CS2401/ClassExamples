/**
 * @file pointers.cc
 * @author Patricia Lindner
 * @brief 
 * @version 0.1
 * @date 2024-09-16
 * 
 * This file demonstrates how to use pointers and do basic dynamic memory allocation and deallocation
 * 
 */

#include <iostream>

using namespace std;

int main(){
    /* Automatic Memory */
    int x;
    x = 7;
    cout << x;

    // output the address of x (where data is being stored when I set x)
    cout << &x;


    /* Pointers */
    int* p;
    //int *x; // This is equivalent to the line above
    cout << p;      // What does this output?
    cout << &p;     // What does this output?

    double *d;
    
    /* Dynamic Memory */
    // allocate some memory
    new int;        // What does this do?

    p = new int;    // What does this do? How is this different from above?
    *p = 15;        // What does this do?
    cout << *p;     // What does this output?

    delete p;       // What does this do? 

    /* Ways to make memory leaks */
    // 1. allocate memory without saving the address
    while(true){
        new int;
    }

    // 2. allocate new memory without deallocating the old
    p = new int;
    p = new int;

}