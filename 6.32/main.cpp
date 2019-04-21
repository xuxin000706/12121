#include <iostream>

using namespace std;

int qualityPoints(int x)
{
    if(x<=100&&x>=90)
        return 4;
    else if(x<90&&x>=80)
        return 3;
    else if(x<80&&x>=70)
        return 2;
    else if(x<70&&x>=60)
        return 1;
    else
        return 0;

}

int main()
{
    int grade=0;
    cout << "enter grade" << endl;
    cin>>grade;
    cout<<"The point is "<<qualityPoints(grade);
    return 0;
}
