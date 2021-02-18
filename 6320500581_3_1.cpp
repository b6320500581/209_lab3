#include<stdio.h>
int main()
{
    int a,i,j,n,max=0,w=0;
    for(i=0;i<5;i++)
    {
        a=0;
        for(j=0;j<4;j++)
        {
            scanf("%d" ,&n);
            a+=n;
        }
        if(a>max)
        {
            max=a;
            w=i+1;
        }
    }
    printf("%d %d\n" ,w,max);

    return 0;
}
