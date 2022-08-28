/*Burger Cafe profit/loss system*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
void rules();
int main()
{
    string playerName;
    int balance;  //stores the balance
    int bettingAmount;
    int guess;
    int dice;  //stores the random generator
    char choice;
    srand(time(0)); //"seed" the random generator
    cout<<"\n\t\t *************WELCOME TO THE CASINO WORLD***************"<<endl;
    cout<<"\n Enter your name: "<<endl;
    cin>>playerName;
    cout<<"\n Enter the starting balance to play the game: $"<<endl;
    cin>>balance;

    do
    {
        system("cls");
        rules();
        cout<<"\n\n\n Your current balance is: "<<balance<<endl;
 //get player's betting balance
        do
        {
            cout<<"Hey "<<playerName<<"enter the betting amount to bet:  $"<<endl;
            cin>>bettingAmount;
            if(bettingAmount>balance)
            {
                cout << "Betting balance can't be more than current balance!\n";
                cout<<"Re-enter balance amount"<<endl;
            }
        }while(bettingAmount > balance);

//get player's numbers
        do
        {   
            cout<<"\n Guess any number between 1-10: ";
            cin>>guess;
            if(guess <=0 || guess >= 10)
            {
                cout<<"\n Number should be between 1 to 10"
                    <<"Renter number"<<endl;
            }

        }while(guess <=0 || guess >= 10);
        dice = rand()%10 + 1;
        if(dice==guess)
        {
            cout<<"\n\n You are in luck!!!! You have won Rs. "<<bettingAmount * 10;
            balance = balance + bettingAmount * 10;

        }
        else
        {
            cout<<"Oops! Better luck next time!! You lost "<<bettingAmount<< " $";
            balance = balance - bettingAmount;
        }
        cout<<"\n\n The winning number was "<<dice<<endl;
        cout<<"\n"<<playerName<<"\n , You have balance of $ "<<balance<<"\n";
        if(balance==0)
        {
            cout<<"\n You have no money to play! ";
            break;

        }
        cout<<"\n Do you want to play again? (y/n) ?"<<endl;
        cin>>choice;


    }while(choice=='Y' || choice=='y');
    
    cout<<"\n\n\n";
    cout<<"\n\n Thanks for playing the game! Your balance is $ "<<balance<<endl;

    
}
void rules()
{
    system("cls");
    cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}
