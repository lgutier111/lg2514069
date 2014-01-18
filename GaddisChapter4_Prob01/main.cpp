/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 1
 * Minimum/Maximum - Ask for 2 numbers and use a conditional operator to
 *      determine which number is smaller and which is larger.
 *
 * Created on January 17, 2014, 7:22 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    int value1, value2;
    
    //Ask the user for two numbers
    cout << "Please enter the 1st number: " << endl;
    cin >> value1;
    cout << "Please enter the 2nd number: " << endl;
    cin >> value2;
    
    //Determine which number is larger and display
    if (value1 < value2)
        cout << value1 << " is smaller than " << value2 << endl;
    else if (value1 > value2)
        cout << value1 << " is larger than " << value2 << endl;
    else
        cout << "The values entered are equal to each other" << endl;

    //Exit stage left
    return 0;
}

