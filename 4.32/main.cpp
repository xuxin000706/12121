#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout << "enter three side: " << endl;
    cin>>a>>b>>c;
    if(a>0&&b>0&&c>0)
    {
        if(a+b>c&&a+c>b&&b+c>a)
        cout<<"yes";
        else
            cout<<"no";
    }
    else
        cout<<"no";

    return 0;
}
