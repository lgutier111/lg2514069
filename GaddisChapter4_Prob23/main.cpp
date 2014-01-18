/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 23
 * Internet Service Provider - Calculate the monthly subscription bill.
 *
 * Created on January 18, 2014, 11:09 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    const int MAX_HRS = 744;
    char package;
    int hours, hrsOver;
    float cost;
    
    //Prompt user for package purchased and hours used
    //Package A - 9.95/month + 2/hr over 10 hrs
    //Package B - 14.95/month + 1/hr over 20 hrs
    //Package C - 19.95/month unlimited 
    cout << "Which package did you purchase: ";
    cin >> package;
    
    switch(package)
    {
        case 'a' :
        case 'A' :  
            cout << "Enter hours used this month: ";
            cin >> hours;
            if (hours <= MAX_HRS)
            {
                hrsOver = hours - 10;
                if (hrsOver > 0)
                {
                    cost = 9.95 + (hrsOver * 2.0);
                }
                else
                {    
                    cost = 9.95;
                }
                cout << "Total charges for the month is: $" << cost;
                break;
            }
            else
            {
                cout << "Hours cannot exceed 744! ";
                break;
            }
                    
             
        case 'b' :
        case 'B' :  
            cout << "Enter hours used this month: ";
            cin >> hours;
            if (hours <= MAX_HRS)
            {
                hrsOver = hours - 20;
                if (hrsOver > 0)
                {
                    cost = 14.95 + (hrsOver * 1.0);
                }
                else
                {    
                    cost = 14.95;
                }
            
                cout << "Total charges for the month is: $" << cost;
                break;
            }
            else
            {
                cout << "Hours cannot exceed 744! ";
                break;
            }

                    
        case 'c' :
        case 'C' :  
            cost = 19.95;
            cout << "You have unlimited access.\n";
            cout << "Total charges for the month is: $" << cost;
            break;

        default : cout << "You did not enter A, B or C ";
    }
    
    
    //Exit stage right
    return 0;
}

