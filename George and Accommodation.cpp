#include<stdio.h>
int main()
{
    int i,p,q,n,s,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&p,&q);
        s=q-p;
        if(s>=2)
       {
          count++;
       }
    }
 
    printf("%d\n",count);
    return 0;
 
}