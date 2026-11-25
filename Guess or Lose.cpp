#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void points();

int main()
{
    string player;
    long long Amount;
    long long Amount_bid;
    int let;
    int Dice;
    char option;

    srand(static_cast<unsigned int>(time(0)));

    cout << "\n\t\t Guess a number and earn the money!!! ";

    cout << "\n\nEnter the name of the player: ";
    getline(cin, player);

    cout << "\nEnter the initial amount to deposit: $";

    while (!(cin >> Amount) || Amount <= 0)
    {
        cout << "Enter a valid positive amount: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    do
    {
        system("cls");
        points();

        do
        {
            cout << "\n\nWELCOME " << player << " READY TO PLAY?\n\n";

            cout << "Enter Bid Amount: $";
            cin >> Amount_bid;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                Amount_bid = 0;
            }

            if (Amount_bid <= 0 || Amount_bid > Amount)
            {
                cout << "\nBid amount cannot exceed current amount "
                     << "or be zero.\n";
            }

        } while (Amount_bid <= 0 || Amount_bid > Amount);

        do
        {
            cout << "\nYou are supposed to guess a number from 1 to 10: ";
            cin >> let;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                let = 0;
            }

            if (let < 1 || let > 10)
            {
                cout << "\nNumber should lie between 1 to 10."
                     << "\nGuess the Number Again: ";
            }

        } while (let < 1 || let > 10);

        Dice = rand() % 10 + 1;

        if (Dice == let)
        {
            cout << "\nCONGRATULATIONS YOU WON "
                 << Amount_bid * 10 << "$";

            Amount = Amount + Amount_bid * 10;
        }
        else
        {
            cout << "\nSORRY YOU LOST "
                 << Amount_bid << "$";

            Amount = Amount - Amount_bid;
        }

        cout << "\n\nThe winning number is: " << Dice << "\n";

        cout << "\n" << player
             << ", The remaining amount is: "
             << Amount << "$\n";

        if (Amount == 0)
        {
            cout << "\nNo Money left to play.\n";
            break;
        }

        do
        {
            cout << "\nDo you want to play the game again (y/n)? ";
            cin >> option;

            if (option != 'y' && option != 'Y' &&
                option != 'n' && option != 'N')
            {
                cout << "Please enter y or n.\n";
            }

        } while (option != 'y' && option != 'Y' &&
                 option != 'n' && option != 'N');

    } while (option == 'y' || option == 'Y');

    cout << "\nThank you for playing this game again.\n";
    cout << "Your current amount is: " << Amount << "$\n";

    return 0;
}

void points()
{
    cout << "\nRules for this game are listed below:";

    cout << "\n1. Enter any number from 1 to 10.";

    cout << "\n2. WINNING AMOUNT = 10X BID AMOUNT.";

    cout << "\n3. LOSING AMOUNT = BID AMOUNT.";

    cout << "\n4. You are free to leave this game anytime.\n";
}