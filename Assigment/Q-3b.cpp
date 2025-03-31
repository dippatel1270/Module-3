#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int guess,attempt = 0,i;
    bool guessed = false;
    int sn = (rand() % 100) +1;

    cout<<"Welcome to the number game"<<endl;
    cout<<"\nI have picked a number between 1 to 100, Try to guess it ";

    for(i=1;i<=10;i++)
    //You have 10 attempts
    {
        attempt++;
        cout<<"\nAttempt "<<i<<" : Enter your guess number : ";
        cin>>guess;

        if(guess<sn)
        {
            cout<<"Too low,try again"<<endl;
        }
        else if(guess>sn)
        {
            cout<<"Too high,try again"<<endl;
        }
        else
        {
            cout<<"\nCongratulation you got the right number ";
            cout<<"\nAttempts = "<<attempt;
            guessed = true;
            break;
        }
    }

    if(guessed != true)
    {
        cout<<"\n\nYou ran out of attempt. The number was : "<<sn;
    }
    return 0;
}