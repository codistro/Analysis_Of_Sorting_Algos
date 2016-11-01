#include<stdio.h>
#include<time.h>
clock_t start,end;
void BubbleSort(int *a,int size){
    start = clock();
    int i,j = 0,temp,swap =1 ;
    for(i = 0;i<size && swap;i++){
        swap = 0;
        for(j = 0 ;j< size - i - 1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap = 1;
            }
        }
    }
    /*do{
        swap = 0;
        for(i = 0;i < size-1;i++){
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swap = 1;
            }
        }
    }while(swap);*/
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
    BubbleSort(a,100000);
    end = clock();
    double tTime = (double)(end - start)/CLOCKS_PER_SEC;
    display(a,100000);
    printf("%lf\n",tTime);
    return 0;;
}