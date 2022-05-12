//sum of n natural number using recursion 

#include <iostream>
using namespace std;



void sum(int i,int sum1){
    if(i<1){
        cout<<sum1<<endl;
        return;
    }
    sum(i-1,sum1+i);    

}
int main(){
    int i;
    cin>>i;
    int sum1=0;
    sum(i,sum1);
    return 0;
}
