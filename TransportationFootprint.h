// TransportationFootprint.h

#ifndef TRANSPORTATIONFOOTPRINT_H
#define TRANSPORTATIONFOOTPRINT_H

#include "CarbonFootprint.h"

class TransportationFootprint : public CarbonFootprint {
public:
    TransportationFootprint() {}

    void calculateCarbonFootprint() override {
        using namespace std;
        int distanceTraveled;
        cout << "Enter estimated distance traveled this month (in km): ";
        cin >> distanceTraveled;
        
        // Assuming some simple linear relation between distance and footprint
        this->footprint = distanceTraveled / 10;  //replace with your actual formula
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your estimated transportation footprint is " << footprint << " units" << endl;
    }
};

#endif
