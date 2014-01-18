/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 8
 * Change for a Dollar Game - Create a change-counting game that gets the
 *      user to enter the number of coins required to make exactly one dollar.
 *
 * Created on January 17, 2014, 8:49 PM
 */

//System libraries 
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    const int penny = 1, nickle = 5, dime = 10, quarter = 25, dollar = 100;
    int numPenny, numNickl, numDime, numQtr, usrTotal, sumDiff, target, rndm;
    int validInp;
    
    //Get a random value and display it on the screen
    unsigned seed = time(0);            //Get the system time
    srand(seed);                        //Seed the random number generator
    rndm = 1 + rand() % 100;            //Gets a random number between 1 & 100
    cout << "Please make change for a dollar from " << rndm << " cents.\n\n";
    
    //Get the number of coins needed to make change
    cout << "Enter 0 or positive values for the following.\n\n";
    cout << "Please enter the number of pennies: ";
    cin >> numPenny;
    cout << "Please enter the number of nickles: ";
    cin >> numNickl;
    cout << "Please enter the number of dimes: ";
    cin >> numDime;
    cout << "Please enter the number of quarters: ";
    cin >> numQtr;
        
    //Calculate the user total
    usrTotal = (penny*numPenny) + (nickle*numNickl) + (dime*numDime)
             + (quarter*numQtr);
    target = dollar - rndm;
    sumDiff = target - usrTotal;
    
    //Edit for valid input
    validInp = (numPenny >= 0) && (numNickl >= 0) && (numDime >= 0)
            && (numQtr >= 0);
    
    
    //Let the user know whether they won the game or not.
    if (validInp == 1)                          //Validate for >= 0
    {
        if (sumDiff > 0)
        {
                cout << "You are under by " << sumDiff << ". Nice try.\n";
        }
        else if (sumDiff < 0)
        {
                sumDiff *= -1;
                cout << "You are over by " << sumDiff << ". Nice try.\n";
        }
        else
        {
                cout << "Congratulations! You won the game!\n";
        }
    }
    else
    {    
        cout << "Please enter valid input. All entries should be 0 or greater";
    }               
    //Exit stage left
    return 0;
}

