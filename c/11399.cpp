#include<stdio.h>

int temp[1001];

void merge(int *arr,int left,int right,int mid)
{
	int i=left,j=mid+1,k=left;
	while(i<=mid && j<=right){
		if(arr[i]<arr[j]) temp[k++]=arr[i++];
		else temp[k++]=arr[j++];
	}
	while(i<=mid) temp[k++]=arr[i++];
	while(j<=right) temp[k++]=arr[j++];

	for(int l=left;l<=right;l++) arr[l]=temp[l];
}

void divide(int *arr,int left,int right)
{
	if(left>=right) return;
	int mid=(left+right)/2;
	divide(arr,left,mid);
	divide(arr,mid+1,right);
	merge(arr,left,right,mid);
}

int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[1001]={0};
	for(int i=0;i<N;i++) scanf("%d",&arr[i]);
	divide(arr,0,N-1);
	int res=0;
	for(int i=0;i<N;i++){
		res += arr[i]*(N-i);
	}
	printf("%d\n",res);
}
