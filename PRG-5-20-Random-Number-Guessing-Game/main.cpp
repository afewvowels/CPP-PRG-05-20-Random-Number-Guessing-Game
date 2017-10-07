//
//  main.cpp
//  PRG-5-20-Random-Number-Guessing-Game
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  Write a program that generates a random number and asks the user to guess what the
//  number is. If the user's guess is higher than the random number, the program should
//  display "Too high, try again." If the user's guess is lower than the random number, the
//  program should display "Too low, try again." The program should use a loop that
//  repeats until the user correctly guessees the random number.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int intNumberRandom,
        intNumberGuess;
    
    unsigned seed = time(0);
    
    srand(seed);
    
    intNumberRandom = rand() % 9;
    
    do
    {
        cout << "Please guess a number:\n";
        cin >> intNumberGuess;
        while(!cin || intNumberGuess < 1 || intNumberGuess > 10)
        {
            cout << "Please enter a number between 1 and 10:\n";
            cin.clear();
            cin.ignore();
            cin >> intNumberGuess;
        }
        
        if(intNumberGuess > intNumberRandom)
        {
            cout << "Your guess was too high.\n";
        }
        else
        {
            cout << "Your guess was too low.\n";
        }
        
    } while(intNumberGuess != intNumberRandom);
    
    cout << endl << "The number is " << intNumberRandom << endl << endl;
    
    cout << "Congratulations!\n"
         << "You correctly guessed the number!\n";
    
    return 0;
}



