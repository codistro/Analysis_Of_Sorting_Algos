#include<stdio.h>

void maxheap(int *a,int n,int i){
	int l,r,largest,temp;
	l = 2*i + 1;
	r = 2*i + 2;
	largest = i;
	if(l<n && a[l] > a[i])
		largest = l;
	if(r<n && a[r] > a[largest])
		largest = r;
	if(largest!=i){
		temp = a[largest];
		a[largest] = a[i];
		a[i] = temp;
		maxheap(a,n,largest);
	}
}
void heapSort(int *a,int n){
	int temp,i;
	for(i = n/2;i>=0;i--)
		maxheap(a,n,i);
	for(i = n-1;i>=0;i--){
		temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		maxheap(a,i,0);
	}
}
int main(){
	int a[20];
	int i;
	for(i = 0;i<20;i++){
		scanf("%d",&a[i]);
	}
	heapSort(a,20);
	for(i = 0;i<20;i++){
		printf("%d ",a[i]);
	}
	return 0;
}