/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 10
 * Lowest Score Drop - Write a program that calculates the average of a group
 *      of test scores, where the lowest score in the group is dropped.  It 
 *      should use the following functions:
 *      - void getScore() should ask the user for a test score, store it in a
 *              reference parameter variable, and validate it. This function 
 *              should be called by main once for each of the 5 test scores.
 *      - void calcAverage() should calculate and display the average of the 
 *              four highest test scores.  This function should be called just
 *              once by main, and should be passed the five scores.
 *      - int findLowest() should find and return the lowest of the five scores
 *              passed it.  It should be called by calcAverage, which uses the
 *              function to determine which of the five scores to drop.  
 *
 *  input validation - do not accept test scores < 0 or > 100.
 * Created on January 25, 2014, 5:34 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void getScore(int &);                       //Prompt for test score and validate
void calcAverage(int, int, int, int, int);  //Calc and display avg of scores
int findLowest(int, int, int, int, int);    //Find and return lowest score
char tScore;                                //Which test score

//Begin program
int main() {

    //Declare variables
    int testScr, testScr1, testScr2, testScr3, testScr4, testScr5;
    float avgScr;
           
    //Get a test score - call function to prompt for a test score
    //Do this 5 times and store the test scores in each variable
    for (int count = 1; count <= 5; count++)
    {
        tScore = count; 
        getScore(testScr);
        
        //When the function comes back it should assign the score that was
        //input by the user into one of the 5 score variables below.
        switch(tScore)
        {
            case 1 : testScr1 = testScr;
            break;
            case 2 : testScr2 = testScr;
            break;
            case 3 : testScr3 = testScr;
            break;
            case 4 : testScr4 = testScr;
            break;
            case 5 : testScr5 = testScr;
            break;
        }
    }
    
    //Calculate the average score
    calcAverage (testScr1, testScr2, testScr3, testScr4, testScr5);
   
    //Exit stage left
    return 0;
}


//This function is called by main().  It prompts the user for a test score 
//between 0 and 100.  Keep asking the user for valid input of the score is
//not between 0 and 100 and return the value of the score to the main function.
void getScore(int &score){
    
    //Prompt user for a test score
    
    do
    {
        cout << "Test score must be greater than 0 ";
        cout << "and less than 100\n";
        cout << "Enter a test score between 0 and 100: ";
        cin >> score;
    }while(score < 0 || score > 100);
}

// This function is called by main().  It calculates the average of 4 test
// scores after dropping the lowest one.  
void calcAverage(int s1, int s2, int s3, int s4, int s5){

    //Declare variable
    int lowScore;
    float average;
    
    //Call the findLowest() function to drop the lowest score.    
    lowScore = findLowest(s1, s2, s3, s4, s5);
    
    //Calculate the average of the 4 numbers
    average = (s1 + s2 + s3 + s4 + s5 - lowScore)/4.0;
    
    cout << setprecision(1) << fixed << showpoint;
    cout << "The average score of the 4 highest test scores is ";
    cout << average << ".\n";
}

//This function is called by calcAverage.  It is used to determin which score
//is the lowest.  After going through the if statements, the lowest score will
//be stored in score number 5 (s5).  This value is returned to calcAveerage by
//this function.
int findLowest (int s1, int s2, int s3, int s4, int s5){
    
    //Declare variable
    int temp, lowScore;
    
    //We need to drop the lowest score and take the average of the 4 highest
    //Once through all the if statement below, the lowest score will be in S5.
    
    //If score 1 is less than score 2 then swap values
    if (s1 < s2)
    {
        temp = s1;
        s2 = s1;
        s1 = temp;
    }            
    
    //If score 2 is less than score 3 then swap values
    if (s2 < s3)
    {
        temp = s2;
        s3 = s2;
        s2 = temp;
    }
    
    //If score 3 is less than score 4 then swap values
    if (s3 < s4)
    {
        temp = s3;
        s4 = s3;
        s3 = temp;
    }
    
    //if score 4 is less than score 5 then swap values
    if (s4 < s5)
    {
        temp = s4;
        s5 = s4; 
        s4 = temp;
    }
    
    //Assign the variable lowScore to s5 and return it to calcAverage function
    lowScore = s5;
    return lowScore;
 }