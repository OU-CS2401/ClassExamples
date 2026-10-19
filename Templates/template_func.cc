#include <iostream>
#include <string>
using namespace std;

// void my_swap(int& a, int& b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// void my_swap(char& a, char& b){
//     char tmp = a;
//     a = b;
//     b = tmp;
// }

// Template swap function
// T - template parameter
template <class T, class S>
void my_swap(T& a, S& b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int num1, num2;
    char c1 = 'a', c2 = 'b';
    string s = "hello";
    cin >> num1;
    cin >> num2;

    // instantiation for T = int
    my_swap(num1, num2);
    // instantiation for T = char
    my_swap(c1, c2);

    my_swap(num1, c1);
}