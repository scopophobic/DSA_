//Selection sort algorithm

#include <bits/stdc++.h>
using namespace std;

// int insertion_sort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int value=arr[i];
//         int hole=i;
//         while(hole>0 && arr[hole-1]>value){
//             arr[hole]=arr[hole-1];
//             hole--;
//         }
//         arr[hole]= value;
//     }
// }

// int bubble_sort(int arr[],int n){
//     for(int k=0;k<n-1;k++){
//         for(int i=0;i<n-k-1;i++){
//             if(arr[i]>arr[i+1]){
//                 swap(arr[i],arr[i+1]);
//                 }
//             }
//         }
    
// }
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, min_idx;
 
    
    for (i = 0; i < n-1; i++)
    {
       
       
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        
        swap(&arr[min_idx], &arr[i]);
    }
}

int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    
    int arr[]={45,56,2,36,44,12,41,76,34,23,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    printarr(arr,n);
    return 0;
}
