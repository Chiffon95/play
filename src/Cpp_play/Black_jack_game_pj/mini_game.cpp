#include <iostream>
#include <string.h>
#include "mini_game.h"


char square[9] = { '1','2','3','4','5','6','7','8','9' };



int checkwin()
{
    if (square[0] == square[1] && square[1] == square[2])
    {
        if (square[0] == 'X')
            return 1;
        else
            return 2;
    }
    else
        if (square[3] == square[4] && square[4] == square[5])
        {
            if (square[3] == 'X')
                return 1;
            else
                return 2;
        }
        else
            if (square[6] == square[7] && square[7] == square[8])
            {
                if (square[6] == 'X')
                    return 1;
                else
                    return 2;
            }
            else
                if (square[0] == square[3] && square[3] == square[6])
                {
                    if (square[0] == 'X')
                        return 1;
                    else
                        return 2;
                }
                else
                    if (square[1] == square[4] && square[4] == square[7])
                    {
                        if (square[1] == 'X')
                            return 1;
                        else
                            return 2;
                    }
                    else
                        if (square[2] == square[5] && square[5] == square[8])
                        {
                            if (square[2] == 'X')
                                return 1;
                            else
                                return 2;
                        }
                        else
                            if (square[0] == square[4] && square[4] == square[8])
                            {
                                if (square[0] == 'X')
                                    return 1;
                                else
                                    return 2;
                            }
                            else
                                if (square[2] == square[4] && square[4] == square[6])
                                {
                                    if (square[2] == 'X')
                                        return 1;
                                    else
                                        return 2;
                                }
                                else
                                    if (square[0] == square[3] && square[3] == square[6])
                                    {
                                        if (square[0] == 'X')
                                            return 1;
                                        else
                                            return 2;
                                    }
                                    else
                                        return 0;
}

void mark(int player, int box)
{
    if (player == 1)
    {
        square[box - 1] = 'X';
    }
    else
        square[box - 1] = 'O';

}

void display()
{
    cout << "┌──────────────┐" << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << "│  " << square[i] << " ";
        if (i == 2 || i == 5)
            cout << "│\n┝━━━━━━━━━━━━━━┥\n";
        if (i == 8)
            cout << "│\n└──────────────┘";
    }


}

void play_T() {


    cout << "┌──────────────┐" << endl;
    cout << "│  Tic-tac-toe │" << endl;
    cout << "└──────────────┘" << endl;

    int player1 = 1, player2 = 2;

    int box, result = 0;


    display();

    for (int i = 0; i < 5; i++)
    {

        cout << "\n Player " << player1 << "'s Turn" << endl;

        cin >> box;
        while (box < 0 || box > 9) {
            cout << "Choose Again!" << endl;
            cout << "\n Player " << player1 << "'s Turn" << endl;
            cin >> box;
        }



        while (square[box - 1] == 'X' || square[box - 1] == 'O') {
            cout << "Choose Again!" << endl;
            cout << "\n Player " << player1 << "'s Turn" << endl;
            cin >> box;

        }

        mark(player1, box);

        display();

        result = checkwin();
        if (result == 1)
        {
            cout << "\n Congratualtions!\n Player " << player1 << " has Won !" << endl;
            break;
        }
        else
            if (result == 2)
            {
                cout << "\n Congratualtions!\n Player " << player2 << " has Won !" << endl;
                break;
            }



        if (i == 4 && result == 0)
        {
            cout << " \n Sorry, The game is a draw ";
            break;
        }


        cout << "\n Player " << player2 << "'s Turn" << endl;
        cin >> box;
        while (box < 0 || box > 9) {
            cout << "Choose Again!" << endl;
            cout << "\n Player " << player2 << "'s Turn" << endl;
            cin >> box;
        }
        while (square[box - 1] == 'X' || square[box - 1] == 'O') {
            cout << "Choose Again!" << endl;
            cout << "\n Player " << player2 << "'s Turn" << endl;
            cin >> box;

        }
        mark(player2, box);

        display();

        result = checkwin();
        if (result == 1)
        {
            cout << "\n Congratualtions!\n Player " << player1 << " has Won !" << endl;
            break;

        }

        else
            if (result == 2)
            {
                cout << "\n Congratualtions!\n Player " << player2 << " has Won !" << endl;
                break;
            }


    }



    int end = 0;
    cout << " \n 나가려면 아무키나 입력하세요. ";


    square[0] = '1';
    square[1] = '2';
    square[2] = '3';
    square[3] = '4';
    square[4] = '5';
    square[5] = '6';
    square[6] = '7';
    square[7] = '8';
    square[8] = '9';


    cin >> end;

    //return 0;
}