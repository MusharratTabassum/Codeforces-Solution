#include<stdio.h>
int main()
{
    long long int n,p=-1;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        printf("%I64d\n",n/2);
    }
    else
    {
        n=(n/2)+1;
        p=p*n;
        printf("%I64d\n",p);
    }
    return 0;
}