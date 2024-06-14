//program to output wether a number is divisible by both 2 and 3 or divisible by only one of them 

#include<iostream>
using namespace std;

int main()
{
    int i;

    cin>>i;

    if(i % 2 == 0  && i % 3 == 0)
    {
      cout<<"it is divisible by both of them"<<endl;
      
    }
    

    if(i % 2 == 0 || i % 3 == 0) 
    {
        cout<<"it is divisible by one of them"<<endl;
    }

    else
    cout<<"useless";

    return 0;
}

