#include <iostream>

using namespace std;

int main()
{
    long m, n, f=2;
    cin>>n>>m;
    bool adv=true;
    while(n>1)
    {
        if(n%f==0)
        {
            if(m%f!=0) adv=false;
            while(n%f==0)
                n/=f;
            while(m%f==0)
                m/=f;
        }
        f++;
        if(f*f>n) f=n;
    }
    if(adv && m==1) cout<<"DA";
    else cout<<"NU";
    return 0;
}
