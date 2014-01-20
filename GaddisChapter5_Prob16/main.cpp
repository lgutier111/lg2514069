/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 16
 * Savings Account Balance - Write a program that calculates the balance of a 
 *      savings account at the end of a period of time.  It should ask the user
 *      for the annual interest rate, the starting balance, and the number of
 *      months that have passed since the account was established.  A loop 
 *      should then iterate once for every month, performing the following:
 *      A) Ask the user for the amount deposited into the account during the
 *         month. (Do not accept negative numbers). This amount should be added
 *         to the balance.  
 *      B) Ask the user for the amount withdrawn from the account during the 
 *         month.  (Do not accept negative numbers.)  This amount should be 
 *         subtracted from the balance.  
 *      C) Calculate the monthly interest.  The monthly interest rate is the 
 *         annual interest rate divided by twelve.  Multiply the monthly 
 *         interest rate by the balance, and add the result to the balance.
 * 
 * After the last iteration, the program should display the ending balance, 
 *      the total amount of deposits, the total amount of withdrawals, and the
 *      total interest earned.  
 * 
 * if a negative balance is ever displayed then a message indicating that the
 * account has been closed and the loop should terminate.
 *
 * Created on January 20, 2014, 1:00 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare and initialize variables
    float APR = 0.0,                            //Annual percentage rate
          begBal = 0.0,                         //Beginning balance
          amtDep = 0.0,                         //Deposit amount
          amtWdraw = 0.0,                       //Withdrawal amount
          balance = 0.0,                        //running balance
          accumD = 0.0,                         //Deposit accumulator
          accumW = 0.0,                         //Withdrawal accumulator
          accumI = 0.0;                         //Interest accumulator
    float iRate, amtI;          //Monthly interest rate and amount of interest
    int numMnths;                               //Number of months to calculate
    
    //Prompt user for APR. APR must be greater than 0.
    do
    {
        cout << "Please enter APR for this account ( > 0 ): ";
        cin >> APR;
    } while (APR < 0);
    
    //Calculate the monthly interest rate 
    iRate = (APR / 12.0)/100.0;
    
    //Prompt user for the starting balance. Beg balance must be > 0.
    do 
    {
        cout << "Please enter the starting balance ( > 0 ): ";
        cin >> begBal;
    } while (begBal < 0);
   
    //Initialize beginning balance
    balance = begBal;
    
    //Prompt user for the number of months since the account was established.
    //  Number of months must be greater than 0.
    do
    {
        cout << "Enter the number of months the account has been open: ";
        cin >> numMnths;
    } while (numMnths < 0);
    
    //Begin loop for the number of months the user entered.
    for (int count = 1; count <= numMnths; count++)
    {
        //Prompt the user for the amount deposited
        do
        {
            cout << "Deposit amount (must be > 0) for month "<<count<<": ";
            cin >> amtDep;
        } while (amtDep < 0);
        
        //Add deposits to balance
        balance += amtDep;
        
        //Prompt the user for the amount withdrawal
        do
        {
            cout << "Withdrawal amount (must be > 0) for month "<<count<<": ";
            cin >> amtWdraw;
        } while (amtWdraw < 0);
        
        //Subtract withdrawals from balance
        balance -= amtWdraw;
                
        //Calculate the interest and accumulators
        accumD += amtDep;
        accumW += amtWdraw;
        amtI = iRate * balance;
        accumI += amtI;
        balance += amtI; 
        
        //Check for a negative balance at any point.  Exit the loop if the
        //balance falls below zero on any iteration.
        if (balance < 0)
        {
            count = numMnths + 1;
        }
    }
    
    //Display balances or negative balance message
    //If the balance is 0, display the "account is closed" message, otherwise
    //display the balances.  
    if (balance < 0)
    {
        cout << " \n";
        cout << "You have a negative balance.  The account is closed.\n";
    }
    else
    {
        cout << setprecision(2) << fixed << showpoint;
        cout << " \n";
        cout << setw(35) << "The balance on the account: $" << 
                setw(8) << balance << endl;
        cout << setw(35) << "The total amount of deposits: $" << 
                setw(8) << accumD << endl;
        cout << setw(35) << "The total amount of withdrawals: $" << 
                setw(8) << accumW << endl;
        cout << setw(35) << "The total amount of interest: $" << 
                setw(8) << accumI << endl;
    }
   
    //Hasta la vista...
    return 0;
}

