#include<stdio.h>
int main()
{
    int N,i=1;
    scanf("%d",&N);
    while(N>(i+(2*i)))

    {

    N=N-3*i;
    i++;

    }
    if(N<i)
    printf("Patlu");
    else
    printf("Motu");
    return 0;
