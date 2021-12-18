#pragma once
#include <string>
#include <iostream>

using namespace std;

class ASpell {
private:
	string	_name;
	string	_title;

	ASpell() {};
	ASpell( ASpell const& ) {};
	ASpell& operator=( ASpell const& ) { return *this; };
public:
	ASpell( string const& name, string const& title )
	: _name( name ), _title ( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	}
	~ASpell()
	{	cout<< _name << ": My job here is done!" << endl;
	}
	string const & getName() const { return _name; }
	string const & getTitle() const { return _title; }
	string& setTitle( string const& title ) { _title = title; return _title; }
	void introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
	}
};
