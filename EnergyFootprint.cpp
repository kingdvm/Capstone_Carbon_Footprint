#include <iostream>
#include "CarbonFootprint.h"
#include "EnergyFootprint.h"

class EnergyFootprint : public CarbonFootprint {
public:
    void calculateCarbonFootprint() override {
        // Find a formula that takes energy input (in watts probably) and quantifies/rates that energy usage
    }
};