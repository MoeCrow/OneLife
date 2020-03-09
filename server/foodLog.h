

void initFoodLog();


void freeFoodLog();

// to trigger hourly output
void stepFoodLog(SimpleVector<WebRequest*>* globalWebRequests, bool inForceOutput = false);


void logEating( int inFoodID, int inFoodValue, double inEaterAge,
                int inMapX, int inMapY );
