#include "LL.h"
#include <iostream>

using namespace std;


int main(){
    LL_Container L1, L2;

    cout << &L1 << endl << &L2 << endl;
    // This line is an error because << is not defined for the LL_Container type
    cout << "L1 = L2: " << L1 = L2 << endl;
}