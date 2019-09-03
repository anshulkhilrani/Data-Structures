/*There are 150 houses located on a straight line. The first house is numbered 1 and the
last one is numbered 150. Some M houses out of these 150 are occupied by cops.
Thief Devu has just stolen PeePee's bag and is looking for a house to hide in.
PeePee uses fast 4G Internet and sends the message to all the cops that a thief named
Devu has just stolen her bag and ran into some house.
Devu knows that the cops run at a maximum speed of x houses per minute in a straight
line and they will search for a maximum of y minutes. Devu wants to know how many
houses are safe for him to escape from the cops. Help him in getting this information.*/
#include<stdio.h>
int main() {
	int test;
	scanf("%d",&test);
	while(test--) {
		int m,x,y,arr[100],i,count=0;
		scanf("%d%d%d",&m,&x,&y);
		for(i=0;i<100;i++)
			arr[i]=0;
		while(m--) {
			int cop,min,max;
			scanf("%d",&cop);
			min=cop-x*y;
			max=cop+x*y;
			min<1?min=1:min;
			max>100?max=100:max;
			for(i=min-1;i<max;i++)
				arr[i]=1;
		}
		for(i=0;i<100;i++)
			if(arr[i]==0)
				count++;
		printf("%d\n",count);
	}
	return 0;
}