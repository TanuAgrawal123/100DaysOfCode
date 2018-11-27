#include<stdio.h>
#include<string.h>
int main()
{
    int x=0,y=0,l;
    char S[201];
    scanf("%s",S);
    l=strlen(S);
    for(int i=0;i<l;i++)
    {
        if(S[i]=='L')
        x--;
        else if(S[i]=='R')
        x++;
        else if (S[i]=='U')
        y++;
        else
        y--;

    }
    printf("%d %d",x,y);

   return 0;
}
