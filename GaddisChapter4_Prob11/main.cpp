/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 11
 * Book Club Points - Program will ask the user to enter the number of books
 *      he/she has purchased this month and then displays the number of points
 *      awarded.
 *
 * Created on January 18, 2014, 1:23 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    int bookPrch, points;
    
    //Prompt user for books purchased
    cout << "Enter number of books purchased: ";
    cin >> bookPrch;
    
    //Assign the number of points depending on input
    switch(bookPrch)
    {
        case 0 : points = 0;
        break;
        case 1 : points = 5;
        break;
        case 2 : points = 15;
        break;
        case 3 : points = 30;           
        break;
        default  : points = 60;         //4 or more books gets 60 points
    }

    //Display the number of points awarded 
    cout << "The number of points awarded this month is " << points;
    
    //Exit stage right
    return 0;
}

