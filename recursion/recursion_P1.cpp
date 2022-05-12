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







//better and more standard way of coding recursion

#include <iostream>
#include <string>
using namespace std;


void print(string s, int n, int i){
    
    if(n<i){
        return;
    }
    cout<<s<<endl;
    print(s,n,i+1);
}


int main(){
    string s;
    cin>>s;
    int i=1,n;
    cin>>n;
    print(s,n,i);
    return 0;
}
