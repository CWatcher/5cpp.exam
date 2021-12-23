#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"

using namespace std;

class Warlock {
	string	_name;
	string	_title;
	map< string, ASpell* > _spells;

	Warlock() {}
	Warlock( Warlock const& ) {}
	Warlock&		operator=( Warlock const& ) { return *this; }
public:
	Warlock( string name, string title )
	: _name( name ), _title( title )
	{	cout << _name << ": This looks like another boring day." << endl;
	}
	~Warlock()
	{
		map< string, ASpell* >::iterator	p = _spells.begin();
		for ( ; p != _spells.end(); p++ )
			delete p->second;
		cout << _name << ": My job here is done!\n";
	}
	string const&	getName() const { return _name; }
	string const&	getTitle() const { return _title; }
	void			setTitle( const string& title ) { _title = title; }

	void introduce() const
	{	cout << _name << ": I am " << _name << ", " << _title << "!\n";
	}
	void			learnSpell( ASpell* spell )
	{
		delete _spells[ spell->getName() ];
		_spells[ spell->getName() ] = spell->clone();
	}
	void			forgetSpell( string spellName )
	{
		delete _spells[ spellName ];
		_spells.erase( spellName );
	}
	void			launchSpell( string spellName, ATarget& target )
	{
		if ( _spells.find( spellName ) != _spells.end() )
			_spells[ spellName ]->launch( target );
	}
};
