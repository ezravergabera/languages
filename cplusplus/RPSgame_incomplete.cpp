#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int computer_option, user_option;
    char choice;
    string computer_choice, user_choice;
    double score = 0;
    bool userWin;

    do
    {
        // seeds the current seconds using ctime module
        srand(time(0));

        // randomly generates numbers from 1 to 3
        computer_option = (rand() % 3) + 1;

        // converts the numbers to choices
        switch (computer_option)
        {
        case 1:
            computer_choice = "Rock";
            break;

        case 2:
            computer_choice = "Paper";
            break;

        case 3:
            computer_choice = "Scissors";
            break;

        default:
            cout << "\nProgram encountered an error.";
        }

        cout << "\nChoose [R] Rock [P] Paper [S] Scissors [E] Exit" << endl
             << "> ";
        cin >> choice;
        choice = toupper(choice);

        switch (choice)
        {
        case 'R':
            user_option = 1;
            user_choice = "Rock";
            break;

        case 'P':
            user_option = 2;
            user_choice = "Paper";
            break;

        case 'S':
            user_option = 3;
            user_choice = "Scissors";
            break;

        case 'E':
            cout << "\nProgram exiting...";
            break;

        default:
            cout << "\nInvalid input." << endl;
            choice = 'X';
            user_option = 0;
            computer_option = 1;
        }

        // if user exits
        if (choice == 'E')
        {
            userWin = false;
            cout << "\nComputer chose " << computer_choice << endl;
            cout << "You chose to exit." << endl;
            cout << "Your score: " << score << endl;
        }

        // TODO program still registers trailing letters of choice character
        // invalid input
        else if ((user_option == 0 && computer_option == 1) && choice == 'X')
        {
            userWin = true;
            cout << "Please enter R, P, or S for your choice." << endl;
        }

        // draw scenario
        else if (user_option == computer_option)
        {
            userWin = true;
            score += .5;
            cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
            cout << "The game is draw." << endl;
            cout << "Your score: " << score << endl;
        }

        // user wins scenario
        else if ((user_option == 1 && computer_option == 3) || (user_option == 2 && computer_option == 1) || (user_option == 3 && computer_option == 2))
        {
            userWin = true;
            score += 1;
            cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
            cout << "You win. Play again." << endl;
            cout << "Your score: " << score << endl;
        }

        // user loses scenario
        else if ((user_option == 3 && computer_option == 1) || (user_option == 1 && computer_option == 2) || (user_option == 2 && computer_option == 3))
        {
            userWin = false;
            cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
            cout << "You lose. Play again." << endl;
            cout << "Your score: " << score << endl;
        }

        system("pause");
        system("cls");
    } while (userWin);
}