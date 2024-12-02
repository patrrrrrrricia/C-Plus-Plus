#include <iostream>

using namespace std;

int main()
{
    int a, b, c, n, x, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        if(x==1) cout<<"DA\n";
        else
        {
            a=b=1;
            while(a+b<=x)
            {
                c=a+b;
                a=b;
                b=c;
            }
        if(c==x) cout<<"DA\n";
        else cout<<"NU\n";
        }
    }
    return 0;
}