#pragma once
#include "ASpell.hpp"

class ATarget;

class Fireball: public ASpell {
public:
	Fireball():  ASpell( "Fireball", "burnt to a crisp" ) {}
	// Fireball( Fireball const& fwoosh ): ASpell( fwoosh ) {}
	// Fireball&		operator=( Fireball const& ) { return *this; }
	virtual Fireball*	clone() const { return new Fireball( *this ); }
};
