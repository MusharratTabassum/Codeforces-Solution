#include<stdio.h>
int main()
{
    int m,n,y,z;
    scanf("%d%d",&n,&m);
    y=pow(2,n);
    z=m%y;
 
    printf("%d",z);
 
    return 0;
}