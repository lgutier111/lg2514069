/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 2 Problem 2
 * This program will display the East Coast percentage of 
 * sales for this year.
 * Created on January 13, 2014, 3:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Program Stars Here
int main() {

    //Declare variables
    double prcnt=.62, totSales=4.6E6, salesGen;
    
    //Calculate Sales for East Coast
    salesGen = totSales * prcnt;
    
    //Display East Coast sales generated for the year
    cout << "Total East Coast sales for this year is "
         << salesGen << endl;
    
    //End of program
    return 0;
}

