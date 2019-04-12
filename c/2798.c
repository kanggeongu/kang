#include<stdio.h>

int N,M,max;
int arr[101];

void BT(int idx,int sum,int count)
{
	if(sum>M) return;
	if(count==3){
		max = (max>sum?max:sum);
		return;
	}

	for(int i=idx+1;i<N;i++){
		BT(i,sum+arr[i],count+1);
	}
}

int main(void)
{
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++) scanf("%d",&arr[i]);
	for(int i=0;i<N;i++){
		BT(i,arr[i],1);
	}
	printf("%d\n",max);
}
