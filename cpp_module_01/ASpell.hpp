#pragma once
#include <string>
#include <iostream>

using namespace std;

class ASpell {
protected:
	string	_name;
	string	_effects;
public:
	// ASpell() {}
	// ASpell( ASpell const& ) {}
	// ASpell&		operator=( ASpell const& ) { return *this; }
	ASpell( string name, string effects ) : _name( name ), _effects( effects ) {}
	virtual ~ASpell() {}
	string const&	getName() const { return _name; }
	string const&	getEffects() const { return _effects; }
};
