#ifndef MATERIALSFOOTPRINT_H
#define MATERIALSFOOTPRINT_H

#include <iostream>
#include "CarbonFootprint.h"

using namespace std;

class MaterialsFootprint : public CarbonFootprint {
public:
    MaterialsFootprint(){
        
    }

    void calculateCarbonFootprint() override {
        // Find a formula 
        int clothingArticles, itemPurchases;
        bool onlineShopper;

        cout << "Enter clothing articles: ";
        cin >> clothingArticles;
        this->footprint = clothingArticles;
    }

    void displayCarbonFootprint() override{
        cout << "Your footprint is " << footprint << endl; 
    }
};

#endif