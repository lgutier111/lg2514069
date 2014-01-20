/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 2
 * Characters for the ASCII codes - Write a program that uses a loop to
 *      display the characters for the ASCII codes 0 through 127.  Display 16
 *      characters on each line.
 * 
 *
 * Created on January 19, 2014, 7:36 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    char ASCII;
    int disChar = 0, endChar = 127, count = 1;
    
    //Loop 127 times to display the 127 ASCII code characters and display
    //  16 characters per line.
    for (disChar; disChar <= endChar; disChar++)
    {
        ASCII = disChar;
        cout << ASCII;
        
        // If the line count is = 16, then print a return character to start
        // on the next line.  At 16, reset the counter and start counting 
        // again until it reaches 16 until the for loop has complete finished.
        if (count == 16)            
        {
            cout << " \n";
            count = 1;
        }
        else
        {
            count++;
        }
    }
    
    //Exit Stage Left
    return 0;
}

