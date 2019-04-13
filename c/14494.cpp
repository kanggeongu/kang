#include<stdio.h>
#define div 1000000007

int dp[1001][1001];
int N,M;

int DFS(int x,int y)
{
	if(x==N-1 && y==M-1) return 1;
	if(dp[x][y]) return dp[x][y];
	int X=x+1,Y=y+1;
	if(X<N) {
		dp[x][y]+=DFS(X,y);
		dp[x][y]%=div;
	}
	if(Y<N){
	       	dp[x][y]+=DFS(x,Y);
		dp[x][y]%=div;
	}
	if(X<N && Y<N){
	       	dp[x][y]+=DFS(X,Y);
		dp[x][y]%=div;
	}
	return dp[x][y]%=div;
}

int main(void)
{
	scanf("%d %d",&N,&M);
	printf("%d\n",DFS(0,0)%div);
}
