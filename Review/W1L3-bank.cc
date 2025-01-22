/*************************************************************************\
	This is the implementation of the Bankacct class.
\*************************************************************************/
using namespace std;

Bankacct::Bankacct(double a, const string& n){
	name = n;
	amt = a;
}



// friend version - no scope resolution because it is a friend not a member
Bankacct operator + (const Bankacct& b1, const Bankacct& b2)
{
	Bankacct tmp;
	tmp.name = b1.name + " " + b2.name;
	tmp.amt = b1.amt + b2.amt;
	return tmp;
}


// For members, need to add the scope resolution operator before the function name
Bankacct Bankacct::operator + (const Bankacct& b2) const{
	Bankacct tmp;
	tmp.amt = amt + b2.amt;
	tmp.name = name + "  " + b2.name;
	return tmp;
}



void Bankacct::input(istream& ins){
	ins >> amt;
	/*
		Clear all whitespace (spaces, tabs, newlines) because the >> operator leaves the newline in the stream
		which confuses getline() into reading nothing.
	*/
	ins >> ws;
	/*
		//If you only wanted to clear newlines (not all whitespace), you can do this instead:
		while(ins.peek() == '\n') ins.ignore();
	*/
	getline(ins, name);
}

istream& operator >> (istream& ins, Bankacct& b2){
	b2.input(ins);
	/*  Why return the stream?
		can then chain cin commands instead of having to call all individually
		cin >> yours >> mine;

		the return of cin >> yours is now a stream that will be the lefthand side for >> mine
	*/
	return ins;
}
