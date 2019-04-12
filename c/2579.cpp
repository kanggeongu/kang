#include<stdio.h>

int N;
int dp[301][2];
int arr[301];

int DFS(int idx,int state,int count)
{
	if(idx==N) return arr[idx];
	if(dp[idx][state]) return dp[idx][state];

	int max=0,temp;
	if(idx+2<=N){
		temp=DFS(idx+2,1,1)+arr[idx];
		max = (max>temp?max:temp);
	}

	if(count!=2){
		temp=DFS(idx+1,0,count+1)+arr[idx];
		max = (max>temp?max:temp);
	}

	return dp[idx][state]=max;
}

int main(void)
{
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d\n",DFS(0,0,0));
}
