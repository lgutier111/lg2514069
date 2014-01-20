/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 25
 * Student Line Up - A teacher has asked all her students to line up single file
 *      according to their first name. For example, in one class Amy will be at
 *      the front of the line and Yolanda will be at the end. Write a program
 *      that prompts the user to enter the number of students  in the class, 
 *      then loops to read in that many names.  Once all the names have been
 *      read in it reports which student would be at the front of the line and
 *      which one would be at the end of the line.  You may assume that no two
 *      students have the same name.  
 * 
 *      !!!!!!!!!!!!!!!!!  MODIFY !!!!!!!!!!!!!!!!!!!!!!!!!
 *      Modify program 14 so that it gets the names from a file instead of user
 *      input.  Names should be read in until there is no more data to read.  
 *      Use file Friends.txt.
 * 
 * Created on January 20, 2014, 12:05 AM
 */

//System libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables
    string begLine, endLine;
    
    //Define the input file
    ifstream inFile;
    string name;
    
    //Open the file
    inFile.open("Friends.txt");
    
    //Read first record and initialize the beginning and ending names
    if (inFile)
    {
        inFile >> name;
        begLine = name;
        endLine = name;     
    }
    else
    {
        cout << "Error opening file Friends.txt\n";
    }
    
    //If the file is successfully opened, then process the file otherwise abend.
    //Begin loop - this loop will be bypassed if the user entered 1 for the
    //number of students.  The loop executes if they entered 2 or more.
    while (inFile >> name)
    {
        //Compare all subsequent names to the names stored in the begLine and
        //endLine variables.  
        if (begLine > name)
            begLine = name;
        else if (endLine < name)
                 endLine = name;
    }   
    //Close the input file
    inFile.close();
    
    //Display who is at the beginning of the line and at the end of the line
    cout << begLine << " is at the beginning of the line.\n";
    cout << endLine << " is at the end of the line.\n";
    
    //Hasta la vista, baby
    return 0;
}

