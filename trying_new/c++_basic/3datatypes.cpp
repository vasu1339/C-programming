#include<iostream>
using namespace std;

int main()
{
  int a;
  a = 200;

  // DATA TYPES

  cout<<"size of int " << sizeof(a) << endl;
  
  char b;
  cout<<"size of char "<< sizeof(b) << endl;

  float c;
  cout <<"size of float : " << sizeof(c) <<endl;

  bool d;
  cout <<"size of bool : " << sizeof(d) <<endl;

  //TYPE MODIFIERS

  short int si;
  long int li;

  // in this way we can modify the size of datatypes
  cout <<"size of short int : " << sizeof(si) <<endl;
  cout <<"size of long int : " << sizeof(li) <<endl;

  return 0;
}