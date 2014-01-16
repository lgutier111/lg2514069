/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 5
 * Box Office - Calculate a movie theater's gross and net box office
 * profit for an evening.
 *
 * Created on January 14, 2014, 10:10 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare constants
    float adult=6.00, child=3.00;
    
    //Declare variables
    float grospft, netpft, distPay;
    int adultTx, childTx;
    string mvName;
    
    //Get ticket sale info from user
    cout<<"Enter the name of the movie: "<<endl;
    getline(cin, mvName);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>adultTx;
    cout<<"How many chlld tickets were sold?"<<endl;
    cin>>childTx;
    
    //Calculate Gross and Net ticket sales
    grospft = (adultTx * adult) + (childTx * child);
    netpft = grospft * .2;
    distPay = grospft - netpft;
    
    //Display the total ticket sales and profits for the night
    cout<<"Movie Name: "<<setw(30)<<mvName<<endl;
    cout<<"Adult Tickets Sold: "<<setw(15)<<adultTx<<endl;
    cout<<"Child Tickets Sold: "<<setw(15)<<childTx<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<setw(30)<<left<<"Gross Box Office Profit: "<<"$"<<setw(8)
            <<right<<grospft<<endl;
    cout<<setw(30)<<left<<"Net Box Office Profit: "<<"$"<<setw(8)
            <<right<<netpft<<endl;
    cout<<setw(30)<<left<<"Amount Paid to Distributor: "<<"$"<<setw(8)
            <<right<<distPay<<endl;
    
    //Exit Stage Left
    return 0;
}

