#ifndef WASTEFOOTPRINT_H
#define WASTEFOOTPRINT_H

#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class WasteFootprint : public CarbonFootprint {
public:
    WasteFootprint(){
        
    }
    void calculateCarbonFootprint() override {
        // Find a formula 
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