#include "bank.h"

int main(){
    Bankacct b;
    Bankacct b2("Bob", 1234.56);
    Bankacct b3("", 1234.56);
    Bankacct b4("", 0, 0.05);

    b.set_ownerID("ME");

    b3 = b + b2;
    b2 = b2 + 35.0;
}