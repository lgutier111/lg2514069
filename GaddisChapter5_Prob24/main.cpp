/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 24
 * Using Files - Numeric Processing - Use file Random.txt - the file contains
 *      a long list of random numbers.  Write a program that opens the file, 
 *      reads all the numbers from the file, and calculates the following:
 *      A) The number of numbers in the file
 *      B) The sum of all the numbers in the file (a running total)
 *      C) The average of all the numbers in the file
 * 
 * The program should display the number of numbers found in the file, the sum
 *      of the numbers and the average of the numbers.
 *
 * Created on January 20, 2014, 11:00 AM
 */

//System libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare and initialize variables
    int recsRead = 0, sumRecs = 0, numRecs = 0;
    float avgRecs;
        
    //Define the input file
    ifstream inFile1;
    int numIn;
    
    //Open the input file
    inFile1.open("Random.txt");
    cout << "Opening Random.txt file...\n\n";
    
    //If successfully open the file, process the file
    if (inFile1)
    {
        //Read the numbers from the file, count them, sum then 
        //and compute the avg
        while (inFile1 >> numIn) 
        {
            sumRecs += numIn;              //Sum the records as they are read
            numRecs++;                      //Count the records
        }
    
        avgRecs = static_cast<float>(sumRecs) / numRecs;   //Compute average
        
        //Display the average, the number of records read and the sum of all
        //records read.  
        cout << "The number of records read is " << numRecs << ".\n";
        cout << "The sum of all records read is " << sumRecs << ".\n";
        cout << setprecision(1) << fixed << showpoint;
        cout << "The average of all records read is " << avgRecs << ".\n";
        
        //Close the file
        inFile1.close();
    }
    else
    {
        //Display an error message
        cout << "Error opening the file.\n";
    }
    
    //Exit Stage Left
    return 0;
}

