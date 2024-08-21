#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

void find_kth_smallest_and_largest(int arr[], int n, int k,int *kth_smallest, int *kth_largest){
	if(n<k){
		*kth_smallest = *kth_largest = -1;
		return;
	}
	bubbleSort(arr,n);
	
	*kth_smallest=arr[k-1];
	*kth_largest=arr[n-k];
}

int main(){
	int n,i,k;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	printf("Enter value of k : ");
	scanf("%d", &k);
	
	int kth_smallest, kth_largest;
	find_kth_smallest_and_largest(arr,n,k,&kth_smallest,&kth_largest);
	
	if(kth_smallest == -1 || kth_largest == -1)
		printf("Invalid Input");
	else{
		printf("%dth smallest element of the array is %d\n",k,kth_smallest);
		printf("%dth largest element of the array is %d\n",k,kth_largest);
	}
	return 0;
}
