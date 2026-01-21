#include <string>

#ifndef BANK_H
#define BANK_H 

class Bankacct{
    public:
        /**
         * @brief Construct a new Bankacct object
         * 
         */
        //Bankacct();
        Bankacct(std::string o = "", double b = 0, double ir = 0);


        // accessor functions (getters)
        /**
         * @brief Get the owner object
         * 
         * @return std::string - current owner id
         */
        std::string get_owner() const {return owner;}

        // mutator functions (setters)
        /**
         * @brief Set the owner object
         * 
         * @param o - desired owner id
         */
        void set_owner(std::string o) {owner = o;}

        // I/O
        /**
         * @brief output the bank account data to the stream passed in
         * 
         * @param outs - the stream to write data to
         */
        void output(std::ostream& outs) const;

        /**
         * @brief input the bank account data from the stream passed in
         *        NOTE: function is not const because I need to set the attributes
         * 
         * @param ins - stream to read data from
         */
        void input(std::istream& ins);

        // operators
        /**
         * @brief Friend plus operator to combine two bank accounts
         * 
         * @param b1 - the bank account to the left of the operator
         * @param b2 - the bank account to the right of the operator
         * @return Bankacct - a new combined bank account
         */
        //friend Bankacct operator + (const Bankacct& b1, const Bankacct& b2);

        /**
         * @brief Member plus operator to combine two bank accounts
         * 
         * @param b2 - the bank account to the right hand side
         * @return Bankacct - a new combined bank account
         */
        Bankacct operator + (const Bankacct& b2) const;

    private:
        std::string owner;
        double balance;
        double interest_r;
};

/**
 * @brief Insertion operator (non-member, non-friend)
 * 
 * @param outs - stream to write data to
 * @param b1 - bank account to write data from
 * @return std::ostream& - the stream you just wrote data to
 */
std::ostream& operator << (std::ostream& outs, const Bankacct& b1);

/**
 * @brief Extraction operator (non-member, non-friend)
 * 
 * @param ins - stream to read from
 * @param b1 - object to set data for (NOTE: not const because I need to change it)
 * @return std::istream& - stream I just read data from
 */
std::istream& operator >> (std::istream& ins, Bankacct& b1);

#endif