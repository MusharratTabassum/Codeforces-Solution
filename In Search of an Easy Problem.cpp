#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b=0,c=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a;
        if(a==0)
            b++;
        else
            c++;
    }
    if(c>0)
      cout<<"HARD"<<endl;
    else
      cout<<"EASY"<<endl;
 
    return 0;
}