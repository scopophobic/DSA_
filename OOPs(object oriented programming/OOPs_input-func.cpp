//input using function 

#include <bits/stdc++.h>
using namespace std;

class emp {
public:
    string name;
    string college;
    int age;
    void intro(){
        cout<<"---------------------------------------------------------------------------"<<endl;
        cout<<"Name- "<<name<<endl;
        cout<<"College- "<<college<<endl;
        cout<<"Age- "<<age<<endl;
    }
    emp(string n, string c, int a){
        name=n;
        college=c;
        age=a;
    }
};


int main(){
    emp emp1=emp("Adithyan","KCC Institute Of Technology and Management",19);
    emp1.intro();

    emp emp2=emp("Adarsh","Christ",18);
    emp2.intro();
    return 0;
}
