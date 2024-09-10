#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <string>

class Bankacct{
    public:
        // member
        Bankacct operator + (const Bankacct& b_right) const;

        // friend
        //friend Bankacct operator + (const Bankacct& b_left, const Bankacct& b_right);


        void set_amount(double num) {amount = n;}
        double get_amount() const {return amount;}

        // I/O
        void input(std::istream& ins);

    private:
        double amount;
        std::string name;

};

// non-member, non-friend
//Bankacct operator + (const Bankacct& b_left, const Bankacct& b_right);

std::istream& operator >> (std::istream& ins, Bankacct& b);

#endif