#include<stdio.h>

int num,res;

void BT(int sum,int n)
{
	if(sum==num){
		res++;
		return;
	}
	else if(sum>num) return;

	for(int i=n;i<=3;i++){
		BT(sum+i,i);
	}
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&num);
		res=0;
		for(int i=1;i<=3;i++){
			BT(i,i);
		}	
		printf("%d\n",res);
	}
}
