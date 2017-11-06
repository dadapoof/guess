#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

// Ensures that the number wil be different every time

srand(time(0));
int number = (rand() % 35) + 1;
int guess;

// Presenting and Introduction

 cout << "We are gonna play a fun game today!\n";
 cout << "It's the same concept as Akinator but with whole numbers...\n";
 cout << "Try to guess the number I'm thiking of!\n";
 cin >> guess;

// while loop that keeps prompting user if answer is wrong

  while (guess != number)
  {

// If the guess is too high

   if (guess > number)
   {
    cout << "You guessed too high! Try again!\n";
    cin >> guess;
   }

// If the guess is too low

   else
   {
    cout << "You guessed too low! Try again!\n";
    cin >> guess;
   }

  }

// End of the loop!

cout << "Wow... You got me! You're better at this game than you seem!\n";
cout << "Congrats!\n";

        return 0;
}

