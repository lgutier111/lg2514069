/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 5
 * Body Mass Index - Write a program that calculates and displays a person's
 *      body mass index (BMI).  
 *
 * Created on January 17, 2014, 7:44 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {
    
    //Declare Variables
    float weight, height, BMI;
    int feet, inches, ckWeight, ckHeight;
    
    //Ask user to enter weight in lbs
    cout << "Please enter your weight in lbs." << endl;
    cin >> weight;
    
    //Verify weight
    ckWeight = (weight <= 0);
    
    //Ask user to enter height in inches
    cout << "How tall are you? Enter feet followed by inches " << endl;
    cout << "For example 5 feet 11 inches would be 5 11 : " << endl;
    cin >> feet;
    cin >> inches;    

    //Verify height
    ckHeight = ((feet > 7) || (inches >= 12));
    
    //Calculate the BMI
    height = (feet * 12) + inches;
    BMI = (weight*703)/pow(height,2);
    
    //Determine BMI value
    if (ckWeight == 1)
    {
        cout << "You have entered an invalid weight. ";
    }
    else if (ckHeight == 1)
    {
        cout << "You have entered an invalid height. ";
    }
    else
    {       
        cout << setprecision(1) << fixed << showpoint; 
        if (BMI < 18.5)
                cout << "Your BMI is " << BMI << ". You are underweight.\n";
        else if (BMI > 25)
                cout << "Your BMI is " << BMI << ". You are overweight.\n";
        else
        {
                cout << "Congratulations, your BMI is " << BMI << ".\n ";
                cout << "Your weight is optimal!" << endl;
        }
    }        
    
    //Exit stage left
    return 0;
}

