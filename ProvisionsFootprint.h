// ProvisionsFootprint.h

#ifndef PROVISIONSFOOTPRINT_H
#define PROVISIONSFOOTPRINT_H

#include "CarbonFootprint.h"
using namespace std;

class ProvisionsFootprint : public CarbonFootprint {
public:
    ProvisionsFootprint() {}

    void calculateCarbonFootprint() override {
        int foodConsumption, produceConsumption;
        cout << "Enter estimated food consumption this month (in kg): ";
        cin >> foodConsumption;

        cout << "Enter estimated produce consumption this month (in kg): ";
        cin >> produceConsumption;

        this->footprint = foodConsumption + produceConsumption;
    }

    void displayCarbonFootprint() const override {
        cout << "Your estimated provisions footprint is " << footprint << " kg" << endl;
    }
};

#endif
