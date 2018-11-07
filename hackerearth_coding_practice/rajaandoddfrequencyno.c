#include<stdio.h>

int main()
{
    int n,p,i;
    scanf("%d",&n);


    long a[n*2+1];

    for(i=0;i<=n*2;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a[0];
    for(i=1;i<=n*2;i++)
    {
        p=p^a[i];

    }
    printf("%d",p);
    return 0;

}
