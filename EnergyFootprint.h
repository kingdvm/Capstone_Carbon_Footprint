// EnergyFootprint.h

#ifndef ENERGYFOOTPRINT_H
#define ENERGYFOOTPRINT_H

#include "CarbonFootprint.h"

class EnergyFootprint : public CarbonFootprint {
public:
    EnergyFootprint() {}

    void calculateCarbonFootprint() override {
        using namespace std;
        int electricityFootprint;
        cout << "Enter energy footprint (in kWh): ";
        cin >> electricityFootprint;
        this->footprint = electricityFootprint;
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your energy footprint is " << footprint << " kWh" << endl;
    }
};

#endif
