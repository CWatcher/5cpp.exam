#pragma once
#include "ASpell.hpp"

class ATarget;

class Polymorph: public ASpell {
public:
	Polymorph():  ASpell( "Polymorph", "turned into a critter" ) {}
	// Polymorph( Polymorph const& fwoosh ): ASpell( fwoosh ) {}
	// Polymorph&		operator=( Polymorph const& ) { return *this; }
	virtual Polymorph*	clone() const { return new Polymorph( *this ); }
};
