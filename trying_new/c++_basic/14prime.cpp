#include<iostream>
using namespace std;

int main()
{
    int a ,b;
    int i;
    cout<<"enter a value"<<endl;
    cin>>a;

    cout<<"enter b value"<<endl;
    cin>>b;

    for(int num = a ; num<= b ; num++)
    {
        for( i = 2 ; i<num ; i++)
        {
        if(num%i == 0)
            break;
        }

        if(i==num)
            cout<<num<<endl;
    }

    return 0;
}