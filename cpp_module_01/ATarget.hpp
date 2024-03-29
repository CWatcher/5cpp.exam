#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

using namespace std;

class ATarget {
//protected:
	string	_type;
public:
	ATarget( string type ): _type( type ) {}
	virtual	~ATarget() {}
	virtual ATarget*	clone() const = 0;
	void				getHitBySpell( ASpell const& spell ) const
	{	cout << _type << " has been " << spell.getEffects() << "!\n";
	}
};
