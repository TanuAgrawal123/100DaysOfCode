#include<stdio.h>
int main()
{

    int T,N,K,i,p,count;
    scanf("%d",&T);
    while(T--)
    {
    int N;
  count=0;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    A[i]=0;
    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        scanf("%d",&p);
        A[p-1]=1;


    }
    scanf("%d",&K);
    for(i=1;i<=K;i++)
    {
        scanf("%d",&p);
        A[p-1]=1;

    }
    for(i=0;i<N;i++)
    {
        if(A[i]==0)
        {count++;
        break;
        }

    }
    if(count==0)
    printf("YES\n");
    else
    printf("NO\n");
    }
    return 0;
}
