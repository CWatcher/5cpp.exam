#include <string>
#include "Warlock.hpp"

int	main( int ac, char* av[] )
{
	( void ) ac;
	( void ) av;

// For example :

	// Warlock bob;                            //Does not compile
	Warlock bob("Bob", "the magnificent");  //Compiles
	Warlock jim("Jim", "the nauseating");   //Compiles
	// bob = jim;                              //Does not compile
	// Warlock jack(jim);                      //Does not compile
}
