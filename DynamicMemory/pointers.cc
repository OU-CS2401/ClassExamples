/**
 * @file pointers.cc
 * @author Patricia Lindner
 * @brief This file shows some basics on using pointers. The addresses listed in the comments came from the picture that I was drawing during class, they will be quite different if you run this program.
 *        NOTE: The code in this file does NO dynamic memory at all. This is all automatic.
 * @date 2026-02-02
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
using namespace std;

int main(){
    // Pointers
    int x = 5;

    cout << "x: " << x << "\n"; // 5
    cout << "address of x: " << &x << "\n\n"; // address where 5 is being stored - 0xAB

    // create a pointer to an integer
    int* ptr;
    // store the address of x to the pointer
    ptr = &x;
    cout << "ptr is storing: " << ptr << "\n"; // address where 5 is being store (same as line 5) - 0xAB
    cout << "address of ptr: " << &ptr << "\n"; // 0xCD
    cout << "value where ptr is pointing: " << *ptr << "\n"; // dereference ptr - 5
    
    // set 0xAB (the address ptr is storing) to hold int 7
    *ptr = 7;
    cout << "x is now: " << x << "\n";
}