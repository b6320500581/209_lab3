#include<stdio.h>
int main()
{
     int i,n,a,b,t[48]={0},max=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        t[a-1]+=b;
    }
    for(i=0;i<48;i++)
    {
        if(max<t[i])
        {
            max=t[i];
            x=i;
        }
    }
    printf("%d %d",x+1,t[x]);
}
