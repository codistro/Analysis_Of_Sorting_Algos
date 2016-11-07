#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"sort.h"
#define MAX_SIZE 100000

//function to initialize the array with random values
void randomInit(long *a,long size){
	int i = 0;
	for(i = 0;i<size;i++)
		a[i] = rand();
}
int main(){
    long a[MAX_SIZE];
    double timeTaken;
    clock_t time;

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    time = clock();  //clock starts

    //calling Bubble Sort
    BubbleSort(a,MAX_SIZE);

    time = clock() - time; //clock ends

    //measuring time taken by Bubble sort Algo
    timeTaken = (double)(time/CLOCKS_PER_SEC);

    //Displaying time taken by Bubble Sort
    printf("Bubble Sort\t%f\n",timeTaken);

    //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    time = clock();  //clock starts

    //calling Selection Sort
    SelectionSort(a,MAX_SIZE);

    time = clock() - time; //clock ends

    //measuring time taken by Selection sort Algo
    timeTaken = (double)(time/CLOCKS_PER_SEC);

    //Displaying time taken by Selection Sort
    printf("Selection Sort\t%f\n",timeTaken);
    return 0;
}

