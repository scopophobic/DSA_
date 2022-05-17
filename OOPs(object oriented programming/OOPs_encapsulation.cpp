



#include <bits/stdc++.h>
using namespace std;

class emp {
private:
    int age;
public: 
    string college;
    string name;
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
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }
};


int main(){
    emp emp1=emp("adithyan","KCC institute",19);
    emp1.intro();

    emp emp2=emp("adarsh","christ",18);
    emp2.intro();
    emp2.setage(19);
    cout<<emp2.name<<" is "<<emp2.getage()<<" years old "<<endl;


    return 0;
}
