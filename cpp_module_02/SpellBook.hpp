#pragma once
#include <string>
#include <map>
#include "ASpell.hpp"

using namespace std;

class SpellBook {
	map< string, ASpell* > _spells;
	SpellBook( SpellBook const& ) {}
	SpellBook&	operator=( SpellBook const& ) { return *this; }
public:
	SpellBook() {}
	~SpellBook()
	{
		map< string, ASpell* >::iterator	p = _spells.begin();
		for ( ; p != _spells.end(); p++ )
			delete p->second;
	}

	void		learnSpell( ASpell* spell )
	{
		delete _spells[ spell->getName() ];
		_spells[ spell->getName() ] = spell->clone();
	}
	void		forgetSpell( string spellName )
	{
		delete _spells[ spellName ];
		_spells.erase( spellName );
	}
	ASpell*		createSpell( string const& spellName )
	{
		if ( _spells.find( spellName ) == _spells.end() )
			return nullptr;
		return _spells[ spellName ];
	}
};
