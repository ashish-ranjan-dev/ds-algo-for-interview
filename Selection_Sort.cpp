#include <bits/stdc++.h> 
using namespace std; 
void swap(int &a, int &b)  
{  
    int temp = a;  
    a=b;  
    b=temp;  
}    
void selectionSort(int arr[], int n)  
{
    for(int i=0;i<n-1;i++)  
    {  
        int p=i;  
        for(int j=i+1;j<n;j++)  
        if(arr[j]<arr[p])  
    		p=j;    
        swap(arr[p], arr[i]);  
    }  
}  
void printArray(int arr[], int n)  
{  
    int i;  
    for (i=0;i<n;i++)  
        cout<<arr[i]<<" ";  
    cout<<endl;  
}  
int main()  
{  
    int arr[]={12, 11, 13, 5, 6};  
    int n=sizeof(arr)/sizeof(arr[0]);  
    selectionSort(arr, n);  
    printArray(arr, n);  
    return 0;  
}  
