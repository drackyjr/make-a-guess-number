#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
srand((unsigned int) time(NULL));

int number = (rand() % 10) + 1;

int guess = 0;

do
{
cout << "Enter Guess no. between 1 to 10: ";
cin >> guess;

if (guess > number)
cout << "Guess lower!" << endl;
else if (guess < number)
cout << "Guess higher!" << endl;
else
cout << "You won!" << endl;
} while (guess != number);

return 0;
}
