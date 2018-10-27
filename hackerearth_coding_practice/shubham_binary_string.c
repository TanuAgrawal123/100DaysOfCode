#include<stdio.h>
int main()
{char A[100001];
    int N,T,i,c;
    scanf("%d",&T);
    while(T--)
    {c=0;
    scanf("%d",&N);
    scanf("%s",A);
    for(i=0;i<N;i++)
   { if(A[i]=='0')
    c++;
   }
   printf("%d\n",c);
   }return 0;
}
