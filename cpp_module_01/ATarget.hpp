#pragma once
#include <string>
#include <iostream>

using namespace std;

class ATarget {
	ATarget() {};
protected:
	string	_name;
	string	_effects;
public:
	ATarget( ATarget const& src )
	: _name( src._name ), _effects ( src._effects )
	{}
	ATarget( string const& name, string const& effects )
	: _name( name ), _effects ( effects )
	{}
	virtual	~ATarget()
	{}
	ATarget&			operator=( ATarget const& src )
	{
		_name = src._name;
		_effects = src._effects;
		return *this;
	};
	string const &	getName() const { return _name; }
	string const &	getEffects() const { return _effects; }
	virtual ATarget*	clone() const = 0;
};
