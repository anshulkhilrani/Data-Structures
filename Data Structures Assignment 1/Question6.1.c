//Let assume an array A of size n. Perform an exchange such that ‘A[j]’ becomes ‘i’ if
‘A[i]’ is ‘j’
#include<stdio.h>
void main(){
int a[100],i,j,n;
printf("Enter size of Array:");
scanf("%d",&n);
printf("Enter Array:");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=0;i<n;i++){
   j=a[i];
   if(i==j)
	a[j]=i;
}
for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
