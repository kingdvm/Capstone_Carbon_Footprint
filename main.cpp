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

//Main calculator class class
class CarbonFootprintCalculator {
private:
    static const int MAX_ACTIVITIES = 5; //Constant number of carbon footprint areas, can be changed if expanded in the future

    CarbonFootprint** activities; //Points to an array of CarbonFootprints, which is a the parent class of each type of carbon footprint 

    //Carbon footrprint scores
    int energyFootprint;
    int materialsFootprint;
    int provisionsFootprint;
    int transportationFootprint;
    int wasteFootprint;
    int totalCarbonFootprint;


public:
    //Constructor initialises each of the carbon footprint areas in activities
    CarbonFootprintCalculator(){
       activities = new CarbonFootprint*[MAX_ACTIVITIES];

       activities[0] = new MaterialsFootprint();
       activities[1] = new TransportationFootprint();
       activities[2] = new ProvisionsFootprint();
       activities[3] = new EnergyFootprint();
       activities[4] = new WasteFootprint();
    }

    // Calculate total carbon footprint
    void calculateTotalCarbonFootprint() {
        for (int i = 0; i < MAX_ACTIVITIES; i++) {
            activities[i]->calculateCarbonFootprint();
        }
    }

    // Display results
    void displayCarbonFooprint(){
        for (int i = 0; i < MAX_ACTIVITIES; i++) {
            activities[i]->displayCarbonFootprint();
        }
    }
};

int main() {
    // Example usage of the Carbon Footprint Calculator

    CarbonFootprintCalculator calculator;
    
    calculator.calculateTotalCarbonFootprint();
    calculator.displayCarbonFooprint();

    return 0;
}
