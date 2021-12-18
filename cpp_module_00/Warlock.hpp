#include <string>
#include <iostream>

using namespace std;

// Make a Warlock class. It has to be in Coplien's form.

class Warlock
{
// Your Warlock
// will not be able to be copied, instantiated by copy, or instantiated without a
// name and a title.
private:
	Warlock() {};
	Warlock( Warlock const& ) {}; //{ *this = src; };
	Warlock& operator=( Warlock const& ) { return *this; };
	string	_name;
	string	_title;
public:
	~Warlock()
	{	cout<< _name << ": My job here is done!" << endl;
	};

	string const & getName() const { return _name; }
	string const & getTitle() const { return _title; }

// Create the following setter:
// * setTitle, returns void and takes a reference to constant string

	string& setTitle( string const& title ) { _title = title; return _title; }

	Warlock( string const& name, string const& title )
	: _name( name ), _title ( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	};

	void introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
	};
};
