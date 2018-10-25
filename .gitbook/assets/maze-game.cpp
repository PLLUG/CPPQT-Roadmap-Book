#include <iostream>
#include <string>
#include <array>
#include <random>

const int cMazeColumns = 12;
const int cMazeRows = 8;

const char cEmptySymbol = ' ';
const char cWallSymbol = 'X';
const char cCharacterSymbol = '@';
const char cExitSymbol = '#';

// Checks if user want so play
// Return true if user wants to play; false otherwise
bool doesUserWantsToPlay()
{
    bool rResult = false;

    std::cout << "Maze Game" << std::endl;

    while (true)
    {
        std::cout << "Do you want to play? (1 - yes, 0 - no):";

        std::string answer;
        std::cin >> answer;

        if ((answer == "1") || (answer == "0"))
        {
            rResult = (answer == "1");
            break;
        }

        std::cout << "Sorry, I did not understand." << std::endl;
    }

    return rResult;
}

// Generates maze
// Parameters:
//       maze - reference to maze field that will be modified
//              (walls added, added character and exit)
void generateMaze(std::array<std::array<char, cMazeColumns>, cMazeRows> &prMaze)
{
    for (int row = 0; row < cMazeRows; row++)
    {
        for (int column = 0; column < cMazeColumns; column++)
        {
            if ((row == 0) || (row == cMazeRows - 1) || (column == 0) || (column == cMazeColumns - 1))
            {
                prMaze[row][column] = cWallSymbol;
            }
            else
            {
                prMaze[row][column] = cEmptySymbol;
            }
        }
    }

    // Place character - always at positon 1,1
    prMaze[1][1] = cCharacterSymbol;

    // Place exit randomly
    static std::random_device rd;
    static std::mt19937 mt{rd()};
    static std::uniform_int_distribution<int> rowGenerator = std::uniform_int_distribution<int>(2, cMazeRows - 2);
    static std::uniform_int_distribution<int> columnGenerator = std::uniform_int_distribution<int>(2, cMazeColumns - 2);
    prMaze[rowGenerator(mt)][columnGenerator(mt)] = cExitSymbol;
}

// Draws maze onto screen
// Parameters:
//      maze - maze field to draw
void drawMaze(const std::array<std::array<char, cMazeColumns>, cMazeRows> &maze)
{
    for (int row = 0; row < cMazeRows; row++)
    {
        for (int column = 0; column < cMazeColumns; column++)
        {
            std::cout << maze[row][column];
        }

        std::cout << std::endl;
    }
}

// Searches given char on the given maze field,
// returns if found and filling row and column with coordinates
// Parameters:
//      maze - maze field where character will be serched
//      charToFind - char that should be found on maze field
//      prCharRow - reference to row variable for which will be assigned row position
//      prCharColumn - reference to column variable for which will be assigned column position
// Returns true if found; false otherwise.
bool scanForChar(const std::array<std::array<char, cMazeColumns>, cMazeRows> &maze,
                 const char charToFind,
                 int &prCharRow,
                 int &prCharColumn)
{
    for (int row = 0; row < cMazeRows; row++)
    {
        for (int column = 0; column < cMazeColumns; column++)
        {
            if (maze[row][column] == charToFind)
            {
                prCharRow = row;
                prCharColumn = column;
                return true;
            }
        }
    }

    return false;
}

// Moves character according to given command and retuns eaten symbol (if any)
// Parameters:
//      row - character row position
//      column - character column position
//      command - test string with given command ("l" - left, "r" - right, "u" - up, "d" - down)
//      prMaze - reference to maze field; will be modified as a result of command execution
char moveAndGather(int row,
                   int column,
                   const std::string &command,
                   std::array<std::array<char, cMazeColumns>, cMazeRows> &prMaze)
{
    char rCharMovedOnto = cEmptySymbol;

    // Take character out from map
    prMaze[row][column] = cEmptySymbol;

    if (command == "l")
    {
        rCharMovedOnto = prMaze[row][column - 1];

        if (rCharMovedOnto != cWallSymbol)
        {
            column--;
        }
    }

    if (command == "r")
    {
        rCharMovedOnto = prMaze[row][column + 1];

        if (rCharMovedOnto != cWallSymbol)
        {
            column++;
        }
    }

    if (command == "u")
    {
        rCharMovedOnto = prMaze[row - 1][column];

        if (rCharMovedOnto != cWallSymbol)
        {
            row--;
        }
    }

    if (command == "d")
    {
        rCharMovedOnto = prMaze[row + 1][column];

        if (rCharMovedOnto != cWallSymbol)
        {
            row++;
        }
    }

    // Place character back with new position
    prMaze[row][column] = cCharacterSymbol;

    return rCharMovedOnto;
}

// Prints message to player.
// Parameters:
//      message - text message to player
void gameMessage(const std::string& message)
{
    std::cout << std::endl << message << std::endl << std::endl;
}

// Moves character and check if exit was found as a result of that move.
// Parameters:
//      prMaze - reference to maze field; will be modified while player moves.
bool moveCharacterAndCheckIfExitFound(std::array<std::array<char, cMazeColumns>, cMazeRows> &prMaze)
{
    bool rExitFound = false;

    int charRow = 1;
    int charColumn = 1;
    if (scanForChar(prMaze, cCharacterSymbol, charRow, charColumn))
    {
        std::cout << "Command (l - left, r - right, u - up, d- down):";
        std::string command;
        std::cin >> command;

        const char charMovedOnto = moveAndGather(charRow, charColumn, command, prMaze);

        if (charMovedOnto == cWallSymbol)
        {
            gameMessage("Cannot move here!");
        }

        if (charMovedOnto == cExitSymbol)
        {
            gameMessage("Exit found!");
            rExitFound = true;
        }
    }
    else
    {
        gameMessage("Error: cannot find char!");
    }

    return rExitFound;
}

// Executes one round of the game
void playMazeGame()
{
    std::cout << "LETS START!" << std::endl;

    std::array<std::array<char, cMazeColumns>, cMazeRows> maze;
    generateMaze(maze);

    do
    {
        drawMaze(maze);
    }
    while (!moveCharacterAndCheckIfExitFound(maze));
}

int main()
{
    while (doesUserWantsToPlay())
    {
        playMazeGame();
    }
}
