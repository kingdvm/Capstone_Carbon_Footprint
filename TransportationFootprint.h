#ifndef TRANSPORTATIONFOOTPRINT_H
#define TRANSPORTATIONFOOTPRINT_H

#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class TransportationFootprint : public CarbonFootprint {
public:
    TransportationFootprint(){

    }

    void calculateCarbonFootprint() override {
        // Implementation for calculating carbon footprint from transportation-related data
        int electricityFootprint;
        cout << "Enter energy footprint: ";
        cin >> electricityFootprint;
        this->footprint = electricityFootprint;
    }

    void displayCarbonFootprint() override{
        cout << "Your footprint is " << footprint << endl; 
    }
};


#endif