/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 24
 * Internet Service Provider Part 2 - After calculating monthly subscription 
 *      bill, display how much customer A would save if they purchased 
 *      package B or C and how much customer B would save if they purchased
 *      package C.  Don't display any messages if there are no savings.  
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
    float cost, costB, costC = 19.95, savingsB, savingsC;
    
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
            if (hours <= MAX_HRS)                  //Verify hours within limit 
            {
                //Determine charges of A package
                hrsOver = hours - 10;
                if (hrsOver > 0)
                {
                    cost = 9.95 + (hrsOver * 2.0);
                }
                else
                {    
                    cost = 9.95;
                }
                cout << "Total charges for the month is: $" << cost << endl;
                
                //Calculate B cost for same hours
                hrsOver = hours - 20;
                if (hrsOver > 0)
                {
                    costB = 14.95 + (hrsOver * 1.0);
                }
                else
                {
                    costB = 14.95;
                }
                
                //Calculate savings - display msg only if there is a savings
                savingsB = cost - costB;
                savingsC = cost - costC;
                if (savingsB > 0)
                {
                    cout << "You could save $" << savingsB << " if you ";
                    cout << "switch to Package B.\n"; 
                }
                if (savingsC > 0)
                {
                    cout << "You could save $" << savingsC << " if you ";
                    cout << "switch to Package C.\n";
                }   
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
            if (hours <= MAX_HRS)               //Verify hours within limit
            {
                //Determine charges for B package
                hrsOver = hours - 20;
                if (hrsOver > 0)
                {
                    cost = 14.95 + (hrsOver * 1.0);
                }
                else
                {    
                    cost = 14.95;
                }
            
                cout << "Total charges for the month is: $" << cost << endl;
                
                //Calculate savings
                savingsC = cost - costC;
                if (savingsC > 0)
                {
                    cout << "You could save $" << savingsC << " if you ";
                    cout << "switch to Package C.\n";
                }
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

