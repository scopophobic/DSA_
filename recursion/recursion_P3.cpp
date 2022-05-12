//Question) print linearlly from n to 1.

#include <iostream>
using namespace std;



void line(int n,int i){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    line(n-1,i);

}
int main(){
    int n,i=1;
    cin>>n;
    line(n,i);
    return 0;
}
