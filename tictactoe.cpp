#include<iostream>

using namespace std;
char space[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='x';
string player1;
string player2;
bool tie=false;

void Drawboard()
{


    
  
    cout<<"     |     |   \n";
    cout<<"  "<<space[0][0]<<"  |  "<<space[0][1]<<"  |  "<<space[0][2]<<"\n ";
    cout<<"____|_____|_____\n";
    cout<<"     |     |   \n";
    cout<<"  "<<space[1][0]<<"  |  "<<space[1][1]<<"  |  "<<space[1][2]<<"\n ";
    cout<<"____|_____|____\n";
    cout<<"     |     |   \n";
    cout<<"  "<<space[2][0]<<"  |  "<<space[2][1]<<"  |  "<<space[2][2]<<"\n ";
    cout<<"    |     |   \n";
    

}
void functiontwo()
{
    int digit;
    if(token=='x')
    {
        cout<<player1<< "  please enter: ";
        cin>>digit;
    }
    if(token=='0')
    {
        cout<<player2<< "  please enter: ";
        cin>>digit;
    }
    if(digit==1)
    {
        row=0;
        column=0;
    }
    if(digit==2)
    {
        row=0;
        column=1;
    }
    if(digit==3)
    {
        row=0;
        column=2;
    }
    if(digit==4)
    {
        row=1;
        column=0;
    }
    if(digit==5)
    {
        row=1;
        column=1;
    }
    if(digit==6)
    {
        row=1;
        column=2;
    }
    if(digit==7)
    {
        row=2;
        column=0;
    }
    if(digit==8)
    {
        row=2;
        column=1;
    }
    if(digit==9)
    {
        row=2;
        column=2;
    }
    else if(digit<1 || digit>9)
    {
        cout<<"\n Invalid";
    }

    if(token=='x' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column]='x';
        token='0';
    }
    else if(token=='0' && space[row][column] != 'x' && space[row][column] != '0')
    {
        space[row][column]='0';
        token='x';
    }
    else
    {
        cout<<"\n There is no empty space";
        functiontwo();

    }
    Drawboard();
}
bool functionthree()
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i]&& space[0][i]==space[2][i] ) //to check if they are same or not horizontally and vertically
        {
            return true;
        }
        if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0]) //to check if the values are same diagonally
        {
            return true;
    
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j] != 'x' || space[i][j] != '0' )
            {
                return false;
            }
        }
    }
    tie = true;
    return false;
}

int main()
{
   cout<<"\n Enter the name of the first player: ";
    cin>>player1;
    cout<<"\n Enter the name of the second player: ";
    cin>>player2;

    cout<<player1<<"is player1 so he/she will play first";
    cout<<player2<<"is player2 so he/she will play second";


    while(!functionthree()) //iterate until function3 doesnt return false
    {
        Drawboard();
        functiontwo();
        functionthree();
    }

    if(token=='x' && tie==false)
    {   
        cout<<player1<<"\n  Wins!";

    }
    else if(token=='0' && tie==false)
    {   
        cout<<player1<<"\n  Wins!";

    }
    else
    {
        cout<<"\n Its a Draw!";
    }
}



