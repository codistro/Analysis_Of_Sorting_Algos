#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"sort.h"
void display(int *a,int n){
	int i;
	for(i = 0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
    int a[] = {9,8,7,6,5,4,3,2,1,0};
    //BubbleSort(a,10);
    //InsertionSort(a,10);
    //SelectionSort(a,10);
    //quick(a,0,9);
    //MergeSort(a,10);
    //heapSort(a,10);
    display(a,10);
    return 0;
}
