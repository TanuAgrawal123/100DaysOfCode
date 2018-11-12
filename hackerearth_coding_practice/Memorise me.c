#include<stdio.h>
int main()
{
    int N,Q,i,p,j,count;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);

    }
    scanf("%d",&Q);
    for(i=1;i<=Q;i++)
    {
        scanf("%d",&p);
    count=0;
    for(j=0;j<N;j++)
    {if(p==A[j])
    count++;
    }
    if(count==0)
    printf("NOT PRESENT\n");
    else
    printf("%d\n",count);
    }
    return 0;
}
