/*
* File: main.cpp
* Author: Leo Gutierrez
* Assignment 5 Problem 5
* Convert Mark_Sort_Database to use only pointer notation.
* 
* Convert the Mark_Sort_Database program further to include an ADT.
* Created on February 3, 2014, 8:13 AM
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//ADT's no in user defined libraries
struct DynAry{                                  //Array structure
    int *data;
    int utlSize;
};

struct DynIry{                                  //index structure
    int *dataI;
    int utlSizeI;
};

//Function Prototypes
DynAry *filAray(const DynAry *, const DynIry *, int); 
void prntAry(const DynAry *, const DynIry *, int);
void prntIry(const DynIry *, int);
void prntAry(const DynAry *, int);
void swap(int &, int &);
void minPos(const DynAry *, const DynIry *, int, int);
void mrkSort(const DynAry *, const DynIry *);

//Executions Begin Here!
int main() {
    //Declare variables and initialize the
    const int SIZE=200;
    
    //random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and allocate memory for the structure
    DynAry *array = new DynAry;                         //array
    array->utlSize = SIZE;
    
    //Declare and allocate memory for the array
    array->data = new int[array->utlSize];              //array
    
    //Declare and allocate memory for the structure
    DynIry *index = new DynIry;                         //index
    index->utlSizeI = SIZE;
    
    //Declare and allocate memory for the array
    index->dataI = new int[index->utlSizeI];            //index
    
    //Fill the arrays
    filAray(array, index, SIZE);
    
    //Print the original unsorted array using the index.
    prntAry(array, index, 10);
    
    //Test out the min pos routine
    mrkSort(array, index);
    
    //Print the array sorted using the index.
    prntAry(array, index, 10);
    
    //Print the array's indexes instead of the values.
    prntIry(index, 10);

    //Print the original array unsorted. 
    prntAry(array, 10);
        
    //Clear array
    delete [] array;
    delete [] index;
    
    //Exit Stage Right!!!
    return 0;
}

//Mark sort function called by main.  Sorts the array.
void mrkSort(const DynAry *array, const DynIry *index){
    
    for(int i = 0; i < (array->utlSize - 1); i++){
        minPos(array, index, array->utlSize, i);
    }
}

//This function is called by mrkSort.
//Find the minimum position in conjuction with the mrkSort function.
void minPos(const DynAry *array, const DynIry *index, int n, int pos){
    for(int i = pos + 1; i < n; i++){
        if(array->data[index->dataI[pos]] > array->data[index->dataI[i]])
            swap(index->dataI[pos], index->dataI[i]);
    }
}
        
//Function called by minPos function.  Swaps values.
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

//Function prntIry called by main.  Prints the index array.
void prntIry(const DynIry *index, int perLine){
        
    cout << endl;
    for(int i = 0; i < index->utlSizeI; i++){
        cout << index->dataI[i] << " ";
        if(i%10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Function prntAry called by main.  Prints the array without using the
//index.
void prntAry(const DynAry *array, int perLine){
        
    cout << endl;
    for(int i = 0; i < array->utlSize; i++){
        cout << array->data[i] << " ";
        if(i%10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Function prntAry called by main.  Prints the array using the index.
void prntAry(const DynAry *array, const DynIry *index, int perLine){
    
    cout << endl;
    for(int i = 0; i < array->utlSize; i++){
        cout << array->data[index->dataI[i]] << " ";
        if(i%10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

//Fills the array with 2 digit random numbers.
DynAry *filAray(const DynAry *array, const DynIry *index, int n){

    for(int i = 0; i < array->utlSize; i++){
        array->data[i] = rand() % 90 + 10;
        index->dataI[i] = i;
    }    
}
