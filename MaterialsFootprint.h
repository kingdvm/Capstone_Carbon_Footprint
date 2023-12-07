// MaterialsFootprint.h

#ifndef MATERIALSFOOTPRINT_H
#define MATERIALSFOOTPRINT_H

#include "CarbonFootprint.h"
using namespace std;

class MaterialsFootprint : public CarbonFootprint {
public:
    MaterialsFootprint() {}

    void calculateCarbonFootprint() override {
        int clothingArticles;
        cout << "Enter number of clothing articles purchased this month: ";
        cin >> clothingArticles;
        this->footprint = clothingArticles;
    }

    void displayCarbonFootprint() const override {
        cout << "Your estimated materials footprint is " << footprint << " clothing articles" << endl;
    }
};

#endif
