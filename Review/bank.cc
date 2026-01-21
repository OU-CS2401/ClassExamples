#include "bank.h"
#include <iostream>

using namespace std;

// Bankacct::Bankacct(){
//     owner = "NA";
//     balance = 0;
//     interest_r = 0;
// }

Bankacct::Bankacct(string o, double b, double ir){
    owner = o;
    balance = b;
    interest_r = ir;
}

// friend version
// Bankacct operator + (const Bankacct& b1, const Bankacct& b2){
//     Bankacct tmp;
//     //b1.balance = 0;
//     tmp.owner = b1.owner + " " + b2.owner;
//     tmp.balance = b1.balance + b2.balance;
//     tmp.interest_r = (b1.interest_r + b2.interest_r) / 2.0;

//     return tmp;
// }

// member version
Bankacct Bankacct::operator + (const Bankacct& b2) const{
    Bankacct tmp;
    //b1.balance = 0;
    tmp.owner = owner + " " + b2.owner;
    tmp.balance = balance + b2.balance;
    tmp.interest_r = (interest_r + b2.interest_r) / 2.0;

    return tmp;
}

void Bankacct::input(istream& ins){
    if(&ins == &cin){
        // reading data live from the keyboard
        cout << "Enter the owner id: ";
        ins >> owner;
        //getline(ins, owner);
        cout << "Enter the balance: ";
        ins >> balance;
        cout << "Enter the interest rate: ";
        ins >> interest_r;
    }
    else{
        // assume I'm reading in data from a file
        ins >> owner;
        //getline(ins, owner);
        ins >> balance;
        ins >> interest_r;
    }
}

void Bankacct::output(ostream& outs) const{
    if(&outs == &cout){
        // writing data live to the terminal
        outs << "Owner ID: " << owner << endl;
        outs << "Balance: " << balance << endl;
        outs << "Interest Rate: " << interest_r << endl;
    }
    else{
        // assuming I'm writing to a file
        outs << owner << endl << balance << endl << interest_r << endl;
    }
}

// non-member, not friend
ostream& operator << (ostream& outs, const Bankacct& b1){
    b1.output(outs);
    return outs;
}

istream& operator >> (istream& ins, Bankacct& b1){
    b1.input(ins);
    return ins;
}