#include <stdlib.h>
#include<stdio.h>
int main()
{
long long int n,ans,i;
while((scanf("%lld",&n))!=EOF)
{
ans=0;
while(n!=0)
{
if(n%2==1) ans++;
n=n/2;
}
printf("%lld\n",ans);
}
return 0;
}
