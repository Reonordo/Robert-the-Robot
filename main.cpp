#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
    string name;
    string feeling;
    cout << "Hi, I'm Robert the robot. \n";
    cout << "What's your name?\n";
    cin >> name;
    cout << "Hi " << name << "!" << " How are you today?" << endl;
    cin >> feeling;
    if (feeling == "Good" || feeling == "good" || feeling == "Great" || feeling == "great" )
    {
        cout << "I'm so glad that you're feeling " << feeling  << " today." << endl;
        string response;
  int guess;
  int random;
  int chance = 9;
  srand (time(0));
  random = rand()% 50 + 1;
  cout << "Would you like to play a guessing game with me? \n";
  cin >> response;
  if (response == "Yes" || response == "yes" || response == "Yea" || response == "yea" || response == "Yup" || response == "yup" || response == "sure" || response == "Sure")
    {
      cout << "Awesome, let's get started! \n";
      cout << "I'm going to think of a number from 1 to 50 and you have to guess it! \n";
      cout << "I'm also going to give you 10 chances to guess the number.\n";
      cout << "When you're ready, just type in the number you want to guess. \n";
      cin >> guess;
      while (guess > 1 && guess != random)
      {
      if (chance == 0)
        {
            cout << "Sorry, but you ran out of tries. If you want to, we can play again.\n";
            system("PAUSE");
            return 0;
        }
      if (guess > random)
        {
          cout << "Chances left: " << chance<< "  You're number is too high!\n";
          cin >> guess;
          chance--;
        }
      else if (guess < random)
        {
          cout << "Chances left: " << chance << "  You're number too low!\n";
          cin >> guess;
          chance--;
        }
        cout << endl;
    }
    }
        if (guess == random)
        {
          cout << "Congratulations! You guessed my number!\n";
          system("PAUSE");
          return 0;
        }
    else if (response == "Nah" || response == "nah" || response == "no" || response == "No" || response == "Nope" || response == "nope")
    {
      cout << "Aw that sucks, maybe next time.\n";
      system("PAUSE");
    }
}

    else if (feeling == "Bad" || feeling == "bad" || feeling == "Not good" || feeling == "not good")
    {
        cout << "Aw that sucks, maybe we can talk another time.\n";
        system("PAUSE");
    }
        else
    {
        cout << "Sorry, I couldn't understand you.\n";
        system("PAUSE");
    }

}
