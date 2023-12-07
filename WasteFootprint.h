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
        cout << "Enter estimated waste prouction this month (in kg): ";
        cin >> wasteAmount;
        this->footprint = wasteAmount;
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your estimated waste footprint is " << footprint << " kg" << endl;
    }
};

#endif
