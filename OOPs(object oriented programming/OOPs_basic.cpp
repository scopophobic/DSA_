//basic struture of OOPs.

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
};


int main(){
    emp emp1;
    emp1.name="Adithyan";
    emp1.college="KCC";
    emp1.age=20;
    emp1.intro();

    emp emp2;
    emp2.name="Adrash";
    emp2.college="christ";
    emp2.age=19;
    emp2.intro();
    return 0;
}
