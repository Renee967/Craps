/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int win_count = 0;
    int lose_count = 0;
    for (int i = 0; i < 10000; i++) {
        int dice1, dice2 = 0;
        int rollDice, sum2;
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        rollDice = dice1 + dice2;

        if (rollDice == 7 || rollDice == 11)
        {
            cout << "Your rolled " << dice1 << " + " << dice2 << " = " << rollDice << endl;
            cout << "You win" << endl;
            win_count = win_count + 1;

        }
        else if (rollDice == 2 || rollDice == 3 || rollDice == 12)
        {
            cout << "Your rolled " << dice1 << " + " << dice2 << " = " << rollDice << endl;
            cout << "You lose" << endl;
            lose_count = lose_count + 1;
        }
        else
        {
            cout << "point is " << rollDice << endl;
            int flag = 0;
            while (flag == 0) {
                dice1 = rand() % 6 + 1;
                dice2 = rand() % 6 + 1;
                sum2 = dice1 + dice2;
                cout << "Your rolled " << dice1 << " + " << dice2 << " = " << sum2 << endl;
                cout << "The sum of two dices is: " << sum2 <<endl;
                if (sum2 == rollDice) {
                    flag = 1;
                    cout << "You win" << endl;
                    win_count = win_count + 1;
                }
                else if (sum2 == 7) {
                    flag = 1;
                    cout << "You lose" << endl;
                    lose_count = lose_count + 1;
                }
            }

            
        }
        
    }

    float win_rate = float(win_count) / (win_count + lose_count);
    cout << "During 10000 times, the player win " << win_count << " times."<<endl;
    cout << "During 10000 times, the player lose " << lose_count << " times."<<endl;
    cout << "During 10000 times, the win rate is : " << win_rate;
    return 0;
}