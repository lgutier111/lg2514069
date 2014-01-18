/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 25
 * Internet Service Provider Part 3 - After calculating monthly subscription 
 *      bill, display how much customer A would save if they purchased 
 *      package B or C and how much customer B would save if they purchased
 *      package C.  Don't display any messages if there are no savings.  
 * 
 *      Add a validation for the number of hours in a given month
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
    const int MAX_HRS_JAN = 744,
              MAX_HRS_FEB = 672,
              MAX_HRS_MAR = 744,
              MAX_HRS_APR = 720,
              MAX_HRS_MAY = 744,
              MAX_HRS_JUN = 720,
              MAX_HRS_JUL = 744,
              MAX_HRS_AUG = 744,
              MAX_HRS_SEP = 720,
              MAX_HRS_OCT = 744,
              MAX_HRS_NOV = 720,
              MAX_HRS_DEC = 744;
    char package;
    int hours, monthN, hrsOver, MAX_HRS = 0;
    float cost, costB, costC = 19.95, savingsB, savingsC;
    string monthS;
    
    //Prompt user for which month we are determining usage
        cout << "Enter the month to determine usage: ";
        cin >> monthS;
        
        //Assign an integer value to monthN (month numeric) to use in the 
        //      switch statement within the monthly charge calculations.
        if (monthS == "January")
            monthN = 1;
        else if (monthS == "February")
            monthN = 2;
        else if (monthS == "March")
            monthN = 3;
        else if (monthS == "April")
            monthN = 4;
        else if (monthS == "May")
            monthN = 5;
        else if (monthS == "June")
            monthN = 6;
        else if (monthS == "July")
            monthN = 7;
        else if (monthS == "August")
            monthN = 8;
        else if (monthS == "September")
            monthN = 9;
        else if (monthS == "October")
            monthN = 10;
        else if (monthS == "November")
            monthN = 11;
        else if (monthS == "December")
            monthN = 12;
        else
            monthN = 13;
    
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
            
            //Assign the maximum hours for the month entered
            switch(monthN)
            {
                case 1  : MAX_HRS += MAX_HRS_JAN;
                break;
                case 2  : MAX_HRS += MAX_HRS_FEB;
                break;
                case 3  : MAX_HRS += MAX_HRS_MAR;
                break;
                case 4  : MAX_HRS += MAX_HRS_APR;
                break;
                case 5  : MAX_HRS += MAX_HRS_MAY;
                break;
                case 6  : MAX_HRS += MAX_HRS_JUN;
                break;
                case 7  : MAX_HRS += MAX_HRS_JUL;
                break;
                case 8  : MAX_HRS += MAX_HRS_AUG;
                break;
                case 9  : MAX_HRS += MAX_HRS_SEP;
                break;
                case 10 : MAX_HRS += MAX_HRS_OCT;
                break;
                case 11 : MAX_HRS += MAX_HRS_NOV;
                break;
                case 12 : MAX_HRS += MAX_HRS_DEC;
                break;
                default : cout << "Not a valid month\n";
                break;
            }
            
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
                if (monthN < 13)
                {
                    cout << "Hours cannot exceed " << MAX_HRS << "!";
                }
                break;
            }
                    
             
        case 'b' :
        case 'B' :  
            cout << "Enter hours used this month: ";
            cin >> hours;
            
            //Assign the maximum hours for the month entered
            switch(monthN)
            {
                case 1  : MAX_HRS += MAX_HRS_JAN;
                break;
                case 2  : MAX_HRS += MAX_HRS_FEB;
                break;
                case 3  : MAX_HRS += MAX_HRS_MAR;
                break;
                case 4  : MAX_HRS += MAX_HRS_APR;
                break;
                case 5  : MAX_HRS += MAX_HRS_MAY;
                break;
                case 6  : MAX_HRS += MAX_HRS_JUN;
                break;
                case 7  : MAX_HRS += MAX_HRS_JUL;
                break;
                case 8  : MAX_HRS += MAX_HRS_AUG;
                break;
                case 9  : MAX_HRS += MAX_HRS_SEP;
                break;
                case 10 : MAX_HRS += MAX_HRS_OCT;
                break;
                case 11 : MAX_HRS += MAX_HRS_NOV;
                break;
                case 12 : MAX_HRS += MAX_HRS_DEC;
                break;
                default : cout << "Not a valid month\n";
                break;
            }

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
                if (monthN < 13)
                {
                    cout << "Hours cannot exceed " << MAX_HRS << "! ";
                }
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

