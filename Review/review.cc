/**
 * @file review.cc
 * @author Patricia Lindner
 * @brief This file contains examples like the review code we talked about in class
 * 
 * @copyright Copyright (c) 2025
 * 
 */

// Includes for necessary libraries
#include <iostream>
#include <iomanip>

// Open any namespaces that you plan to use
using namespace std;

// Begin the main program
int main(){
    // Data Types

    // integer - whole numbers positive and negative
    int num;
    // unsigned - whole numbers only positive
    unsigned another_num;
    // float/double - numbers with decimal portion
    float small_decimal = 1.23;
    double larger_decimal = 3.14159;
    // char - a single character (digit, letter, symbol)
    char c = '*';
    // bool - true/false, yes/no (any non-zero number registers as true, 0 is false)
    bool decision = true;

    /*
        There are other data types like string, but you need to include a library to use them
    */

    // Arrays - a collection of same-type data
    // create a contiguous block of memory that can hold 10 integers
    int numbers[10];
    // set num to the first value in the array - index numbers are 0 -> size - 1
    num = numbers[0];

    // Input and Output - you must include the iostream library

    // use cout to write text to the terminal screen
    cout << "Hello World!\n";
    cout << larger_decimal << endl;

    // You can format your output by including the iomanip library
    // setw(num) - create an output field num spaces wide - right justify by default
    cout << setw(50) << "Hello World!\n";
    // setfill(char) - fill empty spaces in the output field with char
    cout << setw(50) << setfill('*') << "Hello World!\n";
    // setprecision(num) - round decimal numbers to num significant digits
    cout << setprecision(3) << larger_decimal << endl;

    // use cin to read input typed on the keyboard into a variable
    // make sure to add a prompt when interacting with a live user
    cout << "Enter a whole number: ";
    cin >> num;
    cout << "You entered " << num << endl;
}