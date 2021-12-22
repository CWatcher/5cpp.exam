#pragma once
#include <string>
#include "ATarget.hpp"

using namespace std;

class Dummy:  public ATarget {
public:
	Dummy()
	: ATarget( "Target Practice Dummy" )
	{}
	virtual Dummy*	clone() const
	{	return new Dummy( *this );
	}
};
