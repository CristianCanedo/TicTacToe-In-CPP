#ifndef BOARD_H
#define BOARD_H
#include <string>

using namespace std;
class Board
{
    public:
        Board(); // ctor
        void displayBoard(); // display board method prototype

        // board number variables as string
        string one, two, three, four, five, six, seven, eight, nine;

    protected:

    private:
};

#endif // BOARD_H
