//reverse a function using recursion


#include <iostream>
using namespace std;

int reverse(int arr[], int s){
    if(s==0) {
        return 0;
    }
    cout<<arr[s-1]<<" ";
    reverse(arr,s-1);
}


int main(){
    int arr[]={2,5,6,7,4,5,6};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<reverse(arr,s);
    
    return 0;
}
