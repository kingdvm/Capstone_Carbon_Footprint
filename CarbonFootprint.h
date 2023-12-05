#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

class CarbonFootprint {
public:
    CarbonFootprint(){

    }
    virtual void calculateCarbonFootprint() = 0;
    virtual void displayCarbonFootprint() = 0;

    int getFootprint(){
        return this->footprint;
    }

protected:
    int footprint;

};

#endif