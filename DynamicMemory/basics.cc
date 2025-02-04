#include <iostream>

using namespace std;

/* 

    Review:
        * static memory
            * allocated by the computer before the program begins
            * stays around for the whole lifetime of the program - deallocated when the program exits
        * automatic memory
            * allocated by the computer only when needed
            * released by the computer when it goes out of scope

    Dynamic Memory:
        * explicitly allocated and deallocated by the programmer
        * gives the programmer a lot more control over how much memory is being used
        * nameless but has an address

    Pointer:
        * a variable capable of holding an address 
        * the type a pointer is declared as determines how the data the pointer is pointing to will be interpreted

*/

int main(){
    // Declare an automatic variable of type int
    int x = 16;
    // shows the value of x (16)
    cout << "value of x: " << x << endl;

    // shows the address of x (where the 16 is being stored in memory)
    // addresses are output in hex
    cout << "address of x: " << &x << endl << endl; 


    // Declare a POINTER of type int
    int* ptr;
    // output the value of ptr (the address it is storing)
    cout << "value of ptr: " << ptr << endl;

    // output the address of ptr (the memory location ptr is using to store the address you just output)
    cout << "address of ptr: " << &ptr << endl;

    // the value in the memory region that ptr is pointing to (what is being stored at the location designated by the first address output)
    cout << "value ptr is pointing to: " << *ptr << endl << endl;

    /*
        The code above this point has not yet done any dynamic allocation.

        Dynamic memory management:
            * use new to allocate enough memory to store a value of a certain data type
                * new returns the address of the memory allocated
                * memory is allocated out of the heap
                    * the address is clearly from a different region
    */

    // allocate an integer, no way (name) to access it
    // this line causes a memory leak because you would never be able to deallocate it (until the program ends or crashes)
    new int; 

    // so... need to use a pointer to capture the address that new returns
    ptr = new int;

    // you can do anything with *ptr that you can do with a regular int
    // the following lines set the value in the location ptr is storing to 5 and then increments that by 1
    (*ptr) = 5;
    (*ptr)++;

    // what if I do this?
    ptr = new int;
    // FIRST MEMORY ALLOCATED IS LOST - still allocated, will not go away until program exits, 
    // but you won't be able to get back to it because you don't have the address anymore

    /* 
    
        Responsible programmers will give up the memory when done with it
            * A memory leak is when you do not deallocate memory when you are done with it
            * The system can run out of memory if a big program does not release dynamic memory
            * You deallocate dynamic memory that you allocated using the "delete" keyword

    */

    // does not remove ptr as a variable,
    // returns the memory to the OS
    // I can still allocate new memory to ptr
    delete ptr;

    // you can use dynamic memory with any data type
    double* d;
    d = new double;
    *d = 3.14159;

    string* s;
    s = new string;
    *s = "Hello World";

    // Assuming you have the Bankacct class we did an example with, this works too
    Bankacct* b;
    b = new Bankacct;
    // need to use () so compiler knows I want the input function that goes with the object
    // a is pointing to not the pointer (address) itself
    (*b).input(cin);

    delete d;
    delete s;
    delete b;


/* 

    Array example
        * Remember the name of an array stores the address of the first element??
            * An automatic array's name IS a pointer
        * You could use the following code to walk through the elements of an array
*/

    int array[10];
    int used = 10;
    int* ptr;
    ptr = array;

    while(ptr < array + used){
        cout << ptr << endl;
        // OS knows how big an int is so ++ptr will add sizeof(int) to ptr
        ++ptr;
    }

    return 0;
}