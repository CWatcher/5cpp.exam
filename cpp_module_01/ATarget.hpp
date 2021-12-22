#pragma once
#include <string>
#include <iostream>
#include "ASpell.hpp"

using namespace std;

class ATarget {
	string	_type;
public:
	ATarget() {}
	ATarget( ATarget const& src )
	: _type( src._type )
	{}
	ATarget( string const& type )
	: _type( type )
	{}
	virtual	~ATarget()
	{}
	ATarget&			operator=( ATarget const& src )
	{	_type = src._type;
		return *this;
	}
	string const &		getType() const { return _type; }
	virtual ATarget*	clone() const = 0;
	void				getHitBySpell( ASpell const& spell ) const
	{	cout << _type << " has been " << spell.getEffects() << "!\n";
	}
};
