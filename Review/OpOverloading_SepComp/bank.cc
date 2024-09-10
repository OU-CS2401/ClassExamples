#include "bank.h"
using namespace std;


// non-member, non-friend
Bankacct operator + (const Bankacct& b_left, int amt){
    Bankacct new_acct;

    new_acct.set_amount(b_left.get_amount() + amt);
    return new_acct;
}

// member
Bankacct Bankacct::operator + (const Bankacct& b_right) const{
    Bankacct new_acct;

    new_acct.amount = amount + b_right.amount;

    return new_acct;
}

// friend
// Bankacct operator + (const Bankacct& b_left, const Bankacct& b_right){
//     Bankacct new_acct;

//     new_acct.amount = b_left.amount + b_right.amount;

//     return new_acct;
// }

void Bankacct::input(std::istream& ins){
    cout << "Enter the amount in the account (decimal number): ";
    cin >> amount;
    cout << "Enter the name on the account: "; //"John Smith"
    cin >> ws;
    getline(cin, name);
}

istream& operator >> (istream& ins, Bankacct& b){
    b.input(ins);
    return ins;
}