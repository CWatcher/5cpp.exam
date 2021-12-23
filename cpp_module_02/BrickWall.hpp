#pragma once
#include "ATarget.hpp"

class BrickWall: public ATarget {
public:
	BrickWall():  ATarget( "Inconspicuous Red-brick Wall" ) {}
	// BrickWall( BrickWall const& dummy ): ATarget( dummy ) {}
	// BrickWall&		operator=( BrickWall const& ) { return *this; }
	virtual BrickWall*	clone() const { return new BrickWall( *this ); }
};
