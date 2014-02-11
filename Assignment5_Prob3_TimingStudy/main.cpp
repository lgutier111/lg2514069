/*
* File: main.cpp
* Author: Leo Gutierrez
* Assignment 5 Problem 3
* Change this code to use a bubble sort and a selection sort and plot
* how long the sort takes in comparison to other sorts.
* 
* Created on February 3, 2014, 8:13 AM
* 
*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
void swap(int &,int &);
void swap(int [],int,int);
void minPos(int [],int,int);
void mrkSort(int [],int);
void bubSort(int [],int);
void selSort(int [],int);
void xcopy(const int [],int [],int);

//Executions Begin Here!
int main() {
    //Open a file to record the data
    ofstream output;
    output.open("TimeStudy.dat");
    
    //Declare variables and initialize the
    //random number generator
    const int SIZE=150000;
    int array[SIZE],brray[SIZE];
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill the arrays
    filAray(array,SIZE);
    
    //Print the array
    //prntAry(array,SIZE,10);
    //Test out the min pos routine
    for(int size=10000;size<SIZE;size+=10000){
        xcopy(array,brray,size);
        int strTime=time(0);
//      mrkSort(brray,size);
//      bubSort(brray,size);
        selSort(brray,size);        
        int endTime=time(0);
        cout<<"Total Time Taken = "<<endTime-strTime
                <<" secs for array size = "<<size<<endl;
        output<<size<<" "<<endTime-strTime<<endl;
    }
    
    //Print the array
    //prntAry(brray,SIZE,10);
    //Exit Stage Right!!!
    output.close();
    return 0;
}

void xcopy(const int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
}

void mrkSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        minPos(a,n,i);
    }
}

void bubSort(int a[], int n){
    bool swap;
    int temp;
    
    do{
        swap = false;
        for (int count = 0; count < (n - 1); count++)
        {
            if (a[count] > a[count + 1])
            {
                temp = a[count];
                a[count] = a[count + 1];
                a[count + 1] = temp;
                swap = true;
            }
        }
    }while (swap);
}

void selSort (int a[], int n){
    int startScan, minIndex, minValue;
    
    for (startScan = 0; startScan < (n - 1); startScan++)
    {
        minIndex = startScan;
        minValue = a[startScan];
        for (int index = startScan + 1; index < n; index++)
        {
            if (a[index] < minValue)
            {
                minValue = a[index];
                minIndex = index;
            }
        }
        a[minIndex] = a[startScan];
        a[startScan] = minValue;
    }
}

void minPos(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
        //if(a[pos]>a[i])swap(a,pos,i);
    }
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%10==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//2 Digit random numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}