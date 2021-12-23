#pragma once
#include <string>
#include <iostream>

using namespace std;

class Warlock {
	string	_name;
	string	_title;

	Warlock() {}
	Warlock( Warlock const& ) {}
	Warlock&		operator=( Warlock const& ) { return *this; }
public:
	Warlock( string name, string title )
	: _name( name ), _title( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	}
	~Warlock() { cout << _name << ": My job here is done!\n"; }
	string const&	getName() const { return _name; }
	string const&	getTitle() const { return _title; }
	void			setTitle( const string& title ) { _title = title; }

	void introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!\n";
	}
};
