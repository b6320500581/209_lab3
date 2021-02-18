#include<stdio.h>

int main()
{
    int m,i;
    scanf("%d",&m);
    if(m==1)
        printf("1\n");
    for(i=2;m>1;i++)
    {
        if(m%i==0)
        {
            m/=i;
            printf("%d\n",i);
            i=1;
        }
    }
    printf("0");
    return 0;
}
