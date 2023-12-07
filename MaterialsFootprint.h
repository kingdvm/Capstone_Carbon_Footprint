// MaterialsFootprint.h

#ifndef MATERIALSFOOTPRINT_H
#define MATERIALSFOOTPRINT_H

#include "CarbonFootprint.h"

class MaterialsFootprint : public CarbonFootprint {
public:
    MaterialsFootprint() {}

    void calculateCarbonFootprint() override {
        using namespace std;
        int clothingArticles;
        cout << "Enter number of clothing articles purchased: ";
        cin >> clothingArticles;
        this->footprint = clothingArticles;
    }

    void displayCarbonFootprint() const override {
        using namespace std;
        cout << "Your materials footprint is " << footprint << " clothing articles" << endl;
    }
};

#endif
