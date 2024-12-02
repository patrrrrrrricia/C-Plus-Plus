#include <iostream>

using namespace std;

int main()
{
    int n, nr1=0, nr2=0, p1=1, p2=1, c;
    cin>>n;
    while(n!=0)
    {
        c=n%10;
        if(c%2==0)
        {
            nr1=nr1+c*p1;
            p1=p1*10;
        }
        else
        {
            nr2=nr2+c*p2;
            p2=p2*10;
        }
        n/=10;
    }
    if(nr1>nr2) cout<<nr1-nr2;
    else cout<<nr2-nr1;
    return 0;
}