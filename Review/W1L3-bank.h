/**
 * @file W1L3-bank.h
 * @author Patricia Lindner
 * @brief This file declares a class called Bankacct that is used to keep track of the name and amount for a single bank account.
 * 		  NOTE: This will not compile because you cannot have a friend AND member version of the same operator 
 * 				with the same arguments because it is ambiguous.
 */
#include <string>
#include <iostream>

// macro guards to keep the compiler from trying to read this twice
#ifndef BANK_H
#define BANK_H

class Bankacct{
	public:
		/**
		 * @brief Construct a new Bankacct object
		 * 
		 * @param a - the amount in the account, 0 by default
		 * @param n - the name on the account, empty string by default
		 */
		Bankacct(double a = 0, const std::string& n = "");


		// Acessors
		/**
		 * @brief Return the name on the account
		 * 
		 * @return std::string - the name of this account
		 */
		std::string get_name()const{return name;}


		//I/O
		/**
		 * @brief Read in the data for a Bankacct object from a given stream
		 * 
		 * @param ins - the stream to read the data from
		 */
		void input(std::istream& ins);

		/**
		 * @brief The friend version of a + operator. Returns a new object with combined 
		 * 		  amounts and names of the two arguments.
		 * 
		 * @param b1 - the Bankacct to the left of the operator
		 * @param b2 - the Bankacct to the right of the operator
		 * @return Bankacct - a new combined Bankacct
		 */
		friend Bankacct operator + (const Bankacct& b1, const Bankacct& b2);

		/**
		 * @brief The member version of a + operator. Returns a new object with combined
		 * 		  amounts and names from the implicit left-hand object and the argument passed in.
		 * 		  Member operators only need one parameter because the left hand operand is the object I'm a member of
		 * 		  const after the ) will protect the object that this operator is a member of ("b1")
		 * 
		 * @param b2 - the Bankacct to the right of the operator
		 * @return Bankacct - a new combined Bankacct
		 */
		Bankacct operator + (const Bankacct& b2)const;

	private:
		std::string name;
		double amt;
};

std::istream& operator >> (std::istream& ins, Bankacct& b1);

#endif //ending the macro guard "ifndef" from line 4