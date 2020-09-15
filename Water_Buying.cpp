#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long int n,a,b,ans;
        cin>>n>>a>>b;
        if(n==1)
        {
            cout<<n*a<<endl;
            continue;
        }
        ans=b*(n/2)+(n%2)*a;
        cout<<min(a*n,ans)<<endl;
 
    }
    return 0;
}