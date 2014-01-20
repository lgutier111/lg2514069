/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 9
 * Hotel Occupancy - Write a program that calculates the occupancy rate for a
 *      hotel.  The program should start by asking the user how many floors 
 *      the hotel has.  A loop should then iterate once for each floor.  In 
 *      each iteration, the loop should ask the user for the number of rooms
 *      on the floor and how many of them are occupied.  After all the 
 *      iterations, the program should display how many rooms the hotel has,
 *      how many of them are occupied, how many are unoccupied and the 
 *      percentage of rooms that are occupied.  The percentage may be calculated
 *      by dividing the number of rooms occupied by the number of room.
 * 
 *      skip the 13th floor as most hotels do not have a 13th floor
 * 
 *      validate - Do not accept a number less than 1 for number of floors.  
 *      Do not accept a number less than 10 for the number of rooms on a floor.
 *
 * Created on January 19, 2014, 10:44 PM
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
    const int MIN_FLS = 1, MIN_RMS = 10;
    int floors, numRooms = 0, occRooms = 0, totRooms = 0, 
            totOccup = 0, totUnocc = 0;
    float occRate;
    
    //Prompt the user how many floors in the hotel
    do
    {
        cout << "How many floors in the hotel: ";
        cin >> floors;
    } while (floors < MIN_FLS);
    
    //Declare count in for loop and accumulate totals for each iteration
    for (int count = 1; count <= floors; count++)
    {
        //Check for floor 13. Skip over it if the number of floors is over 13.
        if (count == 13)
            continue;
        //Continue loop with each floor
        do
        {
            cout << "How many rooms on floor " << count << "?  ";
            cin >> numRooms;
        } while (numRooms < MIN_RMS);
        
        do
        {
        cout << "How many of those room are occupied?  ";
        cin >> occRooms;
        } while (occRooms > numRooms);
        
        totRooms += numRooms;
        totOccup += occRooms;
    }

    //Calculate the number of unoccupied rooms and the occupancy rate of
    //the hotel.
    totUnocc = totRooms - totOccup;
    occRate = (static_cast<float>(totOccup)/totRooms)*100;
    
    //Display the occupancy rate of the hotel
    cout << setprecision(1) << fixed;
    cout << "The number of rooms in the hotel is: " << totRooms << endl;
    cout << "The number of rooms occupied is: " << totOccup << endl;
    cout << "The number of unoccupied rooms is: " << totUnocc << endl;
    cout << "The current occupancy rate is: " << occRate << "%" << endl;
    
    //Exit stage left
    return 0;
}

