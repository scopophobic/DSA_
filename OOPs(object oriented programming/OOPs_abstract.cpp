//OOPs abstract basic layout

#include <bits/stdc++.h>
using namespace std;

class emp_abstract{
    virtual void ask_for()=0;
};

class emp: emp_abstract {
private:
    int age;
public: 
    string college;
    string name;
    void intro(){
        cout<<"------------------------------------------"<<endl;
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
    void ask_for(){
        if (age>=19){
            cout<<name<<" got promoted"<<endl;
        }
        else{
            cout<<name<<", sorry you didn't got the promotion"<<endl;
        }
    }

};


int main(){
    emp emp1=emp("adithyan","KCC institute",19);
    emp emp2=emp("adarsh","christ",18);
    emp1.ask_for();
    emp2.ask_for();
    


    return 0;
}
