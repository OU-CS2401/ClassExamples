/*
    Types of Memory:
        1. Automatic
        2. Static
        3. Dynamic
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    // Pointers - variable that stores an address
    // All automatic still
    int x = 5;
    cout << "x: " << x << endl;
    cout << "address of x: " << &x << endl;
    // pointer to an integer
    int* ptr;
    int** ptr2 = &ptr;
    ptr = &x;
    cout << "ptr: " << ptr << endl;             
    cout << "address of ptr: " << &ptr << endl; 
    cout << "data where ptr is pointing: " << *ptr << endl;
    cout << "data where pointer stored in ptr2 is pointing: " << **ptr2 << endl << endl;

    string s = "hello";
    cout << "s: " << s << endl;
    cout << "address of s: " << &s << endl;
    // pointer to a string
    string* s_ptr;
    s_ptr = &s;
    cout << "ptr: " << s_ptr << endl;             
    cout << "address of ptr: " << &s_ptr << endl; 
    cout << "data where ptr is pointing: " << *s_ptr << endl << endl;


    // Now let's use dynamic memory
    // Allocate a integer dynamically; save the address of the memory to a pointer
    int* dynamic_int = new int;
    // set the value in the dynamically allocated region (at the address the pointer is storing)
    *dynamic_int = 2;
    // deallocate the dynamically allocated memory - does not do anything to the pointer itself
    delete dynamic_int;
}