/*A Little Elephant and his friends from the Zoo of Lviv like candies very much. 
There are N elephants in the Zoo. 
The elephant with number K (1 ≤ K ≤ N) will be happy if he receives at least 2+AK candies. 
There are C candies in all in the Zoo. 
The Zoo staff is interested in knowing whether it is possible to make all the N 
elephants happy by giving each elephant at least as many candies as he wants, that is, 
the Kth elephant should receive at least 2+AK candies. Each candy can be given to only one elephant. 
Print Yes if it is possible and No otherwise.*/
#include<stdio.h>

int main(){
    int t,n,i,j;
    int A[1000];
    long long int c;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        scanf("%lli",&c);
        for(j=0;j<n;j++){
            scanf("%d",&A[j]);
            c=c-A[j];
            }
                if(c<0){
                    printf("No");
            }
                else{
                    printf("Yes");
                    }
                    }
    return 0;
}