#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,FirstOne=0,SecondOne=0,none=0;
    cin>>a>>b;
    for(int i=1;i<7;i++)
    {
        if(abs(a-i)>abs(b-i))
           SecondOne++;
        else if(abs(a-i)<abs(b-i))
            FirstOne++;
        else none++;
    }
    cout<<FirstOne<<" "<<none<<" "<<SecondOne;
}