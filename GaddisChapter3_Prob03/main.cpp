/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 3
 * Test Average - This program will ask user for 5 test scores and 
 * calculate the average.  
 *
 * Created on January 14, 2014, 9:54 PM
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
    float score1, score2, score3, score4, score5, avg;
   
    //Ask the user for test scores
    cout<<"Please enter test score 1: "<<endl;
    cin>>score1;
    cout<<"Please enter test score 2: "<<endl;
    cin>>score2;
    cout<<"Please enter test score 3: "<<endl;
    cin>>score3;
    cout<<"Please enter test score 4: "<<endl;
    cin>>score4;
    cout<<"Please enter test score 5: "<<endl;
    cin>>score5;
    
    //Calculate the average test score
    avg=(score1 + score2 + score3 + score4 + score5) / 5;
    
    //Display the average score
    cout<<setprecision(1)<<fixed;
    cout<<"The average test score is: "<<avg<<endl;
    
            
    //Exit stage left
    return 0;
}

