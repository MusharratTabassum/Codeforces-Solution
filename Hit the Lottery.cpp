#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,result,mod;
    cin>>a;
    mod=a%100;
    result=a/100+mod/20+(mod%20)/10+
             ((mod%20)%10)/5+(((mod%20)%10)%5);
    cout<<result<<endl;
    
    return 0;
}