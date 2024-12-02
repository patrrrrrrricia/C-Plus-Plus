#include <iostream>

using namespace std;

int main()
{
    int n, m, gasit=0;
    cin>>n>>m;
    int a, b=m;
    while(m and !gasit)
    {
        a=n;
        while(a>0 and !gasit)
        {
            if(a%10==m%10) {gasit=1;}
            a=a/10;
        }
        m/=10;
    }
    if(gasit) cout<<"DA";
    else cout<<"NU";
    return 0;
}
