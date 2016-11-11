#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"sort.h"
#define MAX_SIZE 10000

//function to initialize the array with random values
void randomInit(long *a,long size){
	int i = 0;
	for(i = 0;i<size;i++)
		a[i] = rand();
}
int main(){
    long a[MAX_SIZE];
    double timeTaken;
    clock_t start,end;

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Bubble Sort
    BubbleSort(a,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Bubble sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Bubble Sort
    printf("Bubble Sort\t%f\n",timeTaken);

    //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Selection Sort
    SelectionSort(a,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Selection sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Selection Sort
    printf("Selection Sort\t%f\n",timeTaken);

    //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Insertion Sort
    InsertionSort(a,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Insertion sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Selection Sort
    printf("Insertion Sort\t%f\n",timeTaken);

    //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Merge Sort
    MergeSort(a,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Merge sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Selection Sort
    printf("Merge Sort\t%f\n",timeTaken);

    //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Quick Sort
    quick(a,0,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Quick sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Selection Sort
    printf("Quick Sort\t%f\n",timeTaken);


     //******************************

    //initializing array with random values
    randomInit(a,MAX_SIZE);

    start = clock();  //clock starts

    //calling Heap Sort
    heapSort(a,MAX_SIZE);

    end = clock(); //clock ends

    //measuring time taken by Heap sort Algo
    timeTaken = (double)(end-start)/CLOCKS_PER_SEC;

    //Displaying time taken by Selection Sort
    printf("Heap Sort\t%f\n",timeTaken);


    return 0;
}

