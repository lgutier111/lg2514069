/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 5 Problem 8
 * Math Tutor - Modify the program so it displays a menu allowing the user to
 *      select an addition, subtraction, multiplication, or division problem. 
 *      The final selection on the menu should let the user quit the program.
 *      After the user has finished the math problem, the program should
 *      display the menu again.  The process should be repeated until the user
 *      quits the program.  
 * 
 *      validation - if the user selects something not on the menu, it should
 *      display an error message and display the menu again.
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
    const int ADD = 1,
            SUBTRACT = 2,
            MULTIPLY = 3,
            DIVIDE = 4,
            QUIT = 5;
    
    int random1, random2, sumTotal, usrTotal, sumDiff;
    int select;
    float usrTotlD;
    
    
    //Create a menu with 5 choices.  
    do
    {
        //Display a menu
        cout << "\n\t\tMath Tutor\n\n"
             << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "5. Quit\n\n"
             << "Make a selection: ";
        cin >> select;
        
        //Validate menu selection
        while (select < ADD || select > QUIT)
        {
            cout << "Please enter a valid menu item: ";
            cin >> select;
        }
        
        //Set up for random number generator 
        unsigned seed = time(0);            //Get the system date
        srand(seed);                        //Seed the random number generator
    
        //Get two random generated numbers between 1 and 999
        random1 = 1 + rand() % 99;
        random2 = 1 + rand() % 99;
        
        //Process the user's selection
        switch(select)
        {
            case ADD: 
                //Display the sum to be solved
                cout<<"Add the following two numbers together"<<endl;
                cout<<" "<<right<<setw(2)<<random1;
                cout<<" + "<<right<<setw(2)<<random2;
                cout<<" = ";
                cin>> usrTotal;
    
                //Compute the sum 
                sumTotal = random1 + random2;
                break;
                
            case SUBTRACT:
                //Display the subtraction to be solved
                cout<<"Subtract the following two numbers together"<<endl;
                cout<<" "<<right<<setw(2)<<random1;
                cout<<" - "<<right<<setw(2)<<random2;
                cout<<" = ";
                cin>> usrTotal;

                //Compute the difference 
                sumTotal = random1 - random2;
                break;
                
            case MULTIPLY:
                //Display the multiplication to be solved
                cout<<"Multiply the following two numbers together"<<endl;
                cout<<" "<<right<<setw(2)<<random1;
                cout<<" x "<<right<<setw(2)<<random2;
                cout<<" = ";
                cin>> usrTotal;
                
                //Compute the product
                sumTotal = random1 * random2;
                break;
                
            case DIVIDE:
                //Display the division to be solved
                cout<<"Divide the following two numbers together"<<endl;
                cout<<" "<<right<<setw(2)<<random1;
                cout<<" / "<<right<<setw(2)<<random2;
                cout<<" = ";
                cin>> usrTotal;
        
                //Compute the division
                sumTotal = random1 / random2;
                break;
                
            case QUIT:
                cout << "\n\nThank you for playing!\n";
                cout << "Goodbye!\n";
                break;
        }
        
    
        //Compare the result with the user's answer
        sumDiff = usrTotal - sumTotal;
    
    
        //Determine if the sum is correct or not and display the 
        //corresponding message.  Test for QUIT to bypass messages below if
        //the user opts to QUIT.
        if ((sumDiff != 0) && (select != QUIT))
        {
            cout << "That is not the correct answer.\n";
            cout << "The correct answer is " << sumTotal << ".\n";
         }
        else if (select != QUIT)
        {
            cout << "Congratulations!  That is the correct answer.";
        }    
    } while (select != QUIT);
    
    //Exit stage left
    return 0;
}
