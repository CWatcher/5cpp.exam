#pragma once
#include <string>
#include "ASpell.hpp"

using namespace std;

class Fwoosh:  public ASpell {
public:
	Fwoosh()
	: ASpell( "Fwoosh", "fwooshed" )
	{}
	virtual Fwoosh*	clone() const
	{	return new Fwoosh( *this );
	}
};
