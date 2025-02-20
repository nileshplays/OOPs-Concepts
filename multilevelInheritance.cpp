#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
        string name;
        int age;
};
class Student : public Person{
    public:
        int rollNo;
};
class GradStudent : public Student{
    public:
        string researchArea;
};

int main(){
    GradStudent g1;
    g1.name = "Nilesh";
    g1.age = 21;
    g1. rollNo = 11;
    g1.researchArea = "AI";
    cout<<g1.name<<endl;
}