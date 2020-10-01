#include<stdio.h> 
#include<stdlib.h> 

void heapify(int arr[], int n, int i){ 
    int largest = i;
    int l = 2*i + 1; 
    int r = 2*i + 2; 
  
    if (l < n && arr[l] > arr[largest]) largest = l; 
  
    if (r < n && arr[r] > arr[largest]) largest = r; 
  
    if (largest != i){ 
        int a = arr[i];
        arr[i] = arr[largest];
        arr[largest] = a;  
        heapify(arr, n, largest); 
    } 
} 

void heapSort(int arr[], int n){ 
    int i, j;
    for (i = n / 2 - 1; i >= 0; i--) heapify(arr, n, i); 
  
    for (j=n-1; j>0; j--){ 
        int a = arr[0];
        arr[0] = arr[j];
        arr[j] = a;  
        heapify(arr, j, 0); 
        printf("The largest no. in remaining unsorted list: %d \n", arr[j]);
    } 
    printf("The largest no. in remaining unsorted list: %d \n", arr[j]);
} 

void printArray(int arr[], int n){ 
    int i;
    for (i=0; i<n; ++i) printf("%d ", arr[i]); 
    printf("\n"); 
} 

int main(){ 
    int n, i;
    printf("Enter no. of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: \n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
  
    heapSort(arr, n); 
  
    printf("Sorted array is \n"); 
    printArray(arr, n); 
} 