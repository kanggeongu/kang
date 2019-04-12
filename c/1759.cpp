#include<stdio.h>

char res[16];
char arr[16];
int N,M;
char temp[16];

void BT(int a_count,int b_count,int count,int idx)
{
	res[count]=arr[idx];
	if(count==M-1){
		for(int i=0;i<count;i++) printf("%c",res[i]);
		puts("");
		return;
	}

	for(int i=idx+1;i<N;i++){
		if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
			BT(a_count+1,b_count,count+1,i);
		}
		else{
			BT(a_count,b_count+1,count+1,i);
		}
	}
}

void merge(int left,int right,int mid)
{
	if(left>=right) return;
	int i=left,j=mid+1,k=left;
	while(i<=mid && j<=right){
		if(arr[i]<arr[j]) temp[k++]=arr[i++];
		else temp[k++]=arr[j++];
	}
	while(i<=mid){
		temp[k++]=arr[i++];
	}
	while(j<=right){
		temp[k++]=arr[j++];
	}

	for(int l=left;l<=right;l++) arr[l]=temp[l];
}

void divide(int left,int right)
{
	if(left>=right) return;
	int mid = (left+right)/2;
	divide(left,mid);
	divide(mid+1,right);
	merge(left,right,mid);
}

int main(void)
{
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++){
		scanf(" %c", &arr[i]);
	}
	divide(0,N-1);
	for(int i=0;i<N;i++){
		if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'){
			BT(1,0,0,i);
		}
		else{
			BT(0,1,0,i);
		}
	}
}
