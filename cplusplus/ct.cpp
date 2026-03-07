#include <iostream>

using namespace std;

// // simple i/o

// int summer(int x, int y);

// main()
// {
//     int a, b, sum;
//     system("cls");

//     // input
//     cout << "Enter a number: ";
//     cin >> a;

//     cout << "Enter another number: ";
//     cin >> b;

//     // process
//     sum = summer(a, b);

//     // output
//     cout << "\nThe sum of those two numbers is " << sum << endl;

//     // cleaner
//     system("pause");
//     system("cls");
// }

// int summer(int x, int y)
// {
//     int result = x + y;
//     return result;
// }

// classes and objects, variables in classes, constructor
// constructors are immediately called after you create an object. they dont have data type, they must have the same name as the class name.

// class EzrasClass
// {
// public:
//     EzrasClass()
//     {
//         cout << "This will get printed automagically.";
//     }
//     void setName(string x)
//     {
//         name = x;
//     }
//     string getName()
//     {
//         return name;
//     }

// private:
//     string name;
// };

// main()
// {
//     EzrasClass EzrasObject;
//     EzrasObject.setName("Ezra Newbie");
//     cout << EzrasObject.getName();
// }

// template for a header file
// #ifndef BURRITO_H
// #define BURRITO_H

// class Burrito
// {
// public:
//     Burrito();
// };

// #endif

// sentinel controlled loops

// main()
// {
//     int age, ageTotal = 0, numberOfPeopleEntered = 0;

//     system("cls");

//     cout << "Enter first person's age or -1 to quit: ";
//     cin >> age;

//     while (age != -1)
//     {
//         ageTotal = ageTotal + age;
//         numberOfPeopleEntered++;

//         cout << "\nCurrent age total: " << ageTotal << endl;
//         cout << "Current number of people entered: " << numberOfPeopleEntered << endl
//              << endl;

//         cout << "Enter next person's age or -1 to quit: ";
//         cin >> age;
//     }

//     cout << "\nFinal age total: " << ageTotal << endl;
//     cout << "Final number of people entered: " << numberOfPeopleEntered;
// }

// stock market simulator

// #include <cmath>

// main()
// {
//     float amount, principal_amount = 10000, rate = .01;

//     for (int day = 1; day <= 20; day++)
//     {
//         amount = principal_amount * pow(1 + rate, day);
//         cout << day << " ----- " << amount << endl;
//     }
// }

// switch case statement

// int main()
// {
//     int age = 16;

//     switch (age)
//     {
//     case 16:
//         cout << "hey you can drive now" << endl;
//         break;
//     case 18:
//         cout << "you can buy some lotto tickets!" << endl;
//         break;
//     case 21:
//         cout << "buy me some beer" << endl;
//         break;
//     default:
//         cout << "invalid input" << endl;
//     }
// }

// random number generator using c standard library, method rand()

// #include <cstdlib>
// #include <ctime>

// int main()
// {

//     srand(time(0)); // seed a random number to change the algorithm

//     for (int x = 1; x <= 25; x++)
//     {
//         cout << x << " ----- " << (rand() % 6) + 1 << endl;
//     }
// }

// random number generator exercise

// #include <cstdlib>
// #include <ctime>

// int main()
// {
//     int computer_option, user_option;
//     char choice;
//     string computer_choice, user_choice;
//     double score = 0;
//     bool userWin;

//     do
//     {
//         // seeds the current seconds using ctime module
//         srand(time(0));

//         // randomly generates numbers from 1 to 3
//         computer_option = (rand() % 3) + 1;

//         // converts the numbers to choices
//         switch (computer_option)
//         {
//         case 1:
//             computer_choice = "Rock";
//             break;

//         case 2:
//             computer_choice = "Paper";
//             break;

//         case 3:
//             computer_choice = "Scissors";
//             break;

//         default:
//             cout << "\nProgram encountered an error.";
//         }

//         cout << "\nChoose [R] Rock [P] Paper [S] Scissors [E] Exit" << endl
//              << "> ";
//         cin >> choice;
//         choice = toupper(choice);

//         switch (choice)
//         {
//         case 'R':
//             user_option = 1;
//             user_choice = "Rock";
//             break;

//         case 'P':
//             user_option = 2;
//             user_choice = "Paper";
//             break;

//         case 'S':
//             user_option = 3;
//             user_choice = "Scissors";
//             break;

//         case 'E':
//             cout << "\nProgram exiting...";
//             break;

//         default:
//             cout << "\nInvalid input." << endl;
//             choice = 'X';
//             user_option = 0;
//             computer_option = 1;
//         }

//         // if user exits
//         if (choice == 'E')
//         {
//             userWin = false;
//             cout << "\nComputer chose " << computer_choice << endl;
//             cout << "You chose to exit." << endl;
//             cout << "Your score: " << score << endl;
//         }

//         // TODO program still registers trailing letters of choice character
//         // invalid input
//         else if ((user_option == 0 && computer_option == 1) && choice == 'X')
//         {
//             userWin = true;
//             cout << "Please enter R, P, or S for your choice." << endl;
//         }

//         // draw scenario
//         else if (user_option == computer_option)
//         {
//             userWin = true;
//             score += .5;
//             cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
//             cout << "The game is draw." << endl;
//             cout << "Your score: " << score << endl;
//         }

//         // user wins scenario
//         else if ((user_option == 1 && computer_option == 3) || (user_option == 2 && computer_option == 1) || (user_option == 3 && computer_option == 2))
//         {
//             userWin = true;
//             score += 1;
//             cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
//             cout << "You win. Play again." << endl;
//             cout << "Your score: " << score << endl;
//         }

//         // user loses scenario
//         else if ((user_option == 3 && computer_option == 1) || (user_option == 1 && computer_option == 2) || (user_option == 2 && computer_option == 3))
//         {
//             userWin = false;
//             cout << "\nComputer chose " << computer_choice << " and you chose " << user_choice << endl;
//             cout << "You lose. Play again." << endl;
//             cout << "Your score: " << score << endl;
//         }

//         system("pause");
//         system("cls");
//     } while (userWin);
// }