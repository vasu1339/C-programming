#include<iostream>
using namespace std;

int main()
{
    int a = 1;
    
    a = a++ + ++a;
    //  1   +   3
    cout<<a<<endl;

    int i = 1;
    int j = 2;
    int k = 3;   
    int z; 
    z = i + j + i++ + j++ + ++i + ++j ;
   //   1 + 2 + 1(2)+ 2(3)+   3 +   4  = 13   
    cout<<z<<endl;


    int p = 0;
    p = p++ - --p + ++p - p--;
    //  0(1)-   0 +   1 - 1(0) = 0
    cout<<p<<endl;   


    int m = i-- - j-- - k--;
    //      1(0)- 2(1)- 3(2) = 0
    cout<<m<<endl;

    int r = 10;
    int s = 20;
    int t;
    t = r--   - r++   +   --s   -   ++s   +   --r   -   s--   +   ++r   -   s++;
    //  10(9) - 9(10) +    19   -    20   +    9    -   20(19)+    10   -   19(20) = 
    cout<<t;
    return 0;
}