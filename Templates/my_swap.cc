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
}