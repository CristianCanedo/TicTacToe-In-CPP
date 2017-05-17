#include "Board.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Board::Board()
{
    //ctor
}

void Board::displayBoard()
{
    system("cls"); // Clearing the screen every time board is displayed
                    // in order to display new board with new inputs

    // Actual board to be displayed
    cout << endl;
    cout << " " << one << " | " << two << " | " << three << endl;
    cout << "-----------" << endl;
    cout << " " << four << " | " << five << " | " << six << endl;
    cout << "-----------" << endl;
    cout << " " << seven << " | " << eight << " | " << nine << endl;
    cout << endl;
}
