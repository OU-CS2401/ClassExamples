#include "bank.h"
#include <iostream>

using namespace std;

int main(){
    Bankacct b1("RufusBobcat", 1804.50, 0.05), b2, b3;

    cin >> b2;
    b3 = b1 + b2;
    cout << "\nNew account created!\n";
    cout << b3;
}