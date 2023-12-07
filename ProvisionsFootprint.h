// ProvisionsFootprint.h

#ifndef PROVISIONSFOOTPRINT_H
#define PROVISIONSFOOTPRINT_H

#include "CarbonFootprint.h"

class ProvisionsFootprint : public CarbonFootprint {
public:
    ProvisionsFootprint() {}

    void calculateCarbonFootprint() override {
        using namespace std;
        int foodConsumption, produceConsumption;
        cout << "Enter food consumption (in kg): ";
        cin >> foodConsumption;

        cout << "Enter produce consumption (in kg): ";
        cin >> produceConsumption;

        this->footprint = foodConsumption + produceConsumption;
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your provisions footprint is " << footprint << " kg" << endl;
    }
};

#endif
