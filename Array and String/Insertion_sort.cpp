
//Insertion Sort Algorithm 


#include <bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole--;
        }
        arr[hole]= value;
    }
}

int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    
    int arr[]={45,56,2,34,44,12,45,76,34,23,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    printarr(arr,n);
    return 0;
}
