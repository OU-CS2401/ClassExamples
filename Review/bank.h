#include <string>


//namespace CS2401Bank{

class Bankacct{
    public:
        // default
        //Bankacct();
        // with arguments
        Bankacct(std::string s = "", double b = 0, double i = 0);

        // getters (accessors)
        std::string get_ownerID() const {return ownerID;}

        // setters (mutators)
        void set_ownerID(std::string s) {ownerID = s;}

        // friend operators
        friend Bankacct operator + (const Bankacct& b1, const Bankacct& b2);

    private:
        std::string ownerID;
        double balance;
        double interest_rate;

};


//}