/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 3 Problem 22
 * Word Game - Display a story based on the user's input.
 *
 * Created on January 15, 2014, 9:02 AM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Functional Prototypes

//Begin program
int main(int argc, char** argv) {

    //Declare variables where
    //          fName = first name only
    //          city = the name of any city
    //          college = the name of any college
    //          prof = a profession
    //          animal = a type of animal
    //          petName = the name of a pet
    string fName, city, college, prof, animal, petName;
    int age;
        
    //Get input from user for the story
    cout<<"Enter your first name: "<<endl;
    getline(cin,fName);
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cin.ignore();
    cout<<"Enter the name of any city: "<<endl;
    getline(cin,city);
    cout<<"Enter the name of any college: "<<endl;
    getline(cin,college);
    cout<<"Enter a profession: "<<endl;
    getline(cin,prof);
    cout<<"Enter a type of animal: "<<endl;
    getline(cin,animal);
    cout<<"Enter a pet's name: "<<endl;
    getline(cin,petName);
    
    //Display the story
    cout<<"There was once a person named "<<fName<<" who lived in "<<city;
    cout<<".  At the age of "<<endl;
    cout<<age<<", "<<fName<<" went to college at ";
    cout<<college<<".  "<<fName<<" graduated and went to work"<<endl;
    cout<<"as a "<<prof<<".  Then, "<<fName<<" adopted a(n) "<<animal;
    cout<<" named "<<petName<<".  They both"<<endl;
    cout<<"lived happily ever after!"<<endl;
    
    //Exit stage left
    return 0;
}

