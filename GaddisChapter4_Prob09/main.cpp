/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 4 Problem 9
 * Math Tutor - This program will create two random numbers to be added
 *      together. The user will enter the answer and wait for a response 
 *      as to whether he/she's answer is correct.
 *
 * Created on January 15, 2014, 12:58 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>                      //To use rand and srand
#include <ctime>                        //To use the time fucntion
using namespace std;

//Global Constants

//Functional Prototypes

int main(int argc, char** argv) {

    //Declare Variables
    int random1, random2, sumTotal, usrTotal, sumDiff;
    
    unsigned seed = time(0);            //Get the system date
    srand(seed);                        //Seed the random number generator
    
    //Get two random generated numbers between 1 and 999
    random1 = 1 + rand() % 999;
    random2 = 1 + rand() % 999;
    
    //Display the sum to be solved
    cout<<"Add the following two numbers together"<<endl;
    cout<<"  "<<right<<setw(4)<<random1<<endl;
    cout<<"+ "<<right<<setw(4)<<random2<<endl;
    cout<<"____________"<<endl;
    cin>> usrTotal;
    
    //Compute the sum 
    sumTotal = random1 + random2;
    sumDiff = usrTotal - sumTotal;
    
    //Determine if the sum is correct or not and display the corresponding msg
    if (sumDiff != 0)
    {
        cout << "That is not the correct answer.\n";
        cout << "The correct answer is " << sumTotal << ".\n";
    }
    else
    {
        cout << "Congratulations!  That is the correct answer.";
    }    
    
    //Exit stage left
    return 0;
}
