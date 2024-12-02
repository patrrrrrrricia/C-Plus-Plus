#include <iostream>

using namespace std;

int main()
{
    int x, m, ctpoz;
    cin>>x;
    m=100001; ctpoz=0;
    while(x!=0)
    { if(x>0)
    {
        ctpoz++;
        if(x<m) m=x;
    }
    cin>>x;
    }
    if(ctpoz==0)
    cout<<"NU EXISTA";
    else cout<<m;
    return 0;
}
