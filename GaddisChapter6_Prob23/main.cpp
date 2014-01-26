/* 
 * File:   main.cpp
 * Author: Leo Gutierrez
 * Gaddis 7th Edition Chapter 6 Problem 23
 * Rock, Paper, Scissors - Write a game for rock, paper, scissors.  
 *      1. Get a random number for computer's choice.
 *      2. Get user input for their choice.
 *      3. Display the computer's choice
 *      4. Determine the winner
 *              Rock beats Scissors
 *              Paper beats Rock
 *              Scissors beats Paper
 *
 * Created on January 26, 2014, 11:30 AM
 */

//System libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int getAutoChoice ();                   //Get random number for choice
int getUsrChoice ();                    //Get user input for choice
int getWinner (int, int);               //Determine the winner

//Begin program
int main() {
    
    //Declare variables
    int aChoice, uChoice;                       //Auto choice and user choice
    string lChoice;                             //Literal choice
    int playOver = 0;                           //Value from getWinner function
    int player1, player2;                       //Player1 - PC, Player2 - user.
    
    //Will keep playing the game as long as the result is a tie.  Game will 
    //stop when there is a winner.
    do
    {
        //Get a random number from function
        player1 = getAutoChoice ();
    
        //Get user input for choice
        player2 = getUsrChoice ();
    
        //Display both choices
        if (player1 == 1)
            lChoice = "Rock";
        else if (player1 == 2)
            lChoice = "Paper";
        else 
            lChoice = "Scissors";
        cout << "\nThe computer chose: " << lChoice << ".\n";
    
        if (player2 == 1)
            lChoice = "Rock";
        else if (player2 == 2)
            lChoice = "Paper";
        else 
            lChoice = "Scissors";
        cout << " ... and you chose: " << lChoice << ".\n";
    
        //Go to function and display winners.  If playOver comes back 
        //with a 0 it means the game was a tie and we will play again. 
        //A 1 means somebody won the game and the game will stop.
        playOver = getWinner(player1, player2);
    }while (playOver != 1);
    
    
    //Exit stage left
    return 0;
}

//This function is called by main().  It will get a random number from 1 to 3 
//and return the value to main.
int getAutoChoice (){
        
    //Declare variables
    int select;
    
    //Get the system time.
    unsigned seed = time(0);
    //Seed the random number generator.
    srand(seed);
    
    //Get a random number between 1 and 3
    select = 1 + rand() % 3;
    
    //Exit function
    return select;
}

//This function is called by main(). It is used to get the user input for 
//1. Rock, 2. Paper or 3. Scissors and return the value to main.
int getUsrChoice (){
    
    //Declare variables
    int select;
    
    //Display a menu
    cout << "\tRocks, Paper, Scissors!!!\n";
    cout << "\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "\n";
    cout << "Select 1, 2 or 3: ";
    cin >> select;
    
    while ((select < 1 || select > 3))
    {
        cout << "*** Choice needs to be 1, 2 or 3 only ***\n";
        cout << "***         Please try again          ***\n";
        cout << "\n";
        cout << "Select 1, 2, or 3: ";
        cin >> select;
    }
    
    return select;
}

//This function is called by main().  It is used to determine the winner of
//the game.  The values of the getAutoChoice function and the getUsrChoice
//functions are passed here.  After going through the 3 sets of if statements
//either a winner will declared or a tie in which this function will return
//a 0 to main to continue playing the game.  It will return a 1 if there is a
//winner.
int getWinner(int autoC, int usr){
    
    //Declare variables
    char winner;                        //a = auto, u = user, x = no winner
    string champ;                       //winner's name (me or you))
    int result;                         //return value to main to determine
                                        //whether to play again.
    
    //Who's the winner?  Go through statements to determine the winner
    if (autoC == 1)                             //Rock
    {
        if (usr == 2)                           //Rock vs Paper
        {
            winner = 'u';
            champ = "you";
        }
        else if (usr == 3)                      //Rock vs Scissors
        {
            winner = 'a';
            champ = "me";
        }
        else                                    //Rock vs Rock
        {
            winner = 'x';
        }
    }
        
    if (autoC == 2)                             //Paper
    {
        if (usr == 1)                           //Paper vs Rock
        {
            winner = 'a';
            champ = "me";
        }
        else if (usr == 2)                      //Paper vs Paper
            winner = 'x';
        else                                    //Paper vs Scissors
        {
            winner = 'u';
            champ = "you";
        }
    }
    
    if (autoC == 3)                             //Scissors
    {
        if (usr == 1)                           //Scissors vs Rock
        {
            winner = 'u';
            champ = "you";
        }
        else if (usr == 2)                      //Scissors vs Paper
        {
            winner = 'a';
            champ = "me";
        }
        else                                    //Scissors vs Scissors
            winner = 'x';
    }   
   
    //Display the winner or if it is a tie.  Return the result to main to stop
    //or keep playing. 
    switch (winner)
    {
        case 'a' : cout << "The winner is " << champ << "." << endl;
                   result = 1;
                   break;
        case 'u' : cout << "The winner is " << champ << "." << endl;
                   result = 1;
                   break;
        case 'x' : cout << "There was no winner!!!  We'll play again.\n";
                   result = 0;
                   break;
    }
    
    return result;
}
