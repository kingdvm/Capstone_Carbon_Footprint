//Author: Celestlin Hutagalung
//Carbon Footprint Calculator
//Calculates Carbon Footprint

#include <iostream>

class Activity {
public:
    virtual void calculateCarbonFootprint() = 0;
};

class Energy : public Activity {
public:
    void calculateCarbonFootprint() override {
        // Find a formula that takes energy input (in watts probably) and quantifies/rates that energy usage
    }
};

class Transportation : public Activity {
public:
    void calculateCarbonFootprint() override {
        // Implementation for calculating carbon footprint from transportation-related data
    }
};

// Other activity classes like Waste, Diet, and Consumption can be similarly implemented

class CarbonFootprintCalculator {
private:
    static const int MAX_ACTIVITIES = 5;
    Activity* activities[MAX_ACTIVITIES];
    int numActivities;

public:
    CarbonFootprintCalculator() : numActivities(0) {}

    void addActivity(Activity* activity) {
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
