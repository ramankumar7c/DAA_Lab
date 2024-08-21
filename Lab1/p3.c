#include<stdio.h>
void find_duplicates_and_most_repeating(int  arr[],int n, int *total_duplicates, int *most_repeating){
	int count[100]={0};
	*total_duplicates=0;
	*most_repeating=arr[0];
	
	for(int i=0;i<n;i++)
		count[arr[i]]++;
		
	for(int i=0;i<100;i++){
	if(count[i]>1)
		(*total_duplicates)++;
	if(count[i]>count[*most_repeating])
		*most_repeating=i;
	}
}
int main(){
	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter array : ");
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	int total_duplicates, most_repeating;
	find_duplicates_and_most_repeating(arr, n, &total_duplicates, &most_repeating);
	
	printf("Total Duplicates in the array : %d\n",total_duplicates);
	printf("Most Repeating in the array : %d\n",most_repeating);
	
	return 0;
}
