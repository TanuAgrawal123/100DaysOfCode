#include<stdio.h>
int main()
{
    int a[100000],b[10000],d,n,i,t;
    scanf("%d %d\n",&n,&d);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);



    }
    t=d;
    i=0;
    while(t<n)
    {
        b[i]=a[t];
        i++;
        t++;

    }
    t=0;
    while(i<n)
    {b[i]=a[t];
    i++;
    t++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);






    }
    return 0;

}
