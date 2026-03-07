// Vergabera, Jose Ezra Nazarene B., BSCS 2-5, Assignment 4 Source Code, 12-19-2022
#include <iostream>

using namespace std;

void assignment4_problem1();
void assignment4_problem3();
void assignment4_problem5();
void assignment4_problem7();
void assignment4_problem9();

int main()
{
    system("cls");
    assignment4_problem1();
    system("pause");
    system("cls");
    assignment4_problem3();
    system("pause");
    system("cls");
    assignment4_problem5();
    system("pause");
    system("cls");
    assignment4_problem7();
    system("pause");
    system("cls");
    assignment4_problem9();
    system("pause");
    system("cls");
}

void assignment4_problem1()
{
    double celsius, fahrenheit, kelvin;

    cout << "This program is used to convert Degree Celsius to Degree Fahrenheit and Degree Kelvin" << endl;

    // input
    cout << "\nEnter a temperature (Celsius): ";
    cin >> celsius;

    // process
    fahrenheit = ((celsius * 9) / 5) + 32;
    kelvin = celsius + 273;

    // output
    cout << "\nThe temperature " << celsius << "\370C \nin Fahrenheit is " << fahrenheit << "\370F \nin Kelvin is " << kelvin << "K\n";
    cout << "\nThis program is created by Vergabera\nThank you for using my program!" << endl;
}

void assignment4_problem3()
{
    double prelim_grade, midterm_grade, final_grade, final_final_grade;

    cout << "This program is used to calculate your Final Final Grade" << endl;

    // input
    cout << "\nEnter your Prelim Grade: ";
    cin >> prelim_grade;

    cout << "Enter your Midterm Grade: ";
    cin >> midterm_grade;

    cout << "Enter your Final Grade: ";
    cin >> final_grade;

    // process
    final_final_grade = (prelim_grade * 0.25) + (midterm_grade * 0.25) + (final_grade * 0.5);

    // output
    cout << "\nYour Prelim Grade: " << prelim_grade << "\nYour Midterm Grade: " << midterm_grade << "\nYour Final Grade: " << final_grade << endl;
    cout << "\nYour Final Final Grade is: " << final_final_grade << endl;
    cout << "\nThis program is created by Vergabera\nThank you for using my program!" << endl;
}

void assignment4_problem5()
{
    double number, sum = 0, average;

    cout << "This program is used to get the sum and average of 5 numbers" << endl;

    // loops for exactly 5 times
    for (int i = 1; i <= 5; i++)
    {
        // input
        cout << "Enter a number(" << i << "): ";
        cin >> number;

        // process
        sum += number;
    }

    // process
    average = sum / 5;

    // output
    cout << "\nYour numbers' sum is: " << sum << "\nYour numbers' average is: " << average << endl;
    cout << "\nThis program is created by Vergabera\nThank you for using my program!" << endl;
}

void assignment4_problem7()
{
    double celsius, fahrenheit, kelvin;

    cout << "This program is used to convert Degree Fahrenheit to Degree Kelvin" << endl;

    // input
    cout << "\nEnter a temperature (Fahrenheit): ";
    cin >> fahrenheit;

    // process
    celsius = ((fahrenheit - 32) * 5) / 9;
    kelvin = celsius + 273;

    // output
    cout << "\nThe temperature " << fahrenheit << "\370F \nin Kelvin is " << kelvin << "K\n";
    cout << "\nThis program is created by Vergabera\nThank you for using my program!" << endl;
}

void assignment4_problem9()
{
    double peso_amount, dollar_amount;

    cout << "This program is used to convert peso to dollar" << endl;

    // input
    cout << "\nEnter the amount of your money: ";
    cin >> peso_amount;

    // process
    dollar_amount = peso_amount / 41.25;

    // output
    cout << "\nThe amount of your money in USD is: $" << dollar_amount << endl;

    cout << "\nThis program is created by Vergabera\nThank you for using my program!" << endl;
}