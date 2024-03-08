//*Program:make two players choose a number from 1 to 10 and the first player who compeletes 100 win the game
//*  GAME1
// * Author:Rahma Osama Mohamed
// * ID:20230136
// * Version:1.0
//* Date: 2/3/2024


#include <iostream>

using namespace std;
int main() {
    int sum = 0; //set sum of all games
    //welcome message and display status
    cout << "Welcome to 100game\n";
    cout << "Now you can choose your game from 1 to 10, and it will automatically add to sum\n";
//Game playing
    while (sum < 100) { //take anumber from 2 players until find the winne//
        int play;
        cout << "First player: please enter a number from 1 to 10 ";
        cin >> play; //take the number from first player

        while (play < 1 || play > 10) { //ensure that play from 1 to 10
            cout << "First player: please enter a number from 1 to 10";
            cin >> play;
        }

        sum += play; //add number to sum as we start from 0

        if (sum > 100) { //check it is a valid number for game rules
            sum -= play;
            cout << "Please choose a suitable number that makes sum <= 100: ";
            cin >> play;
            sum +=play;
        }

        cout << "Now sum is " << sum << endl; //print the current sum after addition

        if (sum == 100) { //check if the winner is the first player
            cout << "First player is the winner\n";
            break;
        }

        cout << "Second player: please enter your choice from 1 to 10 ";
        cin >> play; //take the number from second player

        while (play < 1 || play > 10) { //ensure that the number from 1 to 10
            cout << "Second player: please enter your choice from 1 to 10 ";
            cin >> play;
        }

        sum += play; //add the number to sum

        if (sum > 100) { //check it is a valid number for game rules
            sum -= play;
            cout << "Please choose a suitable number that makes sum <= 100: ";
            cin >> play;
            sum +=play;
        }

        cout << "Now sum is " << sum <<endl; //print the current sum after addition

        if (sum == 100) { //check if the winner is the secon player
            cout << "Second player is the winner\n";
            break;
        }
    }

    return 0;
}