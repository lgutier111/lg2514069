/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 17
 * Monthly Payments - Compute a monthly payment with given input from a user.
 *
 * Created on January 14, 2014, 11:26 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Functional Prototype

//Begin program 
int main(int argc, char** argv) {

    //Declare variables
    float mPaymnt, iRate, loanAmt, totPaid, totInt;
    double N, mRate;                                  //number of payment
    
    //Get loan information from user
    cout<<"Enter the loan amount: "<<endl;
    cin>>loanAmt;
    cout<<"Enter the annual percentage rate: "<<endl;
    cin>>iRate;
    cout<<"Enter the number of payments: "<<endl;
    cin>>N;
    
    //Do calculations
    mRate = (iRate/100) / 12;                          //monthly rate
    mPaymnt = ((mRate * pow(1 + mRate,N)) / (pow(1 + mRate,N) - 1)) * loanAmt;
    totPaid = N * mPaymnt;
    totInt = totPaid - loanAmt;
               
    
    //Display the monthly payment for the terms entered
    cout<<setprecision(2)<<fixed;
    cout<<setw(25)<<left<<"Loan Amount: "<<"$"<<setw(8)<<right<<
            loanAmt<<endl;
    
    //Set iRate back to a whole number by multiplying by 100 to display
    mRate *= 100;
    cout<<setprecision(0)<<fixed;
    cout<<setw(25)<<left<<"Monthly Interest Rate: "<<setw(8)<<right<<
            mRate<<"%"<<endl;
    cout<<setw(25)<<left<<"Number Of Payments: "<<setw(9)<<right<<
            N<<endl;
        
    cout<<setprecision(2)<<fixed;
    cout<<setw(25)<<left<<"Monthly Payment: "<<"$"<<setw(8)<<right<<
            mPaymnt<<endl;
    cout<<setw(25)<<left<<"Amount Paid Back: "<<"$"<<setw(8)<<right<<
            totPaid<<endl;
    cout<<setw(25)<<left<<"Interest Paid: "<<"$"<<setw(8)<<right<<
            totInt<<endl;
    
            
        
    //Exit Stage Left
    return 0;
}

