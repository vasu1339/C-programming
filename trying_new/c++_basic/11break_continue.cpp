#include<iostream>
using namespace std;

int main()
{
    int pocketmoney = 3000;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(pocketmoney == 0)
        {
            break;
        }
     cout<<endl<<"go out today"<<endl;
     pocketmoney = pocketmoney-300;
     cout<<  pocketmoney;

    }
    return 0;
}