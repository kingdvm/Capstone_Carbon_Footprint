// main.cpp

#include <iostream>
#include "CarbonFootprint.h"
#include "EnergyFootprint.h"
#include "MaterialsFootprint.h"
#include "ProvisionsFootprint.h"
#include "TransportationFootprint.h"
#include "WasteFootprint.h"

class CarbonFootprintCalculator {
private:
    static const int MAX_ACTIVITIES = 5;
    CarbonFootprint* activities[MAX_ACTIVITIES];
    int totalCarbonFootprint;

public:
    CarbonFootprintCalculator() {
        activities[0] = new MaterialsFootprint();
        activities[1] = new TransportationFootprint();
        activities[2] = new ProvisionsFootprint();
        activities[3] = new EnergyFootprint();
        activities[4] = new WasteFootprint();
        totalCarbonFootprint = 0;
    }

    void calculateTotalCarbonFootprint() {
        for (int i = 0; i < MAX_ACTIVITIES; i++) {
            activities[i]->calculateCarbonFootprint();
            totalCarbonFootprint += activities[i]->getFootprint();
        }
    }

    void displayCarbonFootprint() const {
        using namespace std;
        for (int i = 0; i < MAX_ACTIVITIES; i++) {
            activities[i]->displayCarbonFootprint();
        }

        cout << "\nTotal Carbon Footprint: " << totalCarbonFootprint << " units" << endl;
        cout << "Overall Rating: " << calculateOverallRating(totalCarbonFootprint) << "/10" << endl;
    }

private:
    int calculateOverallRating(int total) const {
        return total / 10; //replace with your actual formula
    }
};

int main() {
    CarbonFootprintCalculator calculator;
    
    calculator.calculateTotalCarbonFootprint();
    calculator.displayCarbonFootprint();

    return 0;
}
