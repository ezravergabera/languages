#include <iostream>

using namespace std;

int remainingMinutesInOven(int actualMinutesInOven)
{
    int expected_minutes_in_oven = 40;
    int remainingMinutesInOven = expected_minutes_in_oven - actualMinutesInOven;
    return remainingMinutesInOven;
}

int preparationTimeInMinutes(int numberOfLayers)
{
    int preparationTimeInMinutes = numberOfLayers * 2;
    return preparationTimeInMinutes;
}

int totalTimeInMinutes(int numberOfLayers, int actualMinutesInOven)
{
    int totalTimeInMinutes = actualMinutesInOven + (numberOfLayers * 2);
}

int main()
{
    cout << remainingMinutesInOven(30) << endl;
    cout << preparationTimeInMinutes(2) << endl;
    cout << totalTimeInMinutes(3, 20) << endl;
}