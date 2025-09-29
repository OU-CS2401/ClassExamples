/**
 * @file dynamic_allocation.cc
 * @author Patricia Lindner
 * @brief This file demonstrates how to use pointers to keep track of dynamically allocated memory.
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    // Create an integer pointer
    int *i;

    // Dynamically allocate an integer
    i = new int;
    // see the address of the memory that was allocated
    cout << "i is storing " << i << " at address " << &i << endl;
    // set the value that i is pointing at to 
    *i = 2401;
    cout << *i << " is being stored at address " << i << endl;

    // deallocate the dynamically allocated memory
    delete i;

    /*
        // This segment of code would cause a memory leak
        // 10 integers are allocated, but only the address of the last one is saved
        for(int j = 0; j < 10; j++){
            i = new int;
        }
    */

    // allocate an array
    i = new int[10];
    // set the values in the array
    for(int j = 0; j < 10; j++){
        i[j] = j*2;
    }
    // output the data in the array
    for(int j = 0; j < 10; j++){
        cout << i[j] << " ";
    }
    cout << endl;
    // deallocate the array
    delete [] i;
}

