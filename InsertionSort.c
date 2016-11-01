#include<stdio.h>
#include<time.h>
clock_t start, end;
void InsertionSort(int *a,int size){
    int i,j;
    int temp;
    start = clock();
    for(i = 0;i<size-1;i++){
        j = i + 1;
        temp = a[j];
        while(j>0 && (temp < a[j-1])){
            a[j] = a[j-1];
            j--;
        }
        a[j] = temp;
        
    }
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
    InsertionSort(a,100000);
    end = clock();
    double tTime = (double)(end - start)/CLOCKS_PER_SEC;
    display(a,100000);
    printf("%lf\n",tTime);
    return 0;
}