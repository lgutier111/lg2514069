/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 21
 * Random Number Guessing Game Enhancement - Write a program that generates a
 *      random number and asks the user to guess what the number is.  If the
 *      user's guess is higher than the random number, the program should 
 *      display "Too high, try again."  If the user's guess is lower than the
 *      random number, the program should display "Too low, try again."  The
 *      program should use a loop that repeats until the user correctly guesses
 *      the random number.
 *
 *      Enhancement - Keep a count of the number of guesses that the user 
 *      makes.  When the user correctly guesses the random number, the program
 *      should display the number of guesses.  
 * 
 * Created on January 20, 2014, 10:24 AM
 */

//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    int tally = 0, guess, rndm;
    
    //Get the system date for the random number
    unsigned seed = time(0);
    
    //Seed the random number generator
    srand(seed);
    
    //Set the random number limit to 100
    rndm = 1 + rand() % 100;
    
    //Prompt the user to guess a number between 1 and 100 and tally the 1st
    //  guess.
    cout << "\n\t\tNumber Guessing Game\n\n";
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    tally++;
    
    //Loop until the correct number is guessed.  Keep a running tally of the
    //  number of guesses that have been taken.
    do
    {
        if (guess > rndm)
        {
            cout << "Too high, try again.  \n";
            tally++;
        }
        else if (guess < rndm)
        {
            cout << "Too low, try again.  \n";
            tally++;
        }
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
    } while (guess != rndm);
    
    //Display the number along with the number of guesses when the user has
    //  successfully guessed the number.
    cout << "\nYou guessed it!  The number was " << rndm << ".\n";
    cout << "You took " << tally << " guesses.";
    
    //Exit stage left
    return 0;
}

