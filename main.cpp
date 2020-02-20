#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const char ROCK = 'r', PAPER = 'p', SCISSORS = 's', ESCAPE = 'e';

    int score = 0, opscore = 0, numchoice;
    char choice, opchoice;

    srand(time(NULL));

    while(choice != ESCAPE)
    {
        cout << "\nEnter r for rock, p for paper, s for scissors, and e to endgame: ";
        cin >> choice;
        while(choice != ROCK && choice != PAPER && choice != SCISSORS && choice != ESCAPE)
        {
            cout << "\nEnter r for rock, p for paper, s for scissors, and e to endgame: ";
            cin >> choice;
        }
        numchoice = (rand() % (3 - 1 +1)) + 1;

        if(numchoice == 1)
            opchoice = 'r';
        else if(numchoice == 2)
            opchoice = 'p';
        else
            opchoice = 's';

        if(choice == 'r' && opchoice == 'p')
        {
            cout << "\nYou lose, paper beats rock!";
            ++opscore;
        }
        else if(choice == 'r' && opchoice == 's')
        {
            cout << "\nYou won, rock beats scissors!";
            ++score;
        }
        else if(choice == 'p' && opchoice == 'r')
        {
            cout << "\nYou won, paper beats rock!";
            ++score;
        }
        else if(choice == 'p' && opchoice == 's')
        {
            cout << "\nYou lost, scissors beat paper!";
            ++opscore;
        }
        else if(choice == 's' && opchoice == 'r')
        {
            cout << "\nYou lost, rock beats scissors!";
            ++opscore;
        }
        else if(choice == 's' && opchoice == 'p')
        {
            cout << "\nYou won, scissors beats paper!";
            ++score;
        }
        else if(choice == opchoice)
        {
            cout << "\nIt's a draw!";
        }
        else
        {
            cout << "\nEscaping...";
        }

    }
    cout << "\nYour score: " << score << "\nOpponent score: " << opscore;
}
