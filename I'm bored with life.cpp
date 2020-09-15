#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,minimize;
    long long int p=1;
 
    cin>>a>>b;
 
    minimize=min(a,b);
 
    for(int i=1; i<=minimize; i++)
        p*=i;
 
    cout<<p<<endl;
 
    return 0;
}