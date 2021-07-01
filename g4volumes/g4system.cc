// g4system
#include "g4system.h"
#include "g4systemConventions.h"

// glibrary
#include "gstring.h"
#include "goptionsConventions.h"

// c++
#include <iostream>
using namespace std;


// constructor, from command line or jcard
G4System::G4System(string name, string f, int verbosity) : factory(f) {
	g4volumes = new map<string, G4Volume*>;

	if(verbosity >= GVERBOSITY_SUMMARY) {
		cout << G4SYSTEMLOGHEADER << " Instantiating GSystem " << name  << endl;
	}

}

