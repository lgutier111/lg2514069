/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 12
 * Bank Charges - This program will ask the user the beginning balance and 
 *      the number of checks written and compute and display the bank fees.
 *
 * Created on January 17, 2014, 10:33 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    const float acctFee = 10.0, xtraFee = 15.0, LOWBAL = 400.0;
    int numCks, xtraFlg, numCksV;
    float begBal, ckFee, remBal;
    float totalFee = 0.0;                       //initialize total fee
    
    //Ask the user for the beginning balance
    cout << "Please enter your beginning balance: \n";
    cin >> begBal;
    
    //Warn the user if the balance is less than 0
    if (begBal < 0)
    {
        cout << "\n\n*** URGENT!  YOUR ACCOUNT IS OVERDRAWN! ***\n\n";
    }
    
    //Ask the user to enter the number of checks written
    cout << "Please enter the number of check written this month: ";
    cin >> numCks;
    
    //Validate checks input.  If less than 0, it is invalid and set flag
    numCksV = (numCks < 0);
    
    //Begin computing checking account fees
    totalFee += acctFee;                        //Add monthly fee
    if (begBal < LOWBAL)
    {
        totalFee += xtraFee;
        xtraFlg = (begBal < LOWBAL);            //Flag on if Lowbal fee charged
    }
    else
    {
        xtraFlg = 0;                            //Flag off if bal >= 400.00
    }
    
    //Calculate the check fees
    if (numCks < 20)
    {
        ckFee = numCks * 0.10;
    }
    else if (numCks >= 20 && numCks < 40)
    {
        ckFee = numCks * 0.08;
    }
    else if (numCks >= 40 && numCks < 60)
    {
        ckFee = numCks * 0.06;
    }
    else
    {
        ckFee = numCks * 0.04;
    }
        
    //Add check fees to total monthly bank fees
    totalFee += ckFee;                          //total fees
    remBal = begBal - totalFee;                 //remaining balance
    
    //Display total fees 
    cout << setprecision(2) << fixed << showpoint;
    if (numCksV == 1)                           //Check for negative checks num
    {
        cout << "Negative numbers are not allowed for number of checks.\n";
    }
    else
    {
        cout << setw(25) << "Beginning balance: " << setw(20) << begBal 
             << endl;
        cout << setw(25) << "Monthly checking fee: " << setw(10) << acctFee
             << endl;
        if (xtraFlg == 1)
        {            
            cout << setw(25) << "Low balance fee: " << setw(10) << xtraFee 
                 << endl;
        }
        else
        {
            cout << setw(25) << "Low balance fee: " << setw(10) << 0.0
                 << endl;
        }
        cout << setw(25) << "Checks written fee: " << setw(10) << ckFee 
             << endl;
        cout << setw(25) << "Total fees: " << setw(20) << totalFee
             << endl;
        cout << setw(25) << "Balance after fees: " << setw(20) << remBal
             << endl;
    }
                
        
    //Exit stage left
    return 0;
}

