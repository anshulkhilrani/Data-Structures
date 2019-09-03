/*Implement a singly linked list with the following operations: I - check for empty
condition AF O - adds first element o AL O - adds last element o RF - removes the first
element RL - removes the last element L - returns the last element in the list F -
returns the first element in the list REV - reverses the linked list*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
  int data;
  struct node *ptr;
}*start=NULL,*t,*end,*npr;
void createLinkedList(int n)
{
  for(int i=0;i<n;i++)
  {
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data at node %d : ",(i+1));
    scanf("%d",&((*t).data));
    t->ptr = NULL;
    if(start==NULL)
    {
      start = t;
    }
    else
    {
      end->ptr = t;
    }
    end = t;
    end->ptr=start;
  }
}
void displayLinkedList(struct node * start)
{
  for(t=start;t->ptr!=NULL;t=t->ptr)
  {
    printf("%d ",t->data);
  }
  printf("%d",t->data);
}
void insertLinkedList(int pos, int ele)
{
  t = (struct node *)malloc(sizeof(struct node));
  (*t).data = ele;
  if(pos==1)
  {
    t->ptr = start;
    start = t;
  }
  else
  {
    npr = start;
    for(int i=2;i<pos;i++)
    {
      npr = npr->ptr;
    }
    t->ptr = npr->ptr;
    npr->ptr = t;
  }
}

void deletionLinkedList(int pos)
{
  if(pos==1)
  {
    t = start;
    start = start->ptr;
  }
  else
  {
    npr = NULL;
    t = start;
    for(int i=1;i<pos && t->ptr!=NULL;i++)
    {
      npr = t;
      t = t->ptr;
    }
    npr->ptr = t->ptr;
  }
  free(t);
}

void main()
{
  int n,x;
  printf("Enter number of elements in the linked list :");
  scanf("%d",&n);
  createLinkedList(n);
  char option[2];
  do
  {
    printf("Enter your operation :");
    scanf("%s",option);
    if(strcmp(option,"AF")==1)
    {
      printf("Enter the value to be added at first node :");
      scanf("%d",&x);
      insertLinkedList(1,x);
      n++;
      x=NULL;
    }
    else if(strcmp(option,"AL")==1)
    {
      printf("Enter the value to be added at last node :");
      scanf("%d",&x);
      insertLinkedList(n,x);
      n++;
      x=NULL;
    }
    else if(strcmp(option,"RF")==1)
    {
      deletionLinkedList(1);
      n--;
      x=NULL;
    }
    else if(strcmp(option,"RL")==1)
    {
      deletionLinkedList(n);
      n--;
      x=NULL;
    }
    else if(strcmp(option,"PF")==1)
    {
      t = start->ptr;
      printf("%d",(*t).data);
      t = NULL;
    }
    else if(strcmp(option,"PL")==1)
    {
      t = end;
      printf("%d",(*t).data);
      t = NULL;
    }
  }
  while(strcmp(option,"AL")!=1);
}
