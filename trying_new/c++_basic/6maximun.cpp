//finding the max between three numbers

#include<iostream>
using namespace std;

int main()
{ 

    int a,b,c;

    cout<<"enter value for a"<<endl;
    cin>>a;

    cout<<"enter value for b"<<endl;
    cin>>b;

    cout<<"enter value for c"<<endl;
    cin>>c;

    if(a>b && a>c)
    {
    cout<<"greatest :"<<endl;
    cout<<a;
    }

    else if(b>a && b>c)
    {
    cout<<"greatest :"<<endl;
    cout<<b;
    }

    else
    {
    cout<<"greatest :"<<endl;
    cout<<c;
    }

    return 0;
}