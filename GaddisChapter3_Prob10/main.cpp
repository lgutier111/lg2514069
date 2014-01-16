/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 10
 * Celsius To Fahrenheit - Convert Celsius to Fahrenheit 
 *
 * Created on January 14, 2014, 10:58 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main() {

    //Declare variables
    float F, C;
    
    
    //Ask the user for the Celsius temperature
    cout<<"Give the degrees Celsius: "<<endl;
    cin>>C;
    
    //Compute degrees Fahrenheit
    F = ((9.0/5.0) * C)+ 32;
    
    //Display the degrees Fahrenheit rounding to the whole degree
    cout<<setprecision(0)<<fixed;
    cout<<"The degrees Fahrenheit is: "<< F <<endl;
        
    //Exit Stage Left
    return 0;
}