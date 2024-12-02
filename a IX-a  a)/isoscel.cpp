#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
    { if (a==b && a!=c || a==c && a!=b || b==c && b!=a) cout<<"Formeaza triunghi isoscel";
     else cout<<"Nu formeaza triunghi isoscel";
    }
     else cout<<"Nu formeaza triunghi";
    return 0;
}
