
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;

};


int main()
{
    int T,N,K,count;
    struct node*temp,*n,*q;
    struct node*start;
    scanf("%d",&T);
    while(T--)
    {count=0;
        scanf("%d %d\n",&N,&K);
        start=NULL;
        for(int i=1;i<=N;i++)
        {
            n=(struct node*)malloc(sizeof(struct node));
            scanf("%d",&(n->info));
            n->next=NULL;
            if(start==NULL)
            start=n;
            else
            {
                temp=start;
                while(temp->next!=NULL)
                {
                    temp=temp->next;

                }
                temp->next=n;

            }
        }
        temp=start;
        while((temp->next!=NULL)&&(count!=K))
        {
            if((temp->info)<((temp->next)->info))
            {
              if(temp==start)
              {start=temp->next;

              free(temp);
              temp=start;
              count++;
              }
              else

            { q->next=temp->next;

              temp=temp->next;
             count++;

             }

            }
            else
            {q=temp;
            temp=temp->next;
            }

        }
      temp=start;
        while(temp->next!=NULL)
        {
        printf("%d ",temp->info);
        temp=temp->next;
        }
        printf("%d",temp->info);
        printf("\n");
    }
    return 0;
  }











