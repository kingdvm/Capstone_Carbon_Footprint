// EnergyFootprint.h

#ifndef ENERGYFOOTPRINT_H
#define ENERGYFOOTPRINT_H

#include "CarbonFootprint.h"

using namespace std;

class EnergyFootprint : public CarbonFootprint {
public:
    EnergyFootprint() {}

    void calculateCarbonFootprint() override {
        int electricityFootprint;
        cout << "Enter estimated energy usage this month (in kWh): ";
        cin >> electricityFootprint;
        this->footprint = electricityFootprint;
    }

    void displayCarbonFootprint() const override {
        cout << "Your estimated energy footprint is " << footprint << " kWh" << endl;
    }
};

#endif
