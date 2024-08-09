#include <iostream>
#include <ctime>
#include<cstdlib>

#define Rock 1
#define Paper 2
#define Scissors 3

using namespace std;

int main ()
{
    srand ((unsigned int) time (NULL));
    int player_option=0;
    int computer_option=0;
    bool draw=false;

    do
    {
        cout<<"Choose 1 option "<<endl;
        cout<<"1 Rock "<<endl;
        cout<<"2 Paper "<<endl;
        cout<<"3 Scissor "<<endl;
        cout<<"option :";
        cin>>player_option ;
        cout<<endl;

        computer_option = (rand () %3)+1;

        if (computer_option==Rock)
        {
            cout<<"Computer throws rock "<<endl;
        }
        else if (computer_option==Paper)
        {
            cout<<"Computer throws paper "<<endl;
        }
        else if (computer_option==Scissors)
        {
            cout<<"Computer throws scissors "<<endl;
        }
        
        draw =false ;

        if (player_option==computer_option)
        {
            draw=true ;
            cout<<"  ! Draw ! "<<endl;
            cout<<"Enter the option agian "<<endl;
        }
        else if (player_option==Rock && computer_option==Scissors)
        {
            cout<<"Rocks beats Paper ! You win ."<<endl;
        }
        else if (player_option==Rock && computer_option==Paper)
        {
            cout<<"Paper beats Rock ! You lose ."<<endl;
        }
        else if (player_option==Paper && computer_option==Scissors)
        {
            cout<<"Scissors beats Paper ! You lose ."<<endl;
        }
        else if (player_option==Paper && computer_option==Rock)
        {
            cout<<"Paper beats Rock ! You Win ."<<endl;
        }
        else if (player_option==Scissors && computer_option==Paper)
        {
            cout<<"Scissors beats Paper ! You win ."<<endl;
        }
        else if (player_option==Scissors && computer_option==Rock)
        {
            cout<<"Rock beats Scissors ! You lose ."<<endl;
        }


    } while (draw);
    
}