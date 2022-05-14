//reversing array with recursive function

#include <iostream>
using namespace std;



int reverse(int arr[],int i,int s){
    if(i>=s/2) {
        return 1;
    }
    int temp=arr[i];
    arr[i]=arr[s-i-1];
    arr[s-i-1]=temp;
    
    reverse(arr,i+1,s);
}

int printarr(int arr[],int i,int s){
    if(i>=s) return 1;
    cout<<arr[i]<<" ";
    printarr(arr,i+1,s);
}
int main(){
    int arr[]={2,5,6,7,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]),i=0;
    reverse(arr,i,s);
    printarr(arr,i,s);
    return 0;
}
