#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

using namespace std;

class Warlock {
	string	_name;
	string	_title;
	SpellBook _spells;

	Warlock() {}
	Warlock( Warlock const& ) {}
	Warlock&		operator=( Warlock const& ) { return *this; }
public:
	Warlock( string name, string title )
	: _name( name ), _title( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	}
	~Warlock(){	cout << _name << ": My job here is done!\n"; }
	string const&	getName() const { return _name; }
	string const&	getTitle() const { return _title; }
	void			setTitle( const string& title ) { _title = title; }

	void introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!\n";
	}
	void			learnSpell( ASpell* spell )
	{	_spells.learnSpell( spell );
	}
	void			forgetSpell( string spellName )
	{	_spells.forgetSpell( spellName );
	}
	void			launchSpell( string spellName, ATarget& target )
	{
		if ( _spells.createSpell( spellName ) )
			_spells.createSpell( spellName )->launch( target );
	}
};
