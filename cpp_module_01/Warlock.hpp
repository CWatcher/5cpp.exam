#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

using namespace std;

class Warlock {
private:
	string					_name;
	string					_title;
	map< string, ASpell* >	spells;

	Warlock() {}
	Warlock( Warlock const& ) {}
	Warlock& operator=( Warlock const& ) { return *this; }
public:
	Warlock( string const& name, string const& title )
	: _name( name ), _title ( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	}
	~Warlock()
	{	cout<< _name << ": My job here is done!" << endl;
	}
	string const&	getName() const { return _name; }
	string const&	getTitle() const { return _title; }
	string& 		setTitle( string const& title )
	{	_title = title; return _title;
	}
	void			introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!" << endl;
	}
	void	learnSpell( ASpell* spell )
	{
		if (!spells[ spell->getName() ] )
			spells[ spell->getName() ] = spell->clone();
	}
	void	forgetSpell( string spellName )
	{
		if ( spells.find( spellName ) != spells.end() )
		{	delete spells[ spellName ];
			spells.erase( spellName );
		}
	}
	void	launchSpell( string spellName, ATarget& target )
	{
		if ( spells.find( spellName ) != spells.end() )
			spells[ spellName ]->launch( target );
	}
};
