//user input array

#include<iostream>
using namespace std;

int main()
{

    int n;
    int i;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int array[n];

    for(i = 0 ; i<n ; i++ )   // to take the input of array elements from the user
    {
        cin>>array[i];
    }
    

    for(i = 0; i<n ; i++)    // to display the input of array elements from the user
    {
    cout<<array[i]<<" ";
    }
    
    return 0;
}