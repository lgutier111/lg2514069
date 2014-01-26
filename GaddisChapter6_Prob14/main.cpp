/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 14
 * Overloaded Hospital - Write a program that computes and displays the changes
 *      for a patient's hospital stay.  First, the program should ask if the 
 *      patient was admitted as an in-patient or an outpatient. If the patient
 *      was an in-patient, the following data should be entered.
 * 
 *      Number of days spent in the hospital
 *      daily rate
 *      hospital medication charges
 *      charges for hospital services (lab tests, etc...)
 * 
 * For out-patient it should ask
 *      Charges for hospital services (lab tests...)
 *      Hospital medication charges
 * 
 * Should use two overloaded functions to calculate the total charges. One of
 *      the functions should accept arguments for the in-patient data, while
 *      the other function accepts arguments for out-patient information. Both
 *      functions should return the total charges.
 * 
 * input validation:  do not accept any negative numbers for any of the data
 *
 * Created on January 25, 2014, 8:02 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void getChoice (char &);                        //Selection menu
float hPatient(int, float, float, float);       //In patient function param
float hPatient(float, float);                   //Out patient function param

//Start program
int main() {

    //Declare variables
    char choice;
    int nDays;
    float dRate, medChg, srvcChg, totBill;
    
    //Prompt user for the patient services they wish to calculate
    cout << "\tPlease make your selection\n";
    cout << "\n";
    cout << "In-patient services\n";
    cout << "Out-patient services\n\n";
    getChoice(choice);                          //Call Function to get choice
    
    //Branch off to inpatient or outpatient functions depending on user input
    //(I) will calculate inpatient costs
    //(0) will calculate outpatient costs
    switch(choice)
    {
        //Prompt user for inpatient charges
        case 'i' : 
        case 'I' : 
            cout << "Enter number of days spent in the Hospital: ";
            cin >> nDays;
            while (nDays < 0)
            {
                cout << "Enter valid number of days." << endl;
                cout << "Enter number of days spent in the Hospital: ";
                cin >> nDays;
            }
        
            cout << "Enter the daily rate: ";
            cin >> dRate;
            while (dRate < 0)
            {
                cout << "Enter a valid daily rate." << endl;
                cout << "Enter the daily rate: ";
                cin >> dRate;
            }
            
            cout << "Enter the hospital med charges: ";
            cin >> medChg;
            
            while (medChg < 0)
            {
                cout << "Enter a valid hospital med charge." << endl;
                cout << "Enter the hospital med charges: ";
                cin >> medChg;
            }

            cout << "Enter the hospital services charges: ";
            cin  >> srvcChg;
            
            while (srvcChg < 0)
            {
                cout << "Enter a valid service charges " << endl;
                cout << "Enter the hospital services: ";
                cin >> srvcChg;
            }

            //Call the outpatient charge calculation function
            totBill = hPatient (nDays, dRate, medChg, srvcChg);
            break;
        
        //Prompt user for outpatient charges
        case 'o' :
        case 'O' : 
            cout << "Enter the hospital med charges: ";
            cin >> medChg;
            
            while (medChg < 0)
            {
                cout << "Enter a valid hospital med charge." << endl;
                cout << "Enter the hospital med charges: ";
                cin >> medChg;
            }

            cout << "Enter the hospital services charges: ";
            cin  >> srvcChg;
            
            while (srvcChg < 0)
            {
                cout << "Enter a valid service charges " << endl;
                cout << "Enter the hospital services: ";
                cin >> srvcChg;
            }
            
        //Call the outpatient charge calculation function
        totBill = hPatient (medChg, srvcChg);
        break;
    }
    //Display the total hospital charges from user input
    cout << setprecision(2) << fixed << showpoint;    
    cout << "Total hospital charges are: " << totBill << endl;
    
    //Exit stage left
    return 0;
}

//This function is called by main().  It calculates hospital costs for 
//inpatient treatment.  It returns the total cost.
float hPatient(int days, float rate, float medCost, float srvcCost){
    
    //Declare Variables
    float hspStay, totCost;
    
    hspStay = days * rate;
    totCost = hspStay + medCost + srvcCost;
 
    return totCost;
            
}

//This function is called by main().  It calculates hospital costs for 
//outpatient treatment.  It returns the total cost.
float hPatient(float medCost, float srvcCost){
    
    //Declare Variables
    float totCost;
    
    totCost = medCost + srvcCost;
    
    return totCost;
    
}

//This function is called by main to get the user's selection as to whether
//to process inpatient or outpatient hospital charges.
void getChoice(char &letter){
    
    //Get the users selection
    cout << "Enter (I) for Inpatient or (O) for Outpatient: " << endl;
    cin >> letter;
    
    //Validate the selection - keep asking user for a valid entry 
    while (letter != 'i' && letter != 'I' && 
           letter != 'o' && letter != 'O')
    {
        cout << "Please enter I or O: ";
        cin >> letter;
    }
}
