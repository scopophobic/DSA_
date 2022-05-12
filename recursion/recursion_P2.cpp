//print linearlly from 1 to n


#include <iostream>
using namespace std;



void line(int n,int i){
    if(n<i){
        return;
    }
    cout<<i<<endl;
    line(n,i+1);

}
int main(){
    int n,i=1;
    cin>>n;
    line(n,i);
    return 0;
}
