#include<stdio.h>

void prefix_sum(int arr[], int n, int prefix_sum_arr[]){
	prefix_sum_arr[0]=arr[0];
	for(int i=1;i<n;i++)
		prefix_sum_arr[i]=prefix_sum_arr[i-1]+arr[i];
}

int main(){
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n],prefix_sum_arr[n];
	printf("Enter array : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	prefix_sum(arr, n, prefix_sum_arr);
	
	printf("Prefix Sum Array : ");
	for(int i=0;i<n;i++)
	printf("%d ",prefix_sum_arr[i]);
	printf("\n");
	
	return 0;
}
