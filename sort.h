

//Bubble Sort implementation


void BubbleSort(long *a,long size){
    long i,j = 0,temp,swap =1 ;
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
}

//End of Bubble Sort




//Heap sort implementation

void maxheap(long *a,long n,long i){
    long l,r,largest,temp;
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
void heapSort(long *a,long n){
    long temp,i;
    for(i = n/2;i>=0;i--)
        maxheap(a,n,i);
    for(i = n-1;i>=0;i--){
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        maxheap(a,i,0);
    }
}

//End of heap Sort


//Insertion Sort implementation

void InsertionSort(long *a,long size){
    long i,j;
    long temp;
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

//End of Insertion Sort



//Merge Sort Implementation


void Merge(long *c,long *a,long aSize,long *b,long bSize){
    long i = 0,j = 0,k = 0;
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
void MergeSort(long *a,long size){
    if(size == 1)
        return;
    long fh[6000],fhSize = 0, sh[6000],shSize = 0;
    long mid = size/2,i,j;
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


//End of Merge Sort



//Quick Sort Implementation

long divide(long *a,long low,long high){
    long mid,temp,lastSmall,i,pivot;
    mid = (low + high)/2;
    temp = a[low];
    a[low] = a[mid];
    a[mid] = temp;
    pivot = a[low];
    lastSmall = low;

    for(i = low + 1;i<high;i++){
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


void quick(long* a,long low,long high){
    if(low<high){
        long pivot = divide(a,low,high);
        quick(a,low,pivot);
        quick(a,pivot + 1,high);
    }
}

//End of Quick Sort



//Selection Sort Implementation

void SelectionSort(long *a,long size){
    long i,j,smallpos,temp;
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

//End of Selection Sort
