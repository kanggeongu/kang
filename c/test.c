#include<stdio.h>

int main(){
	int N;
	printf("숫자를 입력해주세요: ");
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		puts("");
	}
	return 0;
}
