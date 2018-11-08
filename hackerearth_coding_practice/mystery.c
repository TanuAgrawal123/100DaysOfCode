#include<stdio.h>
#include<math.h>
int main()
{
    int count=0,temp;
    long long int N;
    while(scanf("%lld",&N)==1)
    {count=0;
    if(N==0)
    {printf("%d\n",N);
    }
    else{
        while(N>0)
       { temp=N%2;
        if(temp==1)
       { break;

       }
       count++;
       N=N/2;
       }
       printf("%d\n",(int)pow(2,count));
    }
    }
return 0;
}
