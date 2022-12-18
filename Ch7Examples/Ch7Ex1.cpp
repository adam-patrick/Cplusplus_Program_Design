//*************************************************************
// Author: D.S. Malik
//
// Program: Rock, Paper, and Scissors
// This program plays the game of rock, paper, and scissors.
//*************************************************************

#include <iostream>

using namespace std;

enum objectType{ROCK, PAPER, SCISSORS};

void displayRules();
objectType retreivePlay(char selection);
bool validSelection(char selection);
void convertEnum(objectType object);
objectType winningObject(objectType play1, objectType play2);
void gameResult(objectType play1, objectType play2, int& winner);
void displayResults(int gCount, int wCount1, int wCount2);

int main()
{
    int gameCount;
    int winCount1;
    int winCount2;
    int gamewinner;
    char response;
    char selection1;
    char selection2;
    objectType play1;
    objectType play2;

    gameCount = 0;
    winCount1 = 0;
    winCount2 = 0;

    displayRules();

    cout << "Enter Y/y to play the game: ";
    cin >> response;
    cout << endl;

    while (response == 'Y' || response == 'y')
    {
        cout << "Player 1 enter your choice: ";
        cin >> selection1;
        cout << endl;

        cout << "Player 2 enter your choice: ";
        cin >> selection2;
        cout << endl;

        if (validSelection(selection1)
            && validSelection(selection2))
        {
            play1 = retreivePlay(selection1);
            play2 = retreivePlay(selection2);
            gameCount++;
            gameResult(play1, play2, gamewinner);

            if  (gamewinner == 1)
                winCount1++;
            else if (gamewinner == 2)
                winCount2++;
        }
        cout << "Enter Y/y to play the game: ";
        cin >> response;
        cout << endl;
    }

    displayResults(gameCount, winCount1,
                   winCount2);
    return 0;
}

void displayRules()
{
    cout << "Welcome to the game of Rock, Paper, "
        << "and Scissors." << endl;
    cout << " This is a game for two players. For each "
        << "game, each" << endl;
    cout << " player selects one of the objects, Rock, "
        << "Paper or Scissors." << endl;
    cout << "The rules for winning the game are: " << endl;
    cout << "1. If both players select the same object, it "
        << "is a tie." << endl;
    cout << "2. Rock breaks Scissors: So player who selects "
        << "Rock wins." << endl;
    cout << "3. Paper covers Rock. So player who selects "
        << "Paper wins." << endl;
    cout << "4. Scissors cuts Paper: So player who selects "
        << "Scissors wins." << endl << endl;
    cout << "Enter R or r to select Rock, P or p to select "
        << "Paper, and S or s to select Scissors." << endl;
}

bool validSelection(char selection)
{
    switch(selection)
    {
    case 'R':
    case 'r':
    case 'P':
    case 'p':
    case 'S':
    case 's':
        return true;
    default:
        return false;
    }
}

objectType retreivePlay(char selection)
{
    objectType object;

    switch (selection)
    {
    case 'R':
    case 'r':
        object = ROCK;
        break;
    case 'P':
    case 'p':
        object = PAPER;
        break;
    case 'S':
    case 's':
        object = SCISSORS;
        break;
    }
    return object;
}

void gameResult(objectType play1, objectType play2,
                int& winner)
{
    objectType winnerObject;
    if (play1 == play2)
    {
        winner = 0;
        cout << "Both players selected ";
        convertEnum(play1);
        cout << ". This game is a tie." << endl;
    }
    else
    {
        winnerObject = winningObject(play1, play2);
        cout << "Player 1 selected ";
        convertEnum(play1);
        cout << " and player 2 selected ";
        convertEnum(play2);
        cout << ". ";

        if (play1 == winnerObject)
            winner = 1;
        else if (play2 == winnerObject)
            winner = 2;

        cout << "Player " << winner << " wins this game."
            << endl;
    }
}

void convertEnum(objectType object)
{
    switch (object)
    {
    case ROCK:
        cout << "Rock";
        break;
    case PAPER:
        cout << "Paper";
        break;
    case SCISSORS:
        cout << "Scissors";
        break;
    }
}

objectType winningObject(objectType play1, objectType play2)
{
    if ((play1 == ROCK && play2 == SCISSORS)
        || (play2 == ROCK && play1 == SCISSORS))
            return ROCK;
    else if ((play1 == ROCK && play2 == PAPER)
             || (play2 == ROCK && play1 == PAPER))
            return PAPER;
    else
        return SCISSORS;
}

void displayResults(int gCount, int wCount1, int wCount2)
{
    cout << "The total number of plays: " << gCount
        << endl;
    cout << "The number of plays won by Player 1: "
        << wCount1 << endl;
    cout << "The number of plays won by Player 2: "
        << wCount2 << endl;
}
