#include <iostream>

using namespace std;

int iseven(int x)
{
    int y;
    y=x%2;
    if(y==0)
        return true;
    else
        return false;
}

int main()
{
    int number=0,result=0;
    cout << "enter a number  and enter -1 to end";
    cin>>number;
    while(number!= -1)
    {
        result=iseven(number);
        cout<<"the result is "<<result<<endl;
        cin>>number;
    }
    return 0;
}
