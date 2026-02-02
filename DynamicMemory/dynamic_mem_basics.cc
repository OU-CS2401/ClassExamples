/**
 * @file dynamic_mem_basics.cc
 * @author Patricia Lindner
 * @brief This file shows some basics on allocating and deallocating dynamic memory, both individual variables and arrays. The addresses listed in the comments came from the picture that I was drawing during class, they will be quite different if you run this program.
 *        NOTE: The places that say "*should* crash" may not if you run this program, however they are unsafe code and you should be able to analyze and determine places where you are accessing memory that you don't own for the purpose of a quiz...
 * @date 2026-02-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
using namespace std;

int main(){
    // Dynamic memory
    int* ptr;

    // use new to allocate memory on the heap - address of the block is returned and saved to ptr. The type after "new" must match the type of the pointer.
    ptr = new int;
    cout << "ptr is storing: " << ptr << "\n";

    new int; // not syntax error, but memory leak - why?
    ptr = new int; // memory leak - why?
    cout << "ptr is storing: " << ptr << "\n";

    delete ptr; // deallocate the memory ptr is pointing to
    cout << "value where ptr is pointing: " << *ptr << "\n"; // *should* crash - why?

    // Dynamic array
    double* data;
    cout << "data: " << data << "\n"; // garbage, but doesn't crash
    cout << "Address of data: " << &data << "\n"; // 0xEF - doesn't crash
    cout << "value where data is pointing: " << *data << "\n"; // *should* crash - why?

    // allocate an array
    data = new double[5];
    // set all the values in the array using pointer math to index
    for(int i = 0; i < 5; i++){
        *(data + i) = i;
        // the line below is equivalent because the [] operator is overloaded to do the pointer math for you
        // data[i] = i;
    }

    cout << "Array values: ";
    for(int i = 0; i < 5; i++){
        cout << data[i] << " ";
    }
    cout << endl;

    // deallocate the whole block that starts where data is pointing
    delete [] data;
}