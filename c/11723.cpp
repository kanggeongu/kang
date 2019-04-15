#include<stdio.h>
#include<string.h>

int main(void)
{
	bool check[21]={0};
	int M;
	scanf("%d",&M);
	while(M--){
		char st[10];
		int x=0;
		scanf("%s",st);
		if(!strcmp(st,"add")){
			scanf("%d",&x);
			check[x]=1;
		}
		else if(!strcmp(st,"check")){
			scanf("%d",&x);
			printf("%d",check[x]);
		}
		else if(!strcmp(st,"remove")){
			scanf("%d",&x);
			check[x]=0;
		}
		else if(!strcmp(st,"toggle")){
			scanf("%d",&x);
			if(check[x]==1) check[x]=0;
			else check[x]=1;
		}
		else if(!strcmp(st,"all")){
			memset(check,1,sizeof(check));
		}
		else{
			memset(check,0,sizeof(check));
		}

	}
}
