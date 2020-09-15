#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],count=0;
    cin>>n;
 
    for(int i=0; i<n; i++)
        cin>>a[i];
 
    sort(a,a+n);
 
 
    for(int i=0; i<n-2; i++)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            count++;
            break;
        }
    }
    if(count==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 
}