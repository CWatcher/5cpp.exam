#include "ASpell.hpp"
#include "ATarget.hpp"

void	ASpell::launch( ATarget const& target )
{	target.getHitBySpell( *this );
}
