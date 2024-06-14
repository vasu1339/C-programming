#include<iostream>  // functions like cout will work
using namespace std;
int main()   //will start the beginning of execution
{
  cout<<"hello this is my 4th c++ program"<<endl;  //"std::cout" will display the output in ""

  // std is short of standard and belongs to namespace std
  // i can simple write namespace std after my header file
  // << insertion operator
  // >> extraction operator
  

  //how to use user input in c++
  int amount1;
  cout<<"enter amount given my dad"<<endl;
  cin>>amount1;

  int amount2;
  cout<<"enter amount given my mom"<<endl;
  cin>>amount2;

  int sum = amount1 + amount2 ; 
  cout<<"the sum of amount given by dad and mom :"<<endl;
  cout<<sum;


return 0;  //exits the status of the function , used while "int main" is used
}