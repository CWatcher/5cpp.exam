#pragma once
#include <string>
#include <map>
#include "ATarget.hpp"

using namespace std;

class TargetGenerator {
	map< string, ATarget* > _targets;
	TargetGenerator( TargetGenerator const& ) {}
	TargetGenerator&	operator=( TargetGenerator const& ) { return *this; }
public:
	TargetGenerator() {}
	~TargetGenerator()
	{
		map< string, ATarget* >::iterator	p = _targets.begin();
		for ( ; p != _targets.end(); p++ )
			delete p->second;
	}

	void	learnTargetType( ATarget* target )
	{
		delete _targets[ target->getName() ];
		_targets[ target->getName() ] = target->clone();
	}
	void	forgetTargetType( string targetName )
	{
		delete _targets[ targetName ];
		_targets.erase( targetName );
	}
	ATarget*	createTarget( string const& targetName )
	{
		if ( _targets.find( targetName ) == _targets.end() )
			return nullptr;
		return _targets[ targetName ];
	}
};
