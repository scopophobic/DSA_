//print name five times

#include <iostream>
#include <string>
using namespace std;


void print(string n){
    static int c=0;
    if(c<5){
        cout<<n<<endl;
        c++;
    }
    print(n);
}


int main(){
    string n;
    cin>>n;
    print(n);
    return 0;
}
