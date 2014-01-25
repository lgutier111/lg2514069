/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 8
 * Coin Toss - Write a function named coinToss that simulates the tossing of a
 *      coin.  When you call the function, it should generate a random number
 *      in the range of 1 through 2.  If the random number is 1, the function
 *      should display "heads."  If the random number is 2, the function should
 *      display "tails."  Demonstrate the function in a program that asks the
 *      user how many times the coin should be tossed, and then simulates the
 *      tossing of the coin that number of times.
 *
 * Created on January 25, 2014, 12:41 PM
 */

//System libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void coinToss (int, int);           //Will generate a 1 or 2 for head or tails

//Begin program
int main() {

    //Declare variables
    const int MAX = 2;                  //Max number for random num generator
    
    int     tossIt;                     //Number of times to toss the coin 
            
    
    //Prime up the random number generator
    //Get the system time
    unsigned seed = time(0);
    //Seed the random number generator
    srand(seed);
    
    //Prompt the user as to how many times to toss the coin
    cout << "Enter the number of times to toss the coin (1 to 50 times): ";
    cin >> tossIt;

    //Put a limit of 1 - 50 times to toss the coin.  Keep asking for a valid
    //response until value is within these limits.
    while ((tossIt < 1) || (tossIt > 50))
    {
        cout << "Enter a number between 1 and 50." << endl;
        cout << "Enter the number of times to toss the coin (1 to 50 times): ";
        cin >> tossIt;
    }
    
    //Perform the function to toss the coin passing the number of times to
    //toss the coin and the limit on the random number generator.
    coinToss(tossIt, MAX);
    
    
    //Exit state left
    return 0;
}

void coinToss(int toss, int maxToss){
    
    int result;
    
    //Loop through the random number generator displaying the result each time
    //the coin is "tossed".  Display "Heads" when the number generated is 1 and
    //tails when it is 2.
    for (int count = 1; count <= toss; count++)
    {
        result = 1 + rand() % maxToss;
        if (result == 1)
            cout << "Heads!" << endl;
        else
            cout << "Tails!" << endl;
    }
            
}