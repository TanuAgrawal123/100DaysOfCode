#include<stdio.h>
int main()
{
    int N,X,count=0,skip=0;
    scanf("%d %d",&N,&X);
    int A[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&A[i]);

    if(A[i]<=X)
    {
        count++;
    }
    else
    {
        skip++;
    }
    if(skip==2)
    {
        break;
    }
    }
    printf("%d",count);
    return 0

}
