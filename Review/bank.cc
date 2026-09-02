#include "bank.h"
#include <iostream>
#include <string>

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

// Bankacct operator + (const Bankacct& b1, const Bankacct& b2){
//     Bankacct tmp;
//     tmp.ownerID = b1.ownerID + " " + b2.ownerID;
//     //tmp.set_ownerID(b1.get_ownerID() + " " + b2.get_ownerID());
//     tmp.balance = b1.balance + b2.balance;
//     tmp.interest_rate = (b1.interest_rate + b2.interest_rate) / 2.0;

//     return tmp;
// }

Bankacct Bankacct::operator + (const Bankacct& b2) const{
    Bankacct tmp;
    tmp.ownerID = ownerID + " " + b2.ownerID;
    //tmp.set_ownerID(get_ownerID() + " " + b2.get_ownerID());
    tmp.balance = balance + b2.balance;
    tmp.interest_rate = (interest_rate + b2.interest_rate) / 2.0;

    return tmp;
}

void Bankacct::input(istream& ins){
    if(&ins == &cin){
        // give prompts
    }
    //ins >> ownerID;
    // >> stops at but leaves the newline character
    // getline() stops at and removes the newline character
    ins >> ws;
    getline(ins, ownerID);
    ins >> balance;
    ins >> interest_rate;
}

void output(std::ostream& outs)const {

}

std::istream& operator >> (std::istream& ins, Bankacct& b1){
    b1.input(ins);
    return ins;
}

std::ostream& operator << (std::ostream& outs, const Bankacct& b1){
    b1.output(outs);
    return outs;
}