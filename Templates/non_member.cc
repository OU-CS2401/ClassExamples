/**
 * @file non_member.cc
 * @author Patricia Lindner
 * @brief This file demonstrates how to write and instantiate non-member ("normal") template functions
 * @date 2026-03-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <string>

template<typename T> void my_swap(T& a, T& b);
template<class T, class S> void ssort(T a[], S used);

int main(){
    int x = 5, y = 7;
    std::string a = "hello", b = "world";
    char c = 'C', s = 'S';

    double array[5];
    int used = 3;

    my_swap(x, y); // instantiation for int
    my_swap(a, b); // instantiation for string

    // the nex line doesn't compile - why?
    my_swap(x, c);

    ssort(array, used); // instantiation for array of double and int used 
}

template<typename T> void my_swap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

// this function will sometimes give an "unable to instantiate" error - why?
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
        my_swap(a[i], s[smallsp]); // this is my template swap function
    }
}