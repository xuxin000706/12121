#include <iostream>

using namespace std;

int main()
{
    int total=1;
    for(int counter=1;counter<=15;counter=counter+2)
        total=total*counter;
    cout <<total  << endl;
    return 0;
}
