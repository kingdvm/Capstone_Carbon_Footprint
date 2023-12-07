// CarbonFootprint.h

#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

#include <iostream>

class CarbonFootprint {
public:
    CarbonFootprint() {}

    virtual void calculateCarbonFootprint() = 0;
    virtual void displayCarbonFootprint() const = 0;

    int getFootprint() const {
        return this->footprint;
    }

protected:
    int footprint;
};

#endif
