#include<stdio.h>
int main()
{int T,N,ans,i;
scanf("%d",&T);
while(T--)

{
scanf("%d",&N);
long int A[N];
for(i=0;i<N;i++)
{
    scanf("%ld",&A[i]);
}
ans=A[0];
for(i=1;i<N;i++)
{
ans=ans^A[i];


}
if (ans==0)
printf("-1");
else
printf("%d\n",ans);
}
return 0;
}
