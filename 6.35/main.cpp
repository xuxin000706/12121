#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void game();


int main()
{
    srand(time(0));
    game();
    return 0;
}

void game()
{
    int guess=1+rand()%1000;
    int number=0;
    char judge;
    int i=0;
    do{

    cout<<"I have a number between 1 and 1000.\n";
    cout<<"Can you guess my number?"<<endl;
    cout<<"Please type your first guess"<<endl;
    cin>>number;



    while(number!=guess)
    {
        if(number<guess)
        {

            cout<<"too low.\nTry again ";
            cin>>number;
        }
        if(number>guess)
        {
            cout<<"too high.\nTry again";
            cin>>number;
        }
        i++;
    }

        cout<<"Excellent!You guessed the number!"<<endl;
        if(i<10)
            cout<<"Either you know the secret or you got lucky!"<<endl;
        if(i==10)
            cout<<"Ahah! You know the secret!"<<endl;
        if(i>10)
            cout<<"You should be able to do better!"<<endl;
        cout<<"Would you like to play again (y or n)?";
        cin>>judge;
    }while(judge=='y');
}



