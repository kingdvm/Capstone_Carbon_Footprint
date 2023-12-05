#ifndef CARBONFOOTPRINT_H
#define CARBONFOOTPRINT_H

class CarbonFootprint {
public:
    CarbonFootprint(){

    }
    virtual void calculateCarbonFootprint() = 0;
    int getFootprint(){
        return this->footprint;
    }

private:
    int footprint;

};

#endif