#include "logicfunctions.h"

// Compute xor
void exclusive(bool x, bool y, bool& ans) 
{
	if ((x == true and y == true) or (x == false and y == false))
	{
		ans = false;
	}
	else
		ans = true;
}

// Compute implication
void implies(bool x, bool y, bool& ans) {
	if ((x == true and y == true) or (x == false and y == false) or (x == false and y == true))
	{
		ans = true;
	}
	else
		ans = false;
}

// Compute equivalence
void equivalence(bool x, bool y, bool& ans) 
{
	if ((x == true and y == true) or (x == false and y == false))
	{
		ans = true;
	}
	else
		ans =false;
}