#pragma once
#include "ASpell.hpp"

class ATarget;

class Fwoosh: public ASpell {
public:
	Fwoosh():  ASpell( "Fwoosh", "fwooshed" ) {}
	// Fwoosh( Fwoosh const& fwoosh ): ASpell( fwoosh ) {}
	// Fwoosh&		operator=( Fwoosh const& ) { return *this; }
	virtual Fwoosh*	clone() const { return new Fwoosh( *this ); }
};
