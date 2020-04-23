#include<stdio.h>
int main()
{
    int t,a,b,c,count=0,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==2 || b+c==2 || c+a==2 || a+b+c==3)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
