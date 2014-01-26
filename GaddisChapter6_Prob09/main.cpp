/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 9
 * Present Value - Write a program that has a function named presentValue tht
 *      performs the present value calculation.  The function should accept 
 *      the future value, annual interest rate, and the number of years as
 *      arguments.  It should return the present value, which is the amount
 *      that you need to deposit today.  Demonstrate the function in a program
 *      that lets the user experiment with different values for the formula's
 *      terms.
 *
 * Created on January 25, 2014, 3:50 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Globals Constants

//Function Prototypes
float presentValue(float, float, int);

//Begin program
int main(int argc, char** argv) {

    //Declare Variables
    float pValue, fValue, iRate;
    int nYears, inRate;

    //Prompt user for the future value
    cout << "Enter the future value: ";
    cin >> fValue;
    
    //If the future value entered is less than 0, keep asking for positive
    //value
    while (fValue < 0)
    {
        cout << "Future value must be greater than 0." << endl;
        cout << "Enter the future value: ";
        cin >> fValue;
    }
    
    //Prompt user the the interest rate as an integer
    cout << "Enter the annual interest rate: ";
    cin >> inRate;
    
    //If the interest rate value is less than 0, keep asking for a positive
    //value.
    while (inRate < 0)
    {
        cout << "Interest rate needs to be greater than 0." << endl;
        cout << "Enter the annual interest rate: ";
        cin >> inRate;
    }
    
    //Calculate the interest rate based on the value entered
    iRate = inRate / 100.0;
    
    //Prompt the user for the number of years.
    cout << "Enter the number of years: ";
    cin >> nYears;
    
    //If the number of years entered is less than 0, then keep asking user
    //for a positive value.
    while (nYears < 0)
    {
        cout << "The number of years needs to be greater than 0." << endl;
        cout << "Enter the number of years: ";
        cin >> inRate;
    }
     
    //This calls the function presentValue and assigns the value returned 
    //to pValue.
    pValue = presentValue(fValue, iRate, nYears);
    
    //Display the results from user input.  
    cout << setprecision(2) << fixed << showpoint;
    cout << "The amount the you need to deposit today for an amount \n";
    cout << "of $" << fValue << " at an interest rate of " << inRate << "%\n";
    cout << "for " << nYears << " years is $" << pValue << ".\n";

     
    //Exit Stage Left
    return 0;
}


//This function computes the present value based on the future value amount,
//interest rete and number of years entered by the user.  Where
// fVal = future value
// iRt = interest rate
// nYr = the number of years to compound
float presentValue(float fVal, float iRt, int nYr){
    
    return (fVal / pow((1 + iRt),nYr));
    
}
