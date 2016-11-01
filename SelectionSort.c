#include<stdio.h>
void SelectionSort(int *a,int size){
    int i,j,smallpos,temp;
    for(i = 0 ;i<size;i++){
        smallpos = i;
        for(j = i+1;j<size;j++){
            if(a[i]>a[j])
                smallpos = j;
        }
        temp = a[smallpos];
        a[smallpos] = a[i];
        a[i] = temp;
    }
}
void display(int *a,int size){
   int i;
   for(i =0 ;i<size;i++)
    printf("%d ",a[i]);
   printf("\n");
}
int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    SelectionSort(a,10);
    display(a,10);
    return 0;
}
