/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 15
 * Math Tutor - This program will create two random numbers to be added
 *      together and then pause and wait for the user to hit a key on 
 *      the keyboard and it will display the answer.
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
    int random1, random2, sumTotal;
    
    //Get the system time.
    unsigned seed = time(0);
    
    //Seed the random number generator
    srand(seed);
    
    //Get two random generated numbers
    random1 = 1 + rand() % 999;
    random2 = 1 + rand() % 999;
    
    //Display instruction to user along with the sum
    cout<<"Add the following two numbers together"<<endl;
    cout<<"When you are ready hit <Enter> key for the answer"<<endl<<endl;
    cout<<"  "<<right<<setw(4)<<random1<<endl;
    cout<<"+ "<<right<<setw(4)<<random2<<endl;
    cout<<"____________"<<endl;
    
    //Pause here and wait for the user to hit the ENTER key
    cin.get();
    
    //Complete the sum and display the answer for the user after ENTER key 
    //is pressed.
    sumTotal = random1 + random2;
    cout<<"  "<<setw(4)<<sumTotal<<endl;
    
    //Exit stage left
    return 0;
}

