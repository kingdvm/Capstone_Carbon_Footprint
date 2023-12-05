#ifndef ENERGYFOOTPRINT_H
#define ENERGYFOOTPRINT_H

#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class EnergyFootprint : public CarbonFootprint {
public:
    
    void calculateCarbonFootprint() override {
        // Find a formula that takes energy input (in watts probably) and quantifies/rates that energy usage
    }
};

#endif