#include<stdio.h>

void Pr(char* a){
	printf("%s\n",a);
}

int main(void){
	char str[30];
	scanf("%s",str);
	Pr(str);
}
