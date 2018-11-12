#include<stdio.h>
int main()
{
    int T,N,count,i;
    ;

    scanf("%d",&T);
    while(T--)
    {
        count=1;
        scanf("%d",&N);
       int A[N],min;

        scanf("%d",&A[0]);
        min=A[0];
        for(i=1;i<N;i++)
        {
            scanf("%d",&A[i]);
            if(min>=A[i])
            {count++;
            min=A[i];

            }

        }
        printf("%d\n",count);


    }
    return 0;

}
