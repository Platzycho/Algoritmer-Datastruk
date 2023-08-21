#include <iostream>
#include "Main.h"

void Main::print(){
	
	// Variables

	// WHAT AM I DOING

	recur(3);

	
}

int Main::recur(int innX)
{
	int sol;
	int s1;

	if(innX == 1 || innX == 0){
		sol = 1;
	} else {
		s1 = recur(innX-1);
	} sol = innX*s1;
	return sol;
}
