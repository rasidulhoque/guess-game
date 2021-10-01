#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    const int MAX_NUMBER =100;
    int secrectno =(rand()% MAX_NUMBER)+1;
    int tries=0;
    int guess;
    cout<<"\twelcome to Guess My Number Game"<<endl;
    cout<<"Guess my secrect number between 1 and 100:::::"<<endl<<endl;
    cout<<MAX_NUMBER<<"."<<endl<<endl;

    do
    {
        cout<<"ENTER A GUESS: ";
        cin>>guess;
        tries++;
        if(guess > secrectno)
        {
            cout<<"TOO HIGH!!"<<endl<<endl;
        }
        if(guess < secrectno)
        {
            cout<<"TOO LOW!!"<<endl<<endl;
        }
    } while (guess!=secrectno);
    cout<<"\n";
    cout<<"You win! You got it in "<< tries <<" tries!";
    return 0;
}