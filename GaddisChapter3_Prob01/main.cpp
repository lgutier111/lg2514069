/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 1
 * Miles per Gallon - This program will compute a car's gas mileage with
 *   user entry.
 *
 * Created on January 14, 2014, 9:13 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    float gasMlg;
    int gallons, miles;
    
    //Get information from user
    cout<<"Enter the number of gallons the car can hold: "<<endl;
    cin>>gallons;
    cout<<"Enter the number of miles car can travel when"<<endl;
    cout<<"the tank is full: "<<endl;
    cin>>miles;
    
    //Calculate miles per gallon
    gasMlg=miles/gallons; 
    
    cout<<"The miles per gallon of this car is: "<<gasMlg<<endl;
    
    //Exit stage left
    return 0;
}

