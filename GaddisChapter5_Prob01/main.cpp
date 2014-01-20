/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 1
 * Sum Of Numbers - Write a program that asks the user for a positive integer
 *      value.  The program should use a loop to get the sum of all the 
 *      integers from 1 up to the number entered.  For example, if the user
 *      enters 50, the loop will find the sum of 1, 2, 3, 4,... 50.
 * 
 *      input validation: Do not accept a negative starting number.
 *
 * Created on January 19, 2014, 6:58 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    int sumNum, maxNum, totalSum = 0;
    
    //Prompt user for a number
    cout << "Enter a positive number to calculate a sum to: ";
    cin >> maxNum;
    
    //Error out if the user enters a negative number.  Keep asking for a 
    //number greater than 0 if a negative number is entered.
    while (maxNum < 0)
    {
        cout << "The number needs to be positive.  Please try again\n";
        cout << "Enter a positive number to calculate a sum to: ";
        cin >> maxNum;
    }
    
    //Sum the number from 1 to the number input and display when done
    for (sumNum = 1; sumNum <= maxNum; sumNum ++  )
    {
        totalSum += sumNum;
    }
    
    //Display the total of the sum
    cout << "The sum total is: " << totalSum << endl;
    
    //Exit state left
    return 0;
}

