#include<stdio.h>
int main()
{
    int T,N,i,j,count;
scanf("%d",&T);
while(T--)
{
    count=0;
scanf("%d",&N);
for(i=1;i<N;i++)
{
    for(j=i+1;j<=N;j++)
   {
       if((i^j)<=N)

        count++;

   }
}
printf("%d\n",count);
}
return 0;
}
