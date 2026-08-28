#include <string>
#include <iostream>
using namespace std;

/**
 * @brief 
 * 
 * @param a 
 * @param size 
 * @return int 
 */
int sum_all(int a[], int size = 10);

void sum_all_ref(int a[], int size, int& total);

int main(){
    // Data types
    int i; // integers
    unsigned u; // 0+ whole numbers
    bool b; // true/false
    char c; // character
    float f; // decimal numbers
    double d; // big decimal numbers

    c = 98;

    std::string s; // collection of character


    // Input / Output
    std::cout << "Hello ";
    cout << "World!\n";

    cout << "c = " << c << endl;

    i = 510;
    cout << "Enter an integer: ";
    cin >> i;


    // Arrays
    int array[10];
    cout << "Address of array: " << array << endl;
    array[0] = 12;
    cout << array[0];

    // Branching
    // if - else if - else 
    if(i == 234 && c == 'A'){
        // do this code
        if(){

        }
    }
    else if(c == 'A'){

    }
    else{
        // if condition is false; do this

    }

    switch(c){
        case 'A':
            // something
            cout << "A" << endl;
            break;
        case 'B':
            // something else
            cout << "B" << endl;
            break;
        default:
            cout << "Not A or B\n";
    }


    // Loops
    // while

    i = 0;
    while(i < 510){
        // do something
        cout << i << endl;
        i++;
        if(i == 10){
            break;
        }
    }

    // for
    for(i = 0; i < 510; i++){
        cout << i << endl;
    }

    for(char c2 = 'A'; c2 <= 'Z'; c2++){
        cout << c2 << " ";
    }

    // functions
    i = sum_all(array, 10);

    int total;
    sum_all_ref(array, 10, total);

}



int sum_all(int a[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total = total + a[i];
    }

    return total;
}

void sum_all_ref(int a[], int size, int& total){
    total = 0;
    for(int i = 0; i < size; i++){
        total = total + a[i];
    }
}