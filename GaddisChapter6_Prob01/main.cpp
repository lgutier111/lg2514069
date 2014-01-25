/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 1
 * Markup - Write a program that asks the user to enter an item's wholesale cost
 *      and its markup percentage.  It should then display the item's retail 
 *      price.  For example:
 * 
 *      - If an item's wholesale cost is 5.00 and its markup percentage is
 *        100%, then the item's retail price is 10.00.
 *      - If an item's wholesale cost is 5.00 and its markup percentage is
 *        50%, then the item's retail price is 7.50.
 * 
 * The program should have a function names calculateRetail that receives the
 *      wholesale cost and the markup percentage as arguments, and returns the
 *      retail price of the item.
 * 
 * Input Validation: Do not accept negative values for either the wholesale
 *      cost of the item or the markup percentage.
 *
 * Created on January 25, 2014, 10:55 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
float calculateRetail(float, int);

//Begin program
int main() {
    
    //Declare variables
    float retailP, wholeC, markUpP;
    
    //Get the wholesale cost of the item from the user.
    cout << "Please enter the wholesale cost of the item: ";
    cin >> wholeC;
    
    //If the wholesale cost entered by the user is negative, keep asking for
    //a valid value.
    while (wholeC < 0)
    {
        cout << "The wholesale cost must be positive.\n";
        cout << "Please enter the wholesale cost of the item: ";
        cin >> wholeC;
    }

    //Get the mark up percentage from the user.
    cout << "Please enter the mark up percentage of this item: ";
    cin >> markUpP;
    
    //If the mark up price entered by the user is negative, keep asking for
    //a valid value.
    while (markUpP < 0)
    {
        cout << "The markup percentage must be positive.\n";
        cout << "Please enter the markup percentage of this item: ";
        cin >> markUpP;
    }

    retailP = calculateRetail(wholeC, markUpP);
    
    //Display the retail price of the item
    cout << setprecision(2) << fixed << showpoint;
    cout << "The retail price of the item is: " << retailP << endl;
    
    //Exit stage left
    return 0;
}

//Function to calculate the retail price of an item.
//  Being passed to this function is:
//  num1 - the wholesale price
//  perc1 - the markup percentage as an integer which will be converted here
//  the function returns the result of the calculation to the function call
//      and assigns the value to retailP.
float calculateRetail(float num1, int perc1)
    {
        return (num1 * perc1 / 100.0) + num1;
    }