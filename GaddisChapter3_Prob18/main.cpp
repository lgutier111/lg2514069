/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 18
 * Pizza Pi - Calculate the number of slices a pizza of any size can be
 *      divided into.
 *
 * Created on January 15, 2014, 7:46 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants
float pi=3.14159;

//Functional Prototypes

//Start program
int main(int argc, char** argv) {

    //Declare constants
    float areaS = 14.125;                 //Area of a slice is 14.125 inches
    
    //Declare Variables
    float diam, areaP, nSlices;         //diameter and area of the pizza
    double radius;                      //radius of pizza
    
    //Get the diameter of the pizza to determine number of slices
    cout<<"Enter the diameter of the pizza in inches: "<<endl;
    cin>>diam;
    
    //Perform calculations
    radius = diam / 2.0;
    areaP = pi * (pow(radius,2.0));
    nSlices = areaP / areaS;
    
    //Display the number of slices for the pizza.
    cout<<setprecision(1)<<fixed;
    cout<<"The number of slices for your pizza is: "<<nSlices<<endl;
    
    //Exit Stage Left
    return 0;
}

