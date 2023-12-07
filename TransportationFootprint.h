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
        cout << "Enter distance traveled (in km): ";
        cin >> distanceTraveled;
        
        // Assuming some simple linear relation between distance and footprint
        this->footprint = distanceTraveled / 10;  //replace with your actual formula
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your transportation footprint is " << footprint << " units" << endl;
    }
};

#endif
