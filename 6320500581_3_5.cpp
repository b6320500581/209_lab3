#include<stdio.h>
int main()
{
     int num,i,a,n=0,k=1;
    scanf("%d",&num);
     a=num;
    for(i=2;a>1;i++)
    {
        if(a%i==0)
        {
            if(k==i)
                break;
            a/=i;
            k=i;
            i=1;
            n++;
        }
    }
    if(n==3)
        printf("%d is a Lucky Number.",num);
    else
        printf("%d is not a Lucky Number.",num);
    return 0;
}
