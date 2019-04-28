#include <iostream>
#include<array>
using namespace std;
const size_t rows=3;
const size_t columns=5;


int main()
{
    array<array<int,columns>,rows>sales= {};
    for(size_t row=0; row<sales.size(); ++row)
    {
        for(size_t columns=0; columns<sales[row].size(); ++columns)
        {
            sales[row][columns]=0;
            cout<<"\ninitialize the sales "<<sales[row][columns]<<' ';
        }

        cout<<endl;
    }
}
