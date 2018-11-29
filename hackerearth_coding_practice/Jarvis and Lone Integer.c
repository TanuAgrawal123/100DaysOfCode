#include<stdio.h>
int main()
{int T,N,ans,i,flag;
scanf("%d",&T);
while(T--)

{
scanf("%d",&N);
long int A[N];
for(i=0;i<N;i++)
{
    scanf("%ld",&A[i]);
}

for(i=0;i<N-1;i++)
{flag=0;

for(int j=0;j<N;j++)

{if (i==j)
continue;
    ans=A[i]^A[j];
if(ans==0)
{flag=1;

break;

}
}
if(flag==0)
{printf("%ld\n",A[i]);
break;
}}




if(flag==1)
printf("-1\n");
}
return 0;
}



