#include "bank.h"

using namespace std;

// Bankacct::Bankacct(){
//     ownerID = "";
//     balance = 0;
//     interest_rate = 0;
// }

Bankacct::Bankacct(std::string s, double b, double i){
    ownerID = s;
    balance = b;
    interest_rate = i;
}