#pragma once
#include "ATarget.hpp"

class Dummy: public ATarget {
public:
	Dummy():  ATarget( "Target Practice Dummy" ) {}
	// Dummy( Dummy const& dummy ): ATarget( dummy ) {}
	// Dummy&		operator=( Dummy const& ) { return *this; }
	virtual Dummy*	clone() const { return new Dummy( *this ); }
};
