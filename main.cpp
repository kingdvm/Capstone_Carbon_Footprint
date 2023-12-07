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
    
    //Menu 
    void displayMenu(){
         cout << " _____            _                  ______          _              _       _   \n"
                 "/  __ \\          | |                 |  ___|        | |            (_)     | |  \n"
                 "| /  \\/ __ _ _ __| |__   ___  _ __   | |_ ___   ___ | |_ _ __  _ __ _ _ __ | |_ \n"
                 "| |    / _` | '__| '_ \\ / _ \\| '_ \\  |  _/ _ \\ / _ \\| __| '_ \\| '__| | '_ \\| __|\n"
                 "| \\__/\\ (_| | |  | |_) | (_) | | | | | || (_) | (_) | |_| |_) | |  | | | | | |_ \n"
                 " \\____/\\__,_|_|  |_.__/ \\___/|_| |_| \\_| \\___/ \\___/ \\__| .__/|_|  |_|_| |_|\\__|\n"
                 "                                                        | |                   \n"
                 "                                                        |_|                   \n";

        int option; 
        cout << "Please select an option:" << endl;
        cout << "1 - Calculate carbon footprint" << endl;
        cout << "2 - Learn more" << endl;
        cout << "3 - Quit" << endl;
        cout << "Choice: ";
        cin >> option;
        if(option == 1){
            cout << "Option 1, Calculate Carbon Footprint" << endl;
            calculateTotalCarbonFootprint(); 
            displayCarbonFooprint();
        }else if (option == 2){
            cout << "Option 2, Learn More" << endl;
            learnMore();
        }else if (option == 3){
            cout << "Option 3, Quitting, Have a Nice Day" << endl;
            exit(0);
        }else{
            cout << "Invalid option, exiting" << endl;  
            exit(0);
        }
    }

    // Calculate total carbon footprint
    void calculateTotalCarbonFootprint() {
        for (int i = 0; i < MAX_ACTIVITIES; i++) {
            activities[i]->calculateCarbonFootprint();
        }
    }

    //tell users about carbon footprint 
    void learnMore(){
        int option;
        cout << "This is a carbon footprint calculator, please take the short quiz to learn about your carbon footprint" << endl;
        cout << "Please select an option:" << endl;
        cout << "1 - Calculate carbon footprint" << endl;
        cout << "2 - Quit" << endl;
        cout << "Choice: ";
        cin >> option;
         if(option == 1){
            cout << "Option 1, Calculate Carbon Footprint" << endl;
            calculateTotalCarbonFootprint(); 
            displayCarbonFooprint();
        }else if (option == 2){
            cout << "Have a nice day" << endl;
            exit(0);
        }else{
            cout << "Invalid option, exiting" << endl;  
            exit(0);
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

    calculator.displayMenu();
    calculator.calculateTotalCarbonFootprint();
    calculator.displayCarbonFooprint();

    return 0;
}
