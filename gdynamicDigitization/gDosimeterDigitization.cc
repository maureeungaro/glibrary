#include "ginternalDigitization.h"



bool GDosimeterDigitization::defineReadoutSpecs() {
	float     timeWindow = 10;                  // electronic readout time-window of the detector
	float     gridStartTime = 0;                // defines the windows grid
	HitBitSet hitBitSet = HitBitSet("000000");  // defines what information to be stored in the hit
	bool      verbosity = true;

	readoutSpecs = new GReadoutSpecs(timeWindow, gridStartTime, hitBitSet, verbosity);

	return true;
}


// digitized the hit
GDigitizedData* GDosimeterDigitization::digitizeHit(GHit *ghit, int hitn) {

	// ghit->getGID() must have a single entry
	GIdentifier identity = ghit->getGID().front();

	GDigitizedData* gdata = new GDigitizedData(ghit);

	gdata->includeVariable(identity.getName(), identity.getValue()             );
	gdata->includeVariable("hitn",             hitn                            );
	gdata->includeVariable("eTot",             ghit->getTotalEnergyDeposited() );
	gdata->includeVariable("time",             ghit->getAverageTime()          );

	return gdata;
}

