//Author: Celestlin Hutagalung
//Carbon Footprint Calculator
//Calculates Carbon Footprint

#include <iostream>
#include "CarbonFootprint.h"
#include "EnergyFootprint.h"
#include "MaterialsFootprint.h"
#include "ProvisionsFootprint.h"
#include "TransportationFootprint.h"
#include "WasteFootprint.h"

using namespace std;

class CarbonFootprintCalculator {
private:
    //Constants
    static const int MAX_ACTIVITIES = 5;
    CarbonFootprint** activities = new CarbonFootprint*[MAX_ACTIVITIES];
    int numActivities;

    int energyFootprint;
    int materialsFootprint;
    int provisionsFootprint;
    int transportationFootprint;
    int wasteFootprint;

public:
    int totalCarbonFootprint;
    CarbonFootprintCalculator() : numActivities(0) {}

    void addActivity(CarbonFootprint* activity) {
        if (numActivities < MAX_ACTIVITIES) {
            activities[numActivities++] = activity;
        } else {
            std::cerr << "Cannot add more activities. Maximum limit reached." << std::endl;
        }
    }

    void calculateTotalCarbonFootprint() {
        for (int i = 0; i < numActivities; ++i) {
            activities[i]->calculateCarbonFootprint();
        }
        // Calculate total carbon footprint and display results
        // Will need to finalize all the different conversion formulas for each class
    }
};

int main() {
    // Example usage of the Carbon Footprint Calculator

    CarbonFootprintCalculator calculator;

    // User inputs (simplified for demonstration purposes)
    Energy energyActivity;
    Transportation transportationActivity;

    calculator.addActivity(&energyActivity);
    calculator.addActivity(&transportationActivity);

    // Add other activities based on user input

    calculator.calculateTotalCarbonFootprint();

    return 0;
}
