#include <iostream>
using namespace std;
 
int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    d=a+(b*c);
    e=a*(b+c);
    f=a*b*c;
    g=(a+b)*c;
    h=a+b+c;
    d=max(d,e);
    d=max(d,f);
    d=max(d,g);
    d=max(d,h);
    cout<<d;
    return 0;
 
}
 