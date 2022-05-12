//print 1 to n using backtracking

#include <iostream>
using namespace std;



void line(int i,int n){
    if(i<1){
        return;
    }
    line(i-1,n);
    cout<<i<<endl;
    

}
int main(){
    int n;
    cin>>n;
    line(n,n);
    return 0;
}
