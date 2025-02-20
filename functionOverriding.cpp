#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void getInfo(){
        cout<<"Parent class."<<endl;
    }
};
class Child : Parent{
    public:
    void getInfo(){
        cout<<"Child class."<<endl;
    }
};

int main(){
    Child c;
    c.getInfo();
    Parent p;
    p.getInfo();

    return 0;
}