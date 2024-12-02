#include <iostream>

using namespace std;

int main()
{
    int x, k, ct, c;
    cin>>k>>x;
    ct=0;
    while(x!=0)
      {
           if(x%2==0)
            while(x!=0)
           {
               c=x%10;
               x/=10;
               if(c==k) ct++;
           }
      cin>>x;
    }
    cout<<ct;
    return 0;
}