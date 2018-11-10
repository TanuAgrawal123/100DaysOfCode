#include<stdio.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
   {count=0;
       for(j=i+1;j<n;j++)
       {
           if(arr[i]<arr[j])
           {count++;
           break;
           }


       }
       if(count==0)
           printf("%d ",arr[i]);
   }
   printf("%d",arr[n-1]);
   return 0;
}
