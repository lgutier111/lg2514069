/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 2
 * Stadium Seating - Calculate ticket sales and format the output with 
 * fixed point notation with 2 decimals
 *
 * Created on January 14, 2014, 9:28 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare constants
    float classA=15.0, classB=12.0, classC=9.0;
    
    //Declare variables
    int clsAtix, clsBtix, clsCtix;
    float totAtix, totBtix, totCtix, totSales;
    
    //Get user input for number of tickets sold for each class of ticket
    cout<<"How many class A tickets were sold? "<<endl;
    cin>>clsAtix;
    cout<<"How many class B tickets were sold? "<<endl;
    cin>>clsBtix;
    cout<<"How many class C tickets were sold? "<<endl;
    cin>>clsCtix;
    
    //Compute the ticket sales
    totAtix = clsAtix * classA;
    totBtix = clsBtix * classB;
    totCtix = clsCtix * classC;
    totSales = totAtix + totBtix + totCtix;
    
    //Display sales for each ticket category and total for all ticket sales
    cout<<setprecision(2)<<fixed;
    cout<<"Total A class tickets: $"<<setw(9)<<totAtix<<endl;
    cout<<"Total B class tickets: $"<<setw(9)<<totBtix<<endl;
    cout<<"Total C class tickets: $"<<setw(9)<<totCtix<<endl;
    cout<<"   Total tickets sold: $"<<setw(9)<<totSales<<endl;
    
    //Exit stage left
    return 0;
}

