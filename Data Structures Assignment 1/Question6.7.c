//Reverse the linked list by changing the link of the nodes only.
#include<stdio.h>
void main()
{int s,i,j,min=0,max=0;
 printf("Enter size of array;");
 scanf("%d",&s);
 int a[s];
 printf("Enter array elements:");
 for(i=0;i<s;i++)
 scanf("%d",&a[i]);
 for(i=0;i<s;i++)
  for(j=0;j<s-1;j++)
   if(a[j]>a[j+1])
   {int temp=a[j];
 	a[j]=a[j+1];
 	a[j+1]=a[j];
   }
   min=a[0];
   max=a[s-1];
   printf("Maximum=%d 	Minimum=%d",max,min);   
}
