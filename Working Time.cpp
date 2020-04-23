#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m,h1,h2,m1,m2,val,sum=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        sum=0;
        cin>>n>>m;
        for(int j=0; j<n; j++)
        {
            scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
            val=abs((h1*60+m1)-(h2*60+m2));
            sum+=val;
 
        }
        if(sum>=m*60)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 
    return 0;
}