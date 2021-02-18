#include<stdio.h>
int main()
{
    long long x,i;
    int p;
    scanf("%lld",&x);
    for(x;x>=0;x--)
    {
        p=1;
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
        {
            printf("%lld",x);
            break;
        }

    }
}
