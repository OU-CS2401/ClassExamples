// includes
#include "bank.h"

using namespace std;

void func(int a);
void func(int b);

int main(){
    Bankacct b1, b2;

    b1.input(cin);
    b1.set_amount(12.3);

    func(5);

    b1 = b1 + b2;
}

void func(int x){
    cout << x;
}

void func(int b){
    cout << "B: " << b;
}