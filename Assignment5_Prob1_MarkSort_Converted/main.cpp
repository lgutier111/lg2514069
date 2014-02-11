/*
* File: main.cpp
* Author: Leo Gutierrez
*
* Assignment 5 - Problem 1
* Convert Mark_Sort to dynamic allocation using only pointer notation
* 
* Created on February 3, 2014, 8:13 AM
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(int *,int,int);
void swap(int &,int &);
void swap(int *,int,int);
void minPos(int *,int,int);
void mrkSort(int *,int);
int *xcopy(const int *,int);

//Begin program
int main() {
    //Declare variables and initialize the
    const int SIZE=200;
    int *array;
    int *brray;
    
    //See random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill the arrays
    array = filAray(SIZE);
    brray = xcopy(array, SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test out the min pos routine
    mrkSort(brray,SIZE);
    
    //Print the array
    prntAry(brray,SIZE,10);
    
    //Clear array
    delete [] array;
    delete [] brray;
    
    //Exit Stage Right!!!
    return 0;
}

//Copy the A array to the B array
int *xcopy(const int *a, int n){
    int *brray = new int[n];
    for(int i = 0; i < n; i++){
        *(brray+i) = *(a+i);
    }
    
    return brray;
}

//Use the mark sort routine
void mrkSort(int *a,int n){
    for(int i = 0; i < n - 1; i++){
        minPos(a, n, i);
    }
}

//Find the min position for the mark sort routine.
void minPos(int *a, int n, int pos){
    for(int i = pos + 1; i < n; i++){
        if(a[pos] > *(a+i))
            swap(a[pos], *(a+i));
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

//Swap a and b
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

//Swap a and b
void swap(int *a,int i,int j){
    int temp=*(a+1);
    *(a+1)=*(a+j);
    *(a+j)=temp;
}

//Print the array
void prntAry(int *a,int n,int perLine){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << *(a+i) << " ";
        if(i % 10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Fill the A array with 2 Digit random numbers
int *filAray(int n){
    int *array = new int[n];
    for(int i = 0; i < n; i++){
        *(array+i) = rand() % 90 + 10;
    }
    
    return array;
}
