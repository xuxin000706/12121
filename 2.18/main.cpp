#include<iostream>
using namespace std;
int main()
{
	int number1,number2;

	cout<<"Enter two integers: ";
    cin>>number1>>number2;

	if(number1==number2)
			cout<<"These numbers are equal"<<endl ;
    if(number1<number2)
			cout<<number2<<" is large"<<endl ;
    if(number1>number2)
			cout<<number2<<" is large"<<endl ;

    return 0;
}
