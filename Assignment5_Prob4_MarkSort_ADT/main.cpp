/*
* File: main.cpp
* Author: Leo Gutierrez
* Assignment 5 - Problem 4
* Created on February 3, 2014, 8:13 AM
* 
* Re-write markSort using pointer notation
*
* Re-write the markSort modification from problem 1 to use ADT
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//ADT's not in user defined libraries
struct DynAry{                                  // A array structure
    int *data;
    int utlSize;
};

struct DynBry{                                  // B array structure
    int *dataB;
    int utlSizeB;
};

//Function Prototypes
DynAry *fillAry(int);                           //Dynamic allocation with ADT
void prntAry(const DynAry *, int);
void prntBry(const DynBry *, int);
void swap(int &,int &);
void swap(int *,int,int);
void minPos(int *,int,int);
void mrkSort(const DynBry *);
DynBry *xcopy(const DynAry *, int);             //Dynamic allocation with ADT

//Executions Begin Here!
int main() {
    //Declare variables and initialize the
    const int SIZE=200;
    
    //See random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill the arrays
    DynAry *aAry = fillAry(SIZE);
    DynBry *bAry = xcopy(aAry, SIZE);
    
    //Print the array
    prntAry(aAry, 10);
    
    //Test out the min pos routine
    mrkSort(bAry);
    
    //Print the array
    prntBry(bAry, 10);
    
    //Clear array
    delete [] aAry;
    delete [] bAry;
    
    //Exit Stage Right!!!
    return 0;
}

DynBry *xcopy(const DynAry *a, int n){
    
    //Declare and allocate memory for the structure
    DynBry *b = new DynBry;
    b->utlSizeB = n;
    
    //Declare and allocate memory for the array
    b->dataB = new int[b->utlSizeB];
    
    //Fill the array with array
    for(int i = 0; i < b->utlSizeB; i++){
        b->dataB[i] = a->data[i];
    }
    
    return b;
}

void mrkSort(const DynBry *b){
    
    for(int i = 0; i < (b->utlSizeB - 1); i++){
        minPos(b->dataB, b->utlSizeB, i);
    }
}

void minPos(int *b, int n, int pos){
    for(int i = pos + 1; i < n; i++){
        if(b[pos] > *(b+i))
            swap(b[pos], *(b+i));
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(int *a,int i,int j){
    int temp=*(a+1);
    *(a+1)=*(a+j);
    *(a+j)=temp;
}

void prntAry(const DynAry *a, int perLine){
    
    cout << endl;
    for(int i = 0; i < a->utlSize; i++){
        cout << a->data[i] << " ";
        if(i % 10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
}

void prntBry(const DynBry *b, int perLine){
    
    cout << endl;
    for(int i = 0; i < b->utlSizeB; i++){
        cout << b->dataB[i] << " ";
        if(i % 10 == (perLine - 1))
            cout << endl;
    }
    cout<<endl;
    
}

DynAry *fillAry(int n){
    
    //Declare and allocate memory for the structure
    DynAry *a = new DynAry;
    a->utlSize = n;
    
    //Declare and allocate memory for the array
    a->data = new int[a->utlSize];
    
    //Fill the array with array
    for (int i = 0; i < a->utlSize; i++){
        a->data[i] = rand() % 90 + 10;
    }
    
    //Return the pointer to the structure
    return a;
}