/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 2 Problem 1
 *      This program stores to integers, 62 and 99 in 
 *      variables and stores the sum of the two in a 
 *      variable called total.
 * Created on January 13, 2014, 3:27 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program here
int main() {
    //Define 3 variables and assign values to 2 of them
    int Total, value1=62, value2=99;
    
    //Sum the to value together and place into Total
    Total = value1 + value2;
            
    //Display the answer on the screen to verify logic
    cout << "The value of Total is " << Total << endl;
    
    //End Program
    return 0;
}

