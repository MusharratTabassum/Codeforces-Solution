#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
 
    if(a==b)
        cout<<a*10+8<<" "<<b*10+9<<endl;
    else if(b==a+1)
        cout<<a*10+9<<" "<<b*10<<endl;
    else if(a>b)
    {
        if(b*10-a==1)
            cout<<a<<" "<<b*10<<endl;
        else  cout<<"-1"<<endl;
    }
    else
        cout<<"-1"<<endl;
 
    return 0;
}