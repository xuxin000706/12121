#include <iostream>

using namespace std;

int main()
{
    int number=0,total=0,average=0;
    cout<<"enter 9999 to end ";
    cin>>number;

    for(int i=1; number!=9999; i++)
    {
        cout<<"enter 9999 to end";
        total=total+number;
        average=total/i;
        cin>>number;

    }
    cout << "average is" <<average<< endl;
    return 0;
}
