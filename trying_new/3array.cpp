//taking array from user and printing max and min of data present in the arrray

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int array[n];

    for(int i = 0 ; i<n ; i++)
    {
        cin>>array[i];
    }

    int maxno = INT_MIN;   // INTMIN is the lowest default value
    int minno = INT_MAX;   // INTMAX is the highest default value

    for(int i = 0 ; i<n ; i++)
    {
       maxno = max(maxno , array[i]); // max will compare both the values and return the largest
       minno = min(minno , array[i]);

    }

       cout<<maxno<<endl;
       cout<<minno<<endl;
    
    return 0;
}