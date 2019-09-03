/*Little chief has his own restaurant in the city. There are N workers there. Each worker
has his own salary. The salary of the i-th worker equals to Wi (i = 1, 2, ..., N). Once, chief
decided to equalize all workers, that is, he wants to make salaries of all workers to be
equal. But for this goal he can use only one operation: choose some worker and
increase by 1 salary of each worker, except the salary of the chosen worker. In other
words, the chosen worker is the loser, who will be the only worker, whose salary will
be not increased during this particular operation. But loser-worker can be different for
different operations, of course. Chief can use this operation as many times as he wants.
But he is a busy man. That is why he wants to minimize the total number of operations
needed to equalize all workers. Your task is to find this number.*/

#include<stdio.h>
int main()
{
	long int T;
	long long int N,M,i,j,count;
	long long int L[100000],R[100000],P[100000];
	scanf("%ld",&T);
	while(T--)
	{
		scanf("%ld%ld",&N,&M);
		for(i=0;i<N;i++)
			scanf("%lld%lld",&L[i],&R[i]);
		for(i=0;i<M;i++)
			scanf("%lld",&P[i]);
		for(i=0;i<M;i++)
		{
			count = 0;
			for(j=0;j<N;j++)
			{
				if(P[i]>=L[j] && P[i]<R[j])
				{
					count = 0;
					break;
				}
				else if(P[i] < L[j])
				{
					if(count == -1 || count == 0)
					{
						count = L[j]-P[i];
					}
					else if(count > L[j]-P[i])
					{
						count = L[j]-P[i];
					}
				}
				else if(P[i] >=R[i] && (count == 0 || count == -1)) 
				{
					count = -1;
				}
			}
			printf("%lld\n",count);
		}
	}
	return(0);
}