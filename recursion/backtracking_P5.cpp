// print n to 1 using backtracking


#include <iostream>
using namespace std;



void line(int i,int n){
    if(i>n){
        return;
    }
    line(i+1,n);
    cout<<i<<endl;
    

}
int main(){
    int n;
    cin>>n;
    line(1,n);
    return 0;
}
