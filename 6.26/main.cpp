#include <iostream>
#include <iomanip>

using namespace std;

double celsius(double F)
{
    double C;
    C=0.55*(F-32);
    return C;
}
double fahrenheit(double c)
{
    double f;
    f=1.8*c+32;
    return f;
}

int main()
{
    double result_f=0,result_c=0;
    cout<<"celsius"<<setw(13)<<"fahrenheit"<<endl;
    for(double i=1.0;i<=100;i++)
    {
        result_f=fahrenheit(i);
        cout<<i<<setw(13)<<result_f<<endl;
    }
    cout<<"fahrenheit"<<setw(13)<<"celsius"<<endl;
    for(double j=32;j<=212;j++)
    {
        result_c=celsius(j);
        cout<<j<<setw(13)<<result_c<<endl;
    }


}
