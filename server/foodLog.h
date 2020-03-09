

void initFoodLog();


void freeFoodLog();


// to trigger hourly output
void stepFoodLog(bool inForceOutput = false);


void logEating( int inFoodID, int inFoodValue, double inEaterAge,
                int inMapX, int inMapY );
