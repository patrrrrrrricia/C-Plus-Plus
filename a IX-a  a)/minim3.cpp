#include <iostream>

using namespace std;

int main()
{
    int a,b,c,mn;
    cin>>a>>b>>c;
    if(a<b) mn=a;
    else mn=b;
    if(c<mn) mn=c;\
        cout<<mn;
    return 0;
}
