#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    unsigned int frequency1=0;
    unsigned int frequency2=0;

    for( unsigned int roll=1;roll<=100;++roll)
    {
        unsigned int face = rand()%2;
        switch(face)
    {
        case 0:
             ++frequency1;
             break;
        case 1:
             ++frequency2;
             break;

    default:
        cout<<"Program should never get here"<<endl;

    }
    }
    cout<<"     Face"<<setw(17)<<"Frequency"<<endl;
    cout<<"     Head"<<setw(13)<<frequency1
    <<"\n     Tail"<<setw(13)<<frequency2;

}
