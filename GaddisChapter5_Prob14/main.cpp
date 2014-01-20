/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 14
 * Student Line Up - A teacher has asked all her students to line up single file
 *      according to their first name. For example, in one class Amy will be at
 *      the front of the line and Yolanda will be at the end. Write a program
 *      that prompts the user to enter the number of students  in the class, 
 *      then loops to read in that many names.  Once all the names have been
 *      read in it reports which student would be at the front of the line and
 *      which one would be at the end of the line.  You may assume that no two
 *      students have the same name.  
 * 
 *      validation - do not accept a number less than 1 or greater than 25 for
 *      the number of students.
 *
 * Created on January 20, 2014, 12:05 AM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    string name, begLine, endLine;
    int numStds, count;
    
    //Prompt user for the number of students they are going to enter
    //Keep asking if the number of students is not between 1 and 25
    do
    {
        cout << "How many students (between 1 and 25)? ";
        cin >> numStds;
    } while ((numStds < 1) || (numStds > 25));
    
    //Initialize the student list by populating both beginning and ending
    //names with the first name
    cout << "Enter a student name: ";
    cin >> name;
    begLine = name;
    endLine = name;
            
    //Begin loop - this loop will be bypassed if the user entered 1 for the
    //  number of students.  The loop executes if they entered 2 or more.
    for (count = 2; count <= numStds; count++)
    {
        //Prompt for a name
        cout << "Enter a student name: ";
        cin >> name;
        
        //Compare all subsequent names to the names stored in the begLine and
        //   endLine variables.  
        if (begLine > name)
            begLine = name;
        else if (endLine < name)
            endLine = name;
        
    }
    
    //Display who is at the beginning of the line and at the end of the line
    cout << begLine << " is at the beginning of the line.\n";
    cout << endLine << " is at the end of the line.\n";
    
    //Hasta la vista, baby
    return 0;
}

