#include<stdio.h>

int N,M;
int res[8];

void BT(int num,int count)
{
	res[count]=num;
	if(count==M){
		for(int i=1;i<=count;i++){
			printf("%d ",res[i]);
		}
		puts("");
		return;
	}

	for(int i=1;i<=N;i++){
		BT(i,count+1);
	}
}

int main(void)
{
	scanf("%d %d",&N,&M);
	for(int i=1;i<=N;i++){
		BT(i,1);
	}
}
