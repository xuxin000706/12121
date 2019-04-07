#include <iostream>

using namespace std;

int main()
{
    int counter=2,number=0,large=0,largest=0;
        cout<<"enter the number ";
        cin>>largest;
        cout<<"enter the number ";
        cin>>number;
        if(largest<number)
            {
                large=largest;
                largest=number;
            }
        else
            large=number;
   while(counter<10)
   {
       cout<<"enter the number ";
       cin>>number;
       counter++;
      if (largest<number)
        {
            large=largest;
            largest=number;
        }
      else
      {
          if(large<number)
            large=number;

      }
   }


    cout<<"The largest is :"<<largest<<endl<<"The second large is "<<large;
    return 0;
}
