#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

using namespace std;

class ATarget {
protected:
	string	_type;
public:
	// ATarget() {}
	// ATarget( ATarget const& ) {}
	// ATarget&			operator=( ATarget const& ) { return *this; }
	ATarget( string type ) : _type( type ) {}
	virtual ~ATarget() {}
	string const&		getName() const { return _type; }
	virtual ATarget*	clone() const = 0;
	void				getHitBySpell( ASpell const& spell ) const
	{	cout << _type << " has been " << spell.getEffects() << "!\n";
	}
};
