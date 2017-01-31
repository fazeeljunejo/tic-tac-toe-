#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;

int crand;
int cPick;
int pChoice;
bool pTurn;
int gwin = 3;
int firstTurn;

char first= '1';
char second= '2';
char third= '3';
char fourth= '4';
char fifth= '5';
char sixth= '6';
char seventh= '7';
char eighth= '8';
char ninth= '9';

int checkComWin()
{
    if(first == 'X' && fifth == 'X' && ninth == 'X' && pTurn == false)
        gwin = 2;
    if(third == 'X' && fifth == 'X' && seventh == 'X' && pTurn == false)
        gwin = 2;
    if(first == 'X' && second == 'X' && third == 'X' && pTurn == false)
        gwin = 2;
    if(fourth == 'X' && fifth == 'X' && sixth == 'X' && pTurn == false)
        gwin = 2;
    if(seventh == 'X' && eighth == 'X' && ninth == 'X' && pTurn == false)
        gwin = 2;
    if(first == 'X' && fourth == 'X' && seventh == 'X' && pTurn == false)
        gwin = 2;
    if(second == 'X' && fifth == 'X' && eighth == 'X' && pTurn == false)
        gwin = 2;
    if(third == 'X' && sixth == 'X' && ninth == 'X' && pTurn == false)
        gwin = 2;
}

int checkPWin()
{
    if(first == 'O' && fifth == 'O' && ninth == 'O' && pTurn == true)
        gwin = 1;
    if(third == 'O' && fifth == 'O' && seventh == 'O' && pTurn == true)
        gwin = 1;
    if(first == 'O' && second == 'O' && third == 'O' && pTurn == true)
        gwin = 1;
    if(fourth == 'O' && fifth == 'O' && sixth == 'O' && pTurn == true)
        gwin = 1;
    if(seventh == 'O' && eighth == 'O' && ninth == 'O' && pTurn == true)
        gwin = 1;
    if(first == 'O' && fourth == 'O' && seventh == 'O' && pTurn == true)
        gwin = 1;
    if(second == 'O' && fifth == 'O' && eighth == 'O' && pTurn == true)
        gwin = 1;
    if(third == 'O' && sixth == 'O' && ninth == 'O' && pTurn == true)
        gwin = 1;
}


int moveGenerator()
{
    pTurn == false;

    if(first == 'X' && second == 'X' && pTurn == false && third == '3')
    {
        third = 'X';
        pTurn = true;
    }

    if(fourth == 'X' && fifth == 'X' && pTurn == false && sixth == '6')
    {
        sixth = 'X';
        pTurn = true;
    }

    if(seventh == 'X' && eighth == 'X' && pTurn == false && ninth == '9')
    {
        ninth = 'X';
        pTurn = true;
    }

    if(first == 'X' && fourth == 'X' && pTurn == false && seventh == '7')
    {
        seventh = 'X';
        pTurn = true;
    }

    if(second == 'X' && fifth == 'X' && pTurn == false && eighth == '8')
    {
        eighth = 'X';
        pTurn = true;
    }

    if(third == 'X' && sixth == 'X' && pTurn == false && ninth == '9')
    {
        ninth = 'X';
        pTurn = true;
    }

    if(first == 'X' && fifth == 'X' && pTurn == false && ninth == '9')
    {
        ninth = 'X';
        pTurn = true;
    }

    if(third == 'X' && fifth == 'X' && pTurn == false && seventh == '7')
    {
        seventh = 'X';
        pTurn == true;
    }

    if((pChoice == 1 || pChoice == 5 || pChoice == 9) && pTurn == false)
    {
        if((first == 'O' && fifth == 'O') && pTurn == false && ninth == '9')
        {
            ninth = 'X';
            pTurn = true;
        }

        if((first == 'O' && ninth == 'O') && pTurn == false && fifth == '5')
        {
            fifth = 'X';
            pTurn = true;
        }

        if((fifth == 'O' && ninth == 'O') && pTurn == false && first == '1')
        {
            first = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 3 || pChoice == 5 || pChoice == 7) && pTurn == false)
    {
        if((seventh == 'O' && fifth == 'O') && pTurn == false && third == '3')
        {
            third = 'X';
            pTurn = true;
        }

        if((seventh == 'O' && third == 'O') && pTurn == false && fifth == '5')
        {
            fifth = 'X';
            pTurn = true;
        }

        if((fifth == 'O' && third == 'O') && pTurn == false && seventh == '7')
        {
            seventh = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 1 || pChoice == 2 || pChoice == 3) && pTurn == false)
    {
        if((first == 'O' && second == 'O') && pTurn == false && third == '3')
        {
            third = 'X';
            pTurn = true;
        }

        if((first == 'O' && third == 'O') && pTurn == false && second == '2')
        {
            second = 'X';
            pTurn = true;
        }

        if((second == 'O' && third == 'O') && pTurn == false && first == '1')
        {
            first = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 4 || pChoice == 5 || pChoice == 6) && pTurn == false)
    {
        if((fourth == 'O' && fifth == 'O') && pTurn == false && sixth == '6')
        {
            sixth = 'X';
            pTurn = true;
        }

        if((fourth == 'O' && sixth == 'O') && pTurn == false && fifth == '5')
        {
            fifth = 'X';
            pTurn = true;
        }

        if((fifth == 'O' && sixth == 'O') && pTurn == false && fourth == '4')
        {
            fourth = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 7 || pChoice == 8 || pChoice == 9) && pTurn == false)
    {
        if((seventh == 'O' && eighth == 'O') && pTurn == false && ninth == '9')
        {
            ninth = 'X';
            pTurn = true;
        }

        if((seventh == 'O' && ninth == 'O') && pTurn == false && eighth == '8')
        {
            eighth = 'X';
            pTurn = true;
        }

        if((eighth == 'O' && ninth == 'O') && pTurn == false && seventh == '7')
        {
            seventh = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 1 || pChoice == 4 || pChoice == 7) && pTurn == false)
    {
        if((first == 'O' && fourth == 'O') && pTurn == false && seventh == '7')
        {
            seventh = 'X';
            pTurn = true;
        }

        if((first == 'O' && seventh == 'O') && pTurn == false && fourth == '4')
        {
            fourth = 'X';
            pTurn = true;
        }

        if((fourth == 'O' && seventh == 'O') && pTurn == false && first == '1')
        {
            first = 'X';
            pTurn = true;
        }

    }

    if((pChoice == 2 || pChoice == 5 || pChoice == 8) && pTurn == false)
    {
        if((second == 'O' && fifth == 'O') && pTurn == false && eighth == '8')
        {
            eighth = 'X';
            pTurn = true;
        }

        if((second == 'O' && eighth == 'O') && pTurn == false && fifth == '5')
        {
            fifth = 'X';
            pTurn = true;
        }

        if((fifth == 'O' && eighth == 'O') && pTurn == false && second == '2')
        {
            second = 'X';
            pTurn = true;
        }
    }

    if((pChoice == 3 || pChoice == 6 || pChoice == 9) && pTurn == false)
    {
        if((third == 'O' && sixth == 'O') && pTurn == false && ninth == '9')
        {
            ninth = 'X';
            pTurn = true;
        }

        if((third == 'O' && ninth == 'O') && pTurn == false && sixth == '6')
        {
            sixth = 'X';
            pTurn = true;
        }

        if((sixth == 'O' && ninth == 'O') && pTurn == false && third == '3')
        {
            third = 'X';
            pTurn = true;
        }
    }
    else
    {
        do
        {
            if(first == '1' && pTurn == false)
            {
                pTurn = true;
                first = 'X';
            }
            if(second == '2' && pTurn == false)
            {
                pTurn = true;
                second = 'X';
            }
            if(third == '3' && pTurn == false)
            {
                pTurn = true;
                third = 'X';
            }
            if(fourth == '4' && pTurn == false)
            {
                pTurn = true;
                fourth = 'X';
            }
            if(fifth == '5' && pTurn == false)
            {
                pTurn = true;
                fifth = 'X';
            }
            if(sixth == '6' && pTurn == false)
            {
                pTurn = true;
                sixth = 'X';
            }
            if(seventh == '7' && pTurn == false)
            {
                pTurn = true;
                seventh = 'X';
            }
            if(eighth == '8' && pTurn == false)
            {
                pTurn = true;
                eighth = 'X';
            }
            if(ninth == '9' && pTurn == false)
            {
                pTurn = true;
                ninth = 'X';
            }
        }
        while(pTurn = false);
    }
    return 0;
}

int pEvaluator()
{
    if(pChoice == 1 && first == '1')
        first = 'O';
    if(pChoice == 2 && second == '2')
        second = 'O';
    if(pChoice == 3 && third == '3')
        third = 'O';
    if(pChoice == 4 && fourth == '4')
        fourth = 'O';
    if(pChoice == 5 && fifth == '5')
        fifth = 'O';
    if(pChoice == 6 && sixth == '6')
        sixth = 'O';
    if(pChoice == 7 && seventh == '7')
        seventh = 'O';
    if(pChoice == 8 && eighth == '8')
        eighth = 'O';
    if(pChoice == 9 && ninth == '9')
        ninth = 'O';
    return 0;
}

int ComEvaluator()
{
    if(cPick == 1 && first == '1')
        first = 'X';
    if(cPick == 2 && second == '2')
        second = 'X';
    if(cPick == 3 && third == '3')
        third = 'X';
    if(cPick == 4 && fourth == '4')
        fourth = 'X';
    if(cPick == 5 && fifth == '5')
        fifth = 'X';
    if(cPick == 6 && sixth == '6')
        sixth = 'X';
    if(cPick == 7 && seventh == '7')
        seventh = 'X';
    if(cPick == 8 && eighth == '8')
        eighth = 'X';
    if(cPick == 9 && ninth == '9')
        ninth = 'X';
    return 0;
}

void displayBoard()
{
    cout<< "-------------------\n";
    cout<< "|  " <<first << "  |  " << second << "  |  " << third << "  |\n";
    cout<< "-------------------\n";
    cout<< "|  " <<fourth << "  |  " << fifth << "  |  " << sixth << "  |\n";
    cout<< "-------------------\n";
    cout<< "|  " <<seventh << "  |  " << eighth << "  |  " << ninth << "  |\n";
    cout<< "-------------------\n";
}

int checkTie()
{
    if(first != '1' && second != '2' && third != '3' && fourth != '4' && fifth != '5' && sixth != '6' && seventh != '7' && eighth != '8' && ninth != '9')
    {gwin = 0;}
}


int main()
{
    srand(time(0));
    int playAgain;
    int pScore = 0;
    int comScore = 0;
    int draws = 0;

    do
    {
        system("CLS");
        firstTurn = 1; //rand()% (2 - 1 + 1)+1;
        crand = rand()% (9 - 1 + 1)+1;
        gwin = 3;
        first = '1';
        second = '2';
        third = '3';
        fourth = '4';
        fifth = '5';
        sixth = '6';
        seventh = '7';
        eighth = '8';
        ninth = '9';
        
        cout << "TicTacToe" <<endl<< endl;
        cout << "P: " << pScore << " Com: "<< comScore << " draws: " << draws << endl;

        if(firstTurn == 1)
        {
            cout << "\nChoose any of the Numbers on the board: \n"<<endl;
            displayBoard();
            while (!(cin >> pChoice))
            {
                cout << "\nError! Please Enter a number." << endl;
                cin.clear();
                cin.ignore(10000,'\n');
            }
            pEvaluator();
            system("CLS");
            displayBoard();
            pTurn = false;
        }

        if(firstTurn == 2)
        {
            crand;
            cPick = crand;
            ComEvaluator();
            cout << "Computer's turn:'\n" << endl;
            pTurn = true;
            displayBoard();
        }

        do
        {
            if(pTurn == true)
            {
                cout << "Choose any of the numbers on the board: "<<endl<<endl;
                while (!(cin >> pChoice))
                {
                    cout << endl;
                    cout << "Error! Please enter a number:" << endl;
                    cin.clear();
                    cin.ignore(10000,'\n');
                }
                pEvaluator();
                checkPWin();
                checkTie();
                pTurn = false;
            }

            if(pTurn == false)
            {
                moveGenerator();
                system("CLS");
                displayBoard();
                checkComWin();
                checkTie();
                pTurn = true;
            }
        }
        while(gwin > 2);

        if(gwin == 0)
        {
            cout << "It is a Draw!\n";
            ++draws;
			}

        if(gwin == 1)
        {
            cout << "Player beats AI!\n";
            ++pScore;
            }

        if(gwin == 2)
        {
            cout << "AI beats human!\n";
            ++comScore;
            }

        cout << "Player: " << pScore << " "<< "Computer: " << comScore << " draws: "<< draws << endl;
        cout << "Press '1' to RESTART, '2' to EXIT!\n\n";

        while (!(cin >> playAgain))
        {
            cout << "\nPress '1' to RESTART, '2' to EXIT!\n\n";
            cin.clear();
            cin.ignore(10000,'\n');
        }
    }
    while(playAgain == 1);

    return 0;
}

/*REFRENCES:
http://codereview.stackexchange.com/questions/66578/tic-tac-toe-counter-against-the-players-moves-and-count-scores
http://www.cplusplus.com/forum/general/13032/
https://www.youtube.com/watch?v=CwziaVrM_vc
*/
