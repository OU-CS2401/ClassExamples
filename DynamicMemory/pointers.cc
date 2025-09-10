#include <iostream>
using namespace std;

int main(){

    // Regular int
    int x = 5;

    // Pointer to an int
    int* i;

    // Store the address of x in the pointer
    i = &x;

    // output the value the pointer is storing
    cout << "i is storing: " << i << endl;
    // output the address of the pointer
    cout << "Address of i: " << &i << endl;
    // output the value at the location i is pointing to
    cout << "i is pointing to the value: " << *i << endl;

}