#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double t,a,b;
    int ans;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>a>>b;
        ans=ceil(abs(a-b)/10);
        cout<<ans<<endl;
    }
 
    return 0;
 
}