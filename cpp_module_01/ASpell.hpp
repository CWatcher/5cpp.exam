#pragma once
#include <string>
#include <iostream>

using namespace std;

class ATarget;

class ASpell {
	ASpell() {}
protected:
	string	_name;
	string	_effects;
public:
	ASpell( ASpell const& src )
	: _name( src._name ), _effects ( src._effects )
	{}
	ASpell( string const& name, string const& effects )
	: _name( name ), _effects ( effects )
	{}
	virtual	~ASpell()
	{}
	ASpell&			operator=( ASpell const& src )
	{
		_name = src._name;
		_effects = src._effects;
		return *this;
	}
	string const &	getName() const { return _name; }
	string const &	getEffects() const { return _effects; }
	virtual ASpell*	clone() const = 0;
	void			launch( ATarget const& target );
};
