//check wether the number is prime or not

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(int i=2;i<n;i++)
    {
      if(n%i == 0)
      cout<<"its a non prime number"<<endl;
      else
      cout<<"its a prime number"<<endl;
      break;
    }


    return 0;
}