// game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string words[3] = {"apple","car","doll"};
    string word,user_input;
    char user_letter;
    int random;

    srand(time(0));
    random = rand() % 3;
    word = words[random];
    for (int i = 0; i < word.size(); i++)
    {
        cout << "_ ";
    }
    while (true)
    {
        cout << "\n Enter a letter: ";
        cin >> user_letter;
        for (int i = 0; i < word.size(); i++)
        {
            if (user_letter == word[i])
            {
                cout << user_letter;
                for (int i = 0; i < word.size(); i++)
                {
                    user_input = user_letter;
                    cout << user_input;
                }
            }
            else
            {
                cout << "_";
            }
            
        }
    }
    
    cout << word[random];
}