#include<stdio.h>


int divide(int *a,int low,int high){
	int mid,temp,lastSmall,i,pivot;
	mid = (low + high)/2;
	temp = a[low];
	a[low] = a[mid];
	a[mid] = temp;
	pivot = a[low];	
	lastSmall = low;

	for(i = low + 1;i<=high;i++){
		if(a[i] < pivot){
			lastSmall++;
			temp = a[lastSmall];
			a[lastSmall] = a[i];
			a[i] = temp;
		}
	}

	temp = a[low];
	a[low] = a[lastSmall];
	a[lastSmall] = temp;

	return lastSmall;

} 


void quick(int* a,int low,int high){
	if(low<high){
		int pivot = divide(a,low,high);
		quick(a,low,pivot);
		quick(a,pivot + 1,high);
	}
}

int main(){
	int a[50],i = 0;
	while(i<50){
		scanf("%d ",&a[i]);
		i++;
	}
	quick(a,0,49);
	int j = 0;
	while(j<50){
		printf("%d ",a[j]);
		j++;
	}
	return 0;
}