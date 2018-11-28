#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int t,L,K,k;

scanf("%s",a);
 scanf("%d",&K);
L=strlen(a);
for(int i=0;i<L;i++)
{

    if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
    {if((a[i]>=65&&a[i]<=90-K)||(a[i]>=97&&a[i]<=122-K))
        {a[i]=a[i]+K;

        printf("%c",a[i]);
        }
        else if(a[i]>=(90-K+1)&&a[i]<=90)
        {k=90-a[i];
        a[i]=65+K-1-k;
        printf("%c",a[i]);
        }else
        {
            k=122-a[i];
            a[i]=97+K-1-k;
            printf("%c",a[i]);

        }
    }

    else if(a[i]>=48&&a[i]<=57-K)
    {
        a[i]=a[i]+K;
        printf("%c",a[i]);
    }
        else if((a[i]>=(57-K+1))&&a[i]<=57)
        {
            k=57-a[i];
            a[i]=48+K-1-k;
            printf("%c",a[i]);
        }    else

            printf("%c",a[i]);
 }
        return 0;







}
