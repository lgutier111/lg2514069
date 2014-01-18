/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 13
 * Shipping Charges - Ask for the weight of a package and the distance it is
 *      to be shipped and then display the charges.
 *
 * Created on January 17, 2014, 11:50 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare Variables
    const float MAX_KG = 20.0; 
    const int MIN_DIST = 10, MAX_DIST = 3000;
    float weight, distance, shipChrg, rateMile;
    char shipRate;
    
    //Prompt user for weight and distance
    cout << "Please enter the weight of the package" << endl;
    cout << "Weight can be up to 20kg ";
    cin >> weight;
           
    //Enter the distance to be shipped 
    cout << "Please enter the distance to be shipped: ";
    cin >> distance;
    
    //Calculate rate per 500 miles for distance entered
    rateMile = distance/500.0;
            
    //Determine which shipping rate to use.  Coding like this just to be
    //able to code a switch statement below.  Otherwise I could just put the
    //calculation in the switch statement in this if/else/if statement.
    if (weight <= 2)
    {
        shipRate = 'A';
    }
    else if (weight > 2 && weight <= 6)
    {
        shipRate = 'B';
    }
    else if (weight > 6 && weight <= 10)
    {
        shipRate = 'C';
    }
    else
    {
        shipRate = 'D';
    }
                
    //Calculate the shipping rate
    switch (shipRate)
    {
            case 'A' : shipChrg = rateMile * 1.1;
            break;
            case 'B' : shipChrg = rateMile * 2.2;
            break;
            case 'C' : shipChrg = rateMile * 3.7;
            break;
            case 'D' : shipChrg = rateMile * 4.8;
    }               
    
    //Do validations and if input okay, display results, else display error msg
    if (weight < 0)                              //verify weight > 0
    {
        cout << "Weight must be greater than 0.\n";
    }
    else if (weight > MAX_KG)                    //Verify weight within limit 
    {
        cout << "Weight cannot be greater than 20kg.\n";
    }
   //Validate distance is within parameters
    else if ((distance < MIN_DIST)||(distance > MAX_DIST))
    {
        cout << "Distance must be between 10 and 3,000 miles.\n";
    }
    else
    {
        cout << setw(25) << "Package weight: " << setw(7) << weight << endl;
        cout << setw(25) << "Package distance:  " << setw(7) << distance
             << endl;
        cout << setprecision(2) << fixed << showpoint;
        cout << setw(25) << "Total shipping charges: " << setw(7) <<shipChrg
             << endl;
    }
    
    //Exit stage left
    return 0;
}

