/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 19
 * How Many Pizzas? - Calculate the number of pizzas needed to buy for a 
 *      party if each person attending is expected to eat 4 slices.
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
    float diam, areaP, nSlices, nPizzas;   //diameter, area, # slices
    double radius;                         //radius of pizza
    int nPeople, nSlicesp;                 //# of people, # slices required, 
                                           //# of pizzas
    int nOver;                             //test for partial pizza
    
    //Get the diameter of the pizza to determine number of slices
    cout<<"Enter the number of people attending: "<<endl;
    cin>>nPeople;
    cout<<"Enter the diameter of the pizza in inches: "<<endl;
    cin>>diam;
    
    //Compute the number of slices the pizza will yield
    //  depending on the diameter
    radius = diam / 2.0;
    areaP = pi * (pow(radius,2.0));
    nSlices = areaP / areaS;
    
    //Compute the number of pizzas will need to purchase based on 
    //  the number of people attending and the size of the pizza desired.
    nSlicesp = nPeople * 4;            //4 slices per person
    nPizzas = nSlicesp / nSlices;      //slices per person / # slices per pizza
    //nOver = nSlicesp % nSlices;        //test for remainder
    
            
    //Display the number of slices for the pizza.
    cout<<setprecision(1)<<fixed;
    cout<<"The number of slices in a "<<diam<<" inch pizza is "<<nSlices<<endl;
    cout<<"The number of pizzas you need to purchase is: "<<nPizzas<<endl;
    
    //Exit Stage Left
    return 0;
}

