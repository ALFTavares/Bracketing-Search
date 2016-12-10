//
//  main.cpp
//  Bracketing Search
//
//  Created by Antonio Tavares on 10/12/16.
//  Copyright © 2016 Antonio Tavares. All rights reserved.
//

/*
 Write a program that calculates a random number 1 through 100. The program then asks the user to guess the number.
 If the user guesses too high or too low then the program should output "too high" or "too low" accordingly.
 The program must let the user continue to guess until the user correctly guesses the number.
 
 ★ Modify the program to output how many guesses it took the user to correctly guess the right number.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( static_cast<unsigned int>(time(NULL)));
    
    int randomNum = rand()%100+1;
    int guess;
    int counter = 0;
    
    
    
    do
    {
        cout << "Insert a Number: ";
        cin >> guess;
        counter++;
        
        if(guess < randomNum)
            cout << "Number too low" << endl;
        else if(guess > randomNum)
            cout << "Number too high" << endl;
        else
            cout << "Right on the spot" << endl;
        
    }while(guess != randomNum);
    
    cout << "Number of tries: " << counter << endl;
    
    return 0;
}
