/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chap 2 Problem 3
 * Compute the sales tax on a $52 purchase with 4% state sales
 *      tax and a 2% county sales tax.
 * Created on January 13, 2014, 3:50 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin Program
int main() {

    // Declare sales tax amounts and amount of purchase
    double prchase=52, stTax=.04, cntyTax=.02, totTax;
    
    //Compute the sales tax
    totTax = (prchase*stTax)+ (prchase*cntyTax);
            
    //Display the total taxes paid
    cout << "For a purchase of " << prchase << endl;
    cout << "The total tax is " << totTax << endl;
    
    return 0;
}

