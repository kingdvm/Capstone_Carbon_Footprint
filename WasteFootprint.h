// WasteFootprint.h

#ifndef WASTEFOOTPRINT_H
#define WASTEFOOTPRINT_H

#include "CarbonFootprint.h"

class WasteFootprint : public CarbonFootprint {
public:
    WasteFootprint() {}

    void calculateCarbonFootprint() override {
        using namespace std;
        int wasteAmount;
        cout << "Enter waste amount (in kg): ";
        cin >> wasteAmount;
        this->footprint = wasteAmount;
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your waste footprint is " << footprint << " kg" << endl;
    }
};

#endif
