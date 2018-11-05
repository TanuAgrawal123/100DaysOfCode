#include<stdio.h>
int main()
{
    int T,count=0,rem=0;

    long int N;
    scanf("%d",&T);

    while(T--)
    {scanf("%ld",&N);
    count=0;
     while(N!=0)
     {
         rem=N%2;
         N=N/2;
         if(rem==1)
         count++;


     }
     printf("%d\n",count);

    }
 return 0;
}
