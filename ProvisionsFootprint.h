#ifndef PROVISIONSFOOTPRINT_H
#define PROVISIONSFOOTPRINT_H

#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class ProvisionsFootprint : public CarbonFootprint {
public:
    ProvisionsFootprint(){
        
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