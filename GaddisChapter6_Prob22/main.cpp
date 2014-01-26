/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 22
 * isPrime Function - write a function name isPrime, which takes an integer as 
 *      an argument and returns true if the argument is a prime number, or 
 *      false otherwise.  Demonstrate the function in a complete program.
 *
 * Modify Problem 21 to write out all the primes from 1 to 100 to a file.  I 
 *      modified it to write all the primes from 1 to whatever the user puts
 *      in up to 100.  
 * Created on January 25, 2014, 11:56 PM
 */

//System libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
bool isPrime(int);                      //Function to return true or false

//Begin program
int main() {

    //Declare Variables
    int num;                            //Number to determine if it is prime
    bool outCome;                       //T if it is a prime, false if not
    
    //Prompt user for a number between 1 and 100
    cout << "Enter a number and I will tell you if it a prime number ";
    cout << "or not.\n";
    cout << "Give me a number between 1 and 100: ";
    cin >> num;
    
    //Validate user input.  Keep asking for a  valid number if not between
    // 1 and 100.
    while ((num < 0) || (num > 100))
    {
        cout << "Number must be between 0 and 100.\n";
        cout << "Please enter a number between 0 and 100: ";
        cin >> num;
    }
    
    //Call the function to determine whether the number is a prime number.
    outCome = isPrime(num);
    
    //Display the number is a prime number if the result from the function is
    //true.  Display the not is not a prime number if the result from the 
    //function is false.
    if (outCome == 1)
    {
        cout << "The number " << num << " is a prime number.\n";
        cout << "All the prime number from 1 to " << num << " have ";
        cout << "been written to file primes.txt\n";
        cout << "It is best viewed in Wordpad.";
    }
    else
    {
        cout << "The number " << num << " is not a prime number.\n";
        cout << "But... all the prime number between 1 and " << num;
        cout << " have been written to file primes.txt\n";
        cout << "It is best viewed in Wordpad";
    }
        
    //Exit Stage Left
    return 0;
}

//This function is to determine whether a number is a prime number or not.  It
//is called by the main() function.  
bool isPrime(int prime){
    
    //Declare Variables
    int numPrime,                 //Holds the result of the modulus division
          divYes = 0,             //divYes keeps a tally of evenly divisible
           divNo = 0;             //divNo keeps a tally of not evenly divisible
    int count;                    //loop counter
    bool result = true;           //The result to send back to main
    
    //Declare the file
    ofstream outFile1;
    outFile1.open("primes.txt");                //Open the data file
    
    //Loop the modulus division by the number of times the user had input.  
    //If the user entered 12, the loop would do the modulus division 12 times
    //keeping a tally of the result of each division.  If the divYes variable
    //counts more than 2 evenly divisible calculations, then the number is not
    //prime.  A prime number is only evenly divisible by 1 or itself.  Therefor
    //if the divYes counter <= 2, then the number is a prime number.  
    for (int loop = 1; loop <= prime; loop++)
    {
        //Must reset these values for each iteration of the inner loop
        divYes = 0;
        divNo = 0;
        
        //Loop for each number to determine if it is a prime. 1 up to whatever
        //was input by the user.
        for (count = 1; count <= loop; count++)
        {
            numPrime = loop % count;
            numPrime == 0 ? divYes++ : divNo++;
        }
    
        //If the number if evenly divisible calculations = 2, 
        //the number is a prime number.  
        divYes == 2 ? result = true : result = false;
        
        //If the number is a prime, write it out.
        if (divYes <= 2)
        {
            outFile1 << loop << endl;
        }
   }
    
   //Close the output file
   outFile1.close();
    
   //Return the boolean value to main
   return result;
}