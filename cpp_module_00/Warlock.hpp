#include <string>

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
	~Warlock() {
// When he dies, he says:

// <NAME>: My job here is done!
	};

	string const & getName() const { return _name; }
	string const & getTitle() const { return _title; }

// Create the following setter:
// * setTitle, returns void and takes a reference to constant string

	string& setTitle( string const& title ) { _title = title; return _title; }

// Your Warlock will also have, in addition to whatever's required by Coplien's
// form, a constructor that takes, in this order, its name and title.
	Warlock( string const& name, string const& title )
	: _name( name ), _title ( title ) {

// Upon creation, the Warlock says :

// <NAME>: This looks like another boring day.

// Of course, whenever we use placeholders like <NAME>, <TITLE>, etc...
// in outputs, you will replace them by the appropriate value. Without the < and >.

	};


// Our Warlock must also be able to introduce himself, while boasting with all its
// might.

// So you will write the following function:
	void introduce() const {

// It must display:

// <NAME>: I am <NAME>, <TITLE> !
	};
};
