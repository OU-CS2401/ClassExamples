/**
 * @file review.cc
 * @author Patricia Lindner
 * @brief This file contains examples like the review code we talked about in class
 * 
 * @copyright Copyright (c) 2026
 * 
 */

// Includes for necessary libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// Open any namespaces that you plan to use
using namespace std;

// declare a structure, can set default values or not
struct Person{
    string Fname = "";
    string Lname;
    int seat;
};

// prototype for a function
// NOTE: these two will have different side effects. #1 is pass by value (no change to original argument), #2 is pass by reference (argument can be changed in the function)
bool some_func(int x);
// bool some_func(int& x);

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
    numbers[9] = 15;



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



    // Vectors - STL dynamic array class, must #include <vector> to use
    // declare a vector of integers with default size
    vector<int> nums;
    // declare a vector of strings with starting size of 10 (must also include string library for this to work)
    vector<string> names[10];

    // add items to a vector
    nums.push_back(5);
    nums.push_back(7);
    // remove last element added to a vector
    nums.pop_back();
    // output number of items you've added
    cout << "Nums has " << nums.size() << " elements" << endl;



    // Flow control constructs (branching and looping)

    // if - else if - else
    if(num < 10){
        cout << "Small number\n";
    }
    // compound condition using AND
    else if(num >= 10 && num < 100){
        cout << "Medium number\n";
    }
    else{
        cout << "Large number\n";
    }

    // conditional variable should be int, char, or bool
    switch(num){
        case 1:
        case 2:
            cout << "Cases 1 and 2 do the same thing!\n";
            break;
        case 3:
            cout << "Case 3 does something else.\n";
            break;
        // the default is option, but often a good idea
        default:
            cout << "No other cases hit, so do this.\n";
            break;
    }


    // while loop
    cout << "\n\nwhile loop:\n";
    // initialize the condition variable
    num = 0;
    // check condition in the ( ) - loop may never execute
    while(num < 5){
        cout << num << endl;
        // update the condition variable
        num++;
    }

    // do-while loop
    cout << "\n\ndo-while loop:\n";
    // initialize the condition variable
    num = 0;
    // code will always execute at least once
    do{
        cout << num << endl;
        // update the condition variable
        num++;
    } while (num < 5); // condition checked after loop body executes

    // for loop - initialization, condition, and update all in one line
    cout << "\n\nfor loop:\n";
    for(num = 0; num < 5; num++){
        cout << num << endl;
    }

    // using a struct
    Person a;
    a.Fname = "Rufus";
    a.Lname = "Bobcat";
    a.seat = 1;

    Person b {"Patricia", "Lindner", 2};

    Person students[5];
    students[0] = a;
    students[1] = b;
    students[2].Fname = " "; // Add your first name
    students[2].Lname = " "; // Add your last name
    students[2].seat = 3;

    cout << "\n\nStudent data:\n";
    for(int i = 0; i < 5; i++){
        cout << students[i].Fname << " " << students[i].Lname << " sits in seat " << students[i].seat << endl;
    }

    // use a function
    cout << "Value of num before function: " << num << endl;
    if(some_func(num)) cout << "num is less than 100\n";
    cout << "Value of num after function : " << num << endl;
}

// define the function here
bool some_func(int x){
    x++;
    return x < 100;
}

/*
bool some_func(int& x){
    x++;
    return x < 100;
}
*/