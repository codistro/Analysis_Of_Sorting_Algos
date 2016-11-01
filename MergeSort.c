#include<stdio.h>
#include<time.h>
void Merge(int *c,int *a,int aSize,int *b,int bSize){
    int i = 0,j = 0,k = 0;
    while(i<aSize && j<bSize){
        if(a[i]<=b[j])
           c[k++] = a[i++];
        else
           c[k++] = b[j++];
    }
    while(j<bSize)
        c[k++] = b[j++];
    while(i<aSize)
        c[k++] = a[i++];
}
clock_t start,end;
void MergeSort(int *a,int size){
    if(size == 1)
        return;
    int fh[100000],fhSize = 0, sh[100000],shSize = 0;
    int mid = size/2,i,j;
    for(i = 0;i<mid;i++)
        fh[i] = a[i];
    fhSize = i;
    for(i = 0;i<size - mid;i++)
        sh[i] = a[mid + i];
    shSize = i;
    MergeSort(fh,fhSize);
    MergeSort(sh,shSize);
    Merge(a,fh,fhSize,sh,shSize);
   
}
void display(int *a,int size){
   int i;
   for(i =0 ;i<size;i++)
    printf("%d ",a[i]);
   printf("\n");
}
int main(){
    int a[100000];
    int i,j;
    for(i = 100000,j = 0;i>0 && j<100000;i--,j++)
      a[j] = i;
    start = clock();
    MergeSort(a,100000);
    end = clock();
    double tTime = (double) (end-start)/CLOCKS_PER_SEC;
    display(a,100000);
    printf("%lf\n",tTime);
    return 0;
}