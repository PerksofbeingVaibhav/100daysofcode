#include <stdio.h>
#include <stdlib.h>
struct node{
    int d;
    struct node *next;
    
}*s=NULL;
void insert()
{
  printf("enter data : ");
  int a;
  scanf("%d",&a);
  if(s==NULL)
  {
      struct node *temp;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->next=NULL;
      temp->d=a;
      s=temp;
  }
  else
  {
      struct node *temp,*p;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->d=a;
      temp->next=NULL;
      p=s;
      while(p->next!=NULL)
      p=p->next;
      p->next=temp;
  }
}
void disp()
{
    struct node *temp;
      temp=(struct node*)malloc(sizeof(struct node));
      temp=s;
      while(temp!=NULL)
      {
           printf("%d->",temp->d);
           temp=temp->next;
      }
}
int main()
{
        int ch;
    while(1)
    {
        printf("press 1 to insert at end\n");
        printf("press 2 to dispaly\n");
    printf("anykey to stop\n");
    printf("enter choice :\n");
    scanf("%d",&ch);
    switch(ch)
    {   case 1:
        insert();
        break;
        case 2:
        disp();
        break;
        default:
        exit(5);
    }
    
    }
    return 0;
}
