#include <iostream>
#include <string>
#include <stdlib.h>
#include "Board.h"

using namespace std;

// Declaring functions to check input, flow through
// turns and check for a winner
void checkInput(int number);
void turns();
void checkWin();

// Declaring variables to determine game flow such as
// the player turn and if game has been won or is a draw
int playerTurn;
bool firstWin;
bool secondWin;
bool isDraw;

// Declaring player name variables
string playerOne;
string playerTwo;

// instantiating global object of Board class
Board b;

int main()
{
    // initializing global variables to default values
    bool firstWin = false;
    bool secondWin = false;
    bool isDraw = false;
    int playerTurn = 0;

    // Welcoming the user
    cout << "************************\n" << endl;
    cout << "Welcome to Tic-Tac-Toe!\n" << endl;
    cout << "************************\n" << endl;

    // Initializing player name variables before start of game
    cout << "Player One enter your name: ";
    cin >> playerOne;
    cout << "Player Two enter your name: ";
    cin >> playerTwo;

    // Initializing board with numbers for input
    b.one = "1", b.two = "2", b.three = "3", b.four = "4", b.five = "5",
    b.six = "6", b.seven = "7", b.eight = "8", b.nine = "9";

    // Calling displayBoard function from Board class
    b.displayBoard();

    // Starting turns
    turns();


    cout << "\nThanks for playing!" << endl;

    //system("cls");
    return 0;
}

// turns() determines if playerTurn variable is
// even or odd in order to filter the appropriate
// input on the board
void turns()
{
    int number = 0;
    {
        if (playerTurn % 2 == 0 && !firstWin && !secondWin && !isDraw)
        {
            b.displayBoard(); // Displays board right after setting "X" or "O"
            cout <<"Player " << playerOne <<"'s turn. Choose a number: ";
            cin >> number;
            checkInput(number);
            checkWin();
            playerTurn++;
            turns();
        }
        else if (playerTurn % 2 != 0  && !firstWin && !secondWin && !isDraw)
        {
            b.displayBoard(); // Displays board right after setting "X" or "O"
            cout <<"Player " << playerTwo <<"'s turn. Choose a number: ";
            cin >> number;
            checkInput(number);
            checkWin();
            playerTurn++;
            turns();
        }
    }
}

// checkInput() takes the player input and checks
// to see where on the board they would like to
// input their "X" or "O"
void checkInput(int number)
{
    if (playerTurn % 2 == 0)
    {
        switch (number)
        {
            case 1:
                b.one = "X";
                break;
            case 2:
                b.two = "X";
                break;
            case 3:
                b.three = "X";
                break;
            case 4:
                b.four = "X";
                break;
            case 5:
                b.five = "X";
                break;
            case 6:
                b.six = "X";
                break;
            case 7:
                b.seven = "X";
                break;
            case 8:
                b.eight = "X";
                break;
            case 9:
                b.nine = "X";
                break;
            default:
                cout << "Invalid input, press enter to try again." << endl;
                system("PAUSE");
                turns();
                break;
        }
    }
    else
    {
        switch (number)
        {
            case 1:
                b.one = "O";
                break;
            case 2:
                b.two = "O";
                break;
            case 3:
                b.three = "O";
                break;
            case 4:
                b.four = "O";
                break;
            case 5:
                b.five = "O";
                break;
            case 6:
                b.six = "O";
                break;
            case 7:
                b.seven = "O";
                break;
            case 8:
                b.eight = "O";
                break;
            case 9:
                b.nine = "O";
                break;
            default:
                cout << "Invalid input, press enter to try again." << endl;
                system("PAUSE");
                turns();
                break;
        }
    }
}

// Checks for a winner by check the variables in a
// horizontal, vertical, and diagonal order
void checkWin()
{
    // Check horizontal
    if ((b.one == b.two) && (b.one == b.three))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }
    else if ((b.four == b.five) && (b.four == b.six))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }
    else if ((b.seven == b.eight) && (b.seven == b.nine))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }

    // Check vertical
    else if ((b.one == b.four) && (b.one == b.seven))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }
    else if((b.two == b.five) && (b.two == b.eight))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }
    else if ((b.three == b.six) && (b.three == b.nine))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }

    // Check diagonal
    else if ((b.one == b.five) && (b.one == b.nine))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }
    else if ((b.three == b.five) && (b.three == b.seven))
    {
        firstWin = b.one == "X" ? true : false;
        secondWin = b.one == "O" ? true : false;
    }

    // Check if board is complete. if complete, the game is a draw
    else if (b.one != "1" && b.two != "2" && b.three != "3"
             && b.four != "4" && b.five != "5"  && b.six != "6"
             && b.seven != "7" && b.eight != "8" && b.nine != "9")
    {
        isDraw = true;
    }

    // Display corresponding message with bool variable if true
    if (firstWin) { cout << "Player " << playerOne << " wins!" << endl;}
    else if (secondWin) { cout << "Player " << playerTwo << " wins!" << endl;}
    else if (isDraw) { cout << "Game is a draw!" << endl;}
}






