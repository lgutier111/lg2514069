/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 19
 * Stock Profit - Write a function that accepts as arguments the number of 
 *      shares, the purchase price per share, the purchase commission paid, 
 *      the sale price per share, and the sale commission paid. The function
 *      should return the profit (or loss) from the sale of stock.  Demonstrate
 *      the function in a program that asks the user to enter the necessary
 *      data and displays the amount of the profit or loss.
 *
 * Created on January 25, 2014, 10:48 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
float getProfit(int, float, float, float, float);

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    int NS;                             //Number of shares
    float SP,                           //Sale price per share
          SC,                           //Sales commission paid 
          PP,                           //Purchase price per share
          PC,                           //Purchase commission paid
    profLoss;                           //Profit or loss from sale of stock
    
    
    //Get the info for calculating the stock profit or loss from the user.
    //Prompt for number of shares sold
    cout << "Enter the number of shares: ";
    cin >> NS;
    
    //Validate entry - must be greater than 0
    while (NS < 0)
    {
        cout << "Enter a value greater than 0." << endl;
        cout << "Enter the number of shares: ";
        cin >> NS;
    }
    
    //Prompt for price per share sold
    cout << "Enter the price per share when sold: ";
    cin >> SP;
    
    //Validate entry - must be greater than 0
    while (SP < 0)
    {
        cout << "Enter a value greater than or equal to 0." << endl;
        cout << "Enter the price per share when sold: ";
        cin >> SP;
    }
    
    //Prompt for commission cost of shares sold
    cout << "Enter the commission cost when sold: ";
    cin >> SC;
    
    //Validate cost of commission sold.  Must be greater than 0.
    while (SC < 0)
    {
        cout << "Enter a value greater than or equal to 0." << endl;
        cout << "Enter the commission cost when sold: ";
        cin >> SC;
    }
    
    //Prompt for purchase price per share
    cout << "Enter the purchase price per share: ";
    cin >> PP;
    
    //Validate purchase price per share.  Must be greater than 0.
    while (PP < 0)
    {
        cout << "Enter a value greater than or equal to 0." << endl;
        cout << "Enter the purchase price per share: ";
        cin >> PP;
    }
    
    //Prompt purchase commission cost.
    cout << "Enter the purchase cost of commission: ";
    cin >> PC;
    
    //Validate purchase commission cost.
    while (PC < 0)
    {
        cout << "Enter a value greater than or equal to 0." << endl;
        cout << "Enter the purchase cost of commission: ";
        cin >> PC;
    }
    
    //Call function to get the profit or loss from sale of stock.
    profLoss = getProfit(NS, SP, SC, PP, PC);

    
    //Display the profit or loss from the sale of stock.
    cout << setprecision(2) << fixed << showpoint;
    if (profLoss < 0)
    {
        cout << "The loss on the sale of stocks is: " << profLoss << endl;
    }
    else
    {
        cout << "The profit on the sale of stocks is: $" << profLoss << endl;
    }
          
    
    //Exit stage left
    return 0;
}

//Function getProfit - this function calculates the profit or loss from the
//sale of stocks.  It is called by main() and user input is sent to it for
//determining the profit or loss.  It will return the value to main for display.
float getProfit(int nShares, float sPrice, float sComm, float pPrice, 
        float pComm){
    
    //Declare variables
    float result;
    
    result = ((nShares * sPrice) - sComm) - ((nShares * pPrice) + pComm);
    
    return result;
            
}
