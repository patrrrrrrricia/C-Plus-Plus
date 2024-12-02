#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float B, b, l, d, h, o;
    cin>>B>>b>>l;
    o=(B-b)/2;
    h=sqrt(l*l-o*o);
    d=sqrt((b+o)*(b+o)+h*h);
    cout<<d<<endl;
    return 0;
}