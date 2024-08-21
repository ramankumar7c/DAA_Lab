#include<stdio.h>
void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void rotate_right(int arr[], int p){
	if(p<=1)
		return;
		
	int last_element=arr[p-1];
	for(int i=p-1;i>0;i--)
		arr[i]=arr[i-1];
	arr[0]=last_element;
}

int main(){
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter array : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Array before right rotation : ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
	
	rotate_right(arr,5);
	
	printf("Array after right rotation : ");
	for(int i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
	
	return 0;
}
