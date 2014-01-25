/* Chapter 6, Programming Challenge 2
 * 
 * Author:      Leo Gutierrez
 * Gaddis Chapter 6 Problem 2
 * Rectangle Area - Complete the program
 * Complete the program to ask the user to enter the width and length of a 
 *      rectangle, and then display the rectangle's area.  The program calls
 *      the following function, which have not been written.
 *      - getLength-should ask the user to enter the rectangle's length and
 *              then return the value as a double.
 *      - getWidth - should ask the user to enter the rectangle's width and
 *              then return the value as a double.
 *      - getArea - accept the length and width as arguments, and return the
 *              rectangle's area.  The area is calculated by multiplying the
 *              length by the width.
 *      - displayData - accept the rectangle's length and width and area as
 *              arguments, and display them in an appropriate message on the
 *              screen.
*/

//System libraries
#include <iostream>
using namespace std;

//Global constants

//Function Prototypes
double getLength(double);                       //Get the length of rectangle
double getWidth(double);                        //Get the width of rectangle
double getArea(double, double);                 //Compute area of rectangle
void displayData(double, double, double);       //Display all the data

//Begin program
int main(){
    //Declare variables
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
   
   double getL,              //Pass the length to function
          getW;              //Pass the width to function

          
   // Get the rectangle's length.
   length = getLength(getL);
   
   // Get the rectangle's width.
   width = getWidth(getW);
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
   
   //Exit stage left          
   return 0;
}

//Function getLength - used to get the length of the rectangle from the user
double getLength(double num1){
    //Prompt the user for the rectangle's length
    cout << "Enter the rectangle's length: ";
    cin >> num1;
    
    //Keep asking the user for a valid value.  The length must be positive.
    while (num1 <= 0)
    {
        cout << "The value must be greater than 0." << endl;
        cout << "Enter the rectangle's length: ";
        cin >> num1;
    }
    
    return num1;
}


//Function getWidth - used to get the width of the rectangle from the user
double getWidth(double num2){
    //Prompt the user for the rectangles width
    cout << "Enter the rectangle's width: ";
    cin >> num2;
    
    //Keep asking the user for a valid value.  The width must be positive.
    while (num2 <= 0)
    {
        cout << "The value must be greater than 0." << endl;
        cout << "Enter the rectangle's width: ";
        cin >> num2;
    }
    
    return num2;
}


//Function getArea - used to compute the area of the rectangle
double getArea(double num3, double num4){
    
    //Compute the area of the rectangle from values obtained in the getLength
    //and getWidth functions.  This will return the value of the rectangle.
    return num3 * num4;
}


//Function displayData - used to display the data on the screen.
void displayData(double num1, double num2, double num3){
    
    //Display the length, width and area of the rectangle.
    cout << "The length of the rectangle is: " << num1 << endl;
    cout << "The width of the rectangle is: " << num2 << endl;
    cout << "The area of the rectangle is: " << num3 << endl;
}
