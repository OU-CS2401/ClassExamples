/**
 * @brief This file provides some examples to demonstrate template functions
 * 
 * Template functions are used when you want to use the same algorithm with multiple
 * different data types. A template function saves programmer time and source code size.
 * A template fuction DOES NOT reduce the size of the final executable code.
 * 
 */
#include <string>
#include <iostream>
using namespace std;

// /**
//  * @brief Swap two integers. This is NOT a template function.
//  * 
//  * @param x - first integer
//  * @param y - second integer
//  */
// void my_swap(int& x, int& y){
//     int tmp = x;
//     x = y;
//     y = tmp;
// }

// /**
//  * @brief Swap two strings. This is NOT a template function.
//  * 
//  * @param a - first string
//  * @param b - second string
//  */
// void my_swap(string& a, string& b){
//     string tmp = a;
//     a = b;
//     b = tmp;
// }

/**
 * @brief Swap any kind of data it is instantiated with. This IS a template function.
 *        If you had the one function below defined, it would take the place of the
 *        previous two (and work for any other data type that has an = operator defined).
 * 
 * @tparam T - Template parameter type
 * @param x - first object of type T
 * @param y - second object of type T
 */
template <class T>
void my_swap(T& x, T& y){
    T tmp = x;
    x = y;
    y = tmp;
}


// pass the size as "S" because it will work with
// int, double, size_t, unsigned, etc
template<class T, class S>
void ssort(T a[], S used){
    S smallsp;
    for(S i = 0; i < used - 1; i++){
        smallsp = i;
        for(S j = i + 1; j < used; j++){
            if(a[j] < a[smallsp]){
                smallsp = j;
            }
        }
        my_swap(a[i], a[smallsp]); // this is my template swap function
    }
}


int main(){
    int a = 1, b = 7;
    double d = 3.14159, e = 123.456;
    string h = "hello", w = "world";
    char c1 = '%', c2 = '!';

    cout << "BEFORE SWAPPING" << endl;
    cout << "a: " << a << "\tb: " << b << endl;
    cout << "d: " << d << "\te: " << e << endl;
    cout << "h: " << h << "\tw: " << w << endl;
    cout << "c1: " << c1 << "\tc2: " << c2 << endl;

    // instantiation of template function for integers
    my_swap(a, b);
    // instantiation of template function for doubles
    my_swap(d, e);
    // instantiation of template function for strings
    my_swap(h, w);
    // instantiation of template function for characters
    my_swap(c1, c2);

    cout << "\n\nAFTER SWAPPING" << endl;
    cout << "a: " << a << "\tb: " << b << endl;
    cout << "d: " << d << "\te: " << e << endl;
    cout << "h: " << h << "\tw: " << w << endl;
    cout << "c1: " << c1 << "\tc2: " << c2 << endl;

    // Selection sort
    int nums[10] = {3,2,6,4,1,7,8,5};
    size_t nums_used = 8;
    string names[5] = {"Victoria", "Dominic", "Kyle", "Allison"};
    unsigned names_used = 4;

    ssort(nums, nums_used);
    ssort(names, names_used);

    // output sorted numbers
    cout << "\nNums: ";
    for(size_t i = 0; i < nums_used; i++){
        cout << nums[i] << " ";
    }

    // output sorted names
    cout << "\n\nNames: ";
    for(unsigned i = 0; i < names_used; i++){
        cout << names[i] << " ";
    }
    cout << endl;
}