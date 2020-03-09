

void initFoodLog();


void freeFoodLog(SimpleVector<WebRequest*>* globalWebRequests);

// to trigger hourly output
void stepFoodLog(SimpleVector<WebRequest*>* globalWebRequests, bool inForceOutput = false);


void logEating( SimpleVector<WebRequest*>* globalWebRequests, int inFoodID, int inFoodValue, double inEaterAge,
                int inMapX, int inMapY );
