//  

#include<iostream>
using namespace std;

int main()
{
    int row , col ;

    cin>>row>>col ; 
    // row = 4 and col = 5
    for(int i = 1 ; i<=row ; i++) //will execute 4 times in total and for every one count it will execute inner loop , it will execute outer loop 4 times
    {
        for(int j = 1 ; j<=col ; ++j) //  will execute 5 times and return to parent for loop
        {
        cout<<"+";
        
        }
        cout<<endl;
        
    }

    return 0;
}

