//do while will execute atleast once even if my condition fails unlike while loop

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
      
    do{
      cout<<n<<endl;
      cin>>n;
    }while(n>0);

    return 0;
}