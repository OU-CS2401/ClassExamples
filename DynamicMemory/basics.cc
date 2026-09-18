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
    cout << "------------------------------------------------\n";
    cout << "ptr2: " << ptr2 << endl;
    cout << "address of ptr2: " << &ptr2 << endl;
    cout << "data where ptr2 is pointing: " << *ptr2 << endl;
    cout << "data where pointer stored in ptr2 is pointing: " << **ptr2 << endl;
    cout << "------------------------------------------------\n";

    string s = "hello";
    cout << "s: " << s << endl;
    cout << "address of s: " << &s << endl;
    // pointer to a string
    string* s_ptr;
    s_ptr = &s;
    cout << "ptr: " << s_ptr << endl;             
    cout << "address of ptr: " << &s_ptr << endl; 
    cout << "data where ptr is pointing: " << *s_ptr << endl;


    // Now let's use dynamic memory
    // Allocate a integer dynamically; save the address of the memory to a pointer
    int* dynamic_int = new int;
    // set the value in the dynamically allocated region (at the address the pointer is storing)
    *dynamic_int = 2;
    // deallocate the dynamically allocated memory - does not do anything to the pointer itself
    delete dynamic_int;

    // Memory leaks
    // Method 1
    new int;
    new int;
    new int;

    // Method 2
    dynamic_int = new int;
    dynamic_int = new int;


    // Pointers can be any type
    double* d_ptr = new double;
    Bankacct* b_ptr = new Bankacct;
    // Can access elements of structures/classes by dereferencing the pointer and then using the .
    cout << (*b_ptr).output();

    // Arrays - the name of an array stores the address of the first element
    int array[10];
    cout << array << endl;
    dynamic_int = array;
    // would move this pointer to the second element of the array
    dynamic_int++;


    // Dereferencing pointers that are not pointed to a valid address *should* crash
    int* i;
    cout << *i << endl;
    // Calling delete on the same pointer twice usually results in a crash (sometimes with a "double free" error)
    delete i;
    delete i;


    // arrays
    i = new int[5];
    i[0] = 1;
    delete [] i;

}