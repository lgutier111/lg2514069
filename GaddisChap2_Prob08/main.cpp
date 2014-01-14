/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chap 2 Problem 8
 * Total Purchase - this program will compute the total 
 *      purchase price of a sale including sales tax.
 * Created on January 13, 2014, 3:59 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program here
int main() {

    //Items purchased, sales tax and totals
    double price1 = 12.95,
            price2 = 24.96,
            price3 = 6.95,
            price4 = 14.95,
            price5 = 3.95,
            salesTax = .06,
            subTotal, taxAmt, total;
    
    //Sum of all items giving sub total
    subTotal = price1 + price2 + price3 + price4 + price5;
    
    //Compute sales tax
    taxAmt = subTotal * salesTax;
    
    //Compute total purchase
    total = subTotal + taxAmt;
    
    //Display the details of the purchase 
    cout << "              Item 1: " << price1 << endl;
    cout << "              Item 2: " << price2 << endl;
    cout << "              Item 3: " << price3 << endl;
    cout << "              Item 4: " << price4 << endl;
    cout << "              Item 5: " << price5 << endl;
    cout << "Total purchase price: " << subTotal << endl;
    cout << "           Sales tax: " << taxAmt << endl;
    cout << " " << endl;
    cout << "               Total: " << total << endl;
    
       
    return 0;
}

