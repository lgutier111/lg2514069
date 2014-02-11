/*
* File: main.cpp
* Author: Leo Gutierrez
* Assignment 5 Problem 2 
* Convert Mark_Sort_Database to use only pointer notation.
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
int *filAray(int *, int);
void prntAry(int *, int *, int, int);
void prntAry(int *, int, int);
void swap(int &, int &);
void minPos(int *, int*, int,int);
void mrkSort(int *, int *, int);

//Executions Begin Here!
int main() {
    //Declare variables and initialize the
    const int SIZE=200;
    int *array;
    int *index;
    
    //random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill the arrays
    array = filAray(index, SIZE);
    
    //Print the original unsorted array using the index.
    prntAry(array, index, SIZE, 10);
    
    //Test out the min pos routine
    mrkSort(array, index, SIZE);
    
    //Print the array sorted using the index.
    prntAry(array, index, SIZE, 10);
    
    //Print the array's indexes instead of the values.
    prntAry(index, SIZE, 10);

    //Print the original array unsorted. 
    prntAry(array, SIZE, 10);
        
    //Clear array
    delete [] array;
    
    //Exit Stage Right!!!
    return 0;
}

//Mark sort function called by main.  Sorts the array.
void mrkSort(int *a,int *indx,int n){
        
    for(int i = 0; i < n - 1; i++){
        minPos(a, indx, n, i);
    }
}

//This function is called by mrkSort.
//Find the minimum position in conjuction with the mrkSort function.
void minPos(int *a, int *indx, int n, int pos){
    for(int i = pos + 1; i < n; i++){
        if(*(a + *(indx + pos)) > *(a + *(indx + i)))
                swap(indx[pos], *(indx + i));
    }
}

//Function called by minPos function.  Swaps values.
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

//Function prntAry called by main.  Prints the array without using the
//index.
void prntAry(int *a, int n, int perLine){
        
    cout << endl;
    for(int i=0; i<n; i++){
        cout << *(a+i)<<" ";
        if(i%10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Function prntAry called by main.  Prints the array using the index.
void prntAry(int *a, int *indx, int n, int perLine){
    
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << *(a + *(indx+i)) << " ";
        if(i%10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Fills the array with 2 digit random numbers.
int *filAray(int *indx, int n){
    cout << " ";
    int *array = new int[n];
    for(int i = 0; i < n; i++){
        *(array + i) = rand() % 90 + 10;
        *(indx+i) = i;
    }
    
    return array;
}
