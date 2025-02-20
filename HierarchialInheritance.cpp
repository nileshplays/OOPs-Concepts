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
class Teacher :public Person{
    public:
        string subject;
};

int main(){

    Student s1;
    s1.name = "Nilesh";
    Teacher t1;
    t1.name = "Sarkar";
    s1.rollNo = 11;
    s1.age = 21;
    t1.age = 31;
    t1.subject = "OOPs";
    cout<<s1.name<<" : "<<s1.rollNo;
    cout<<t1.name<<" : "<<t1.subject;

    return 0;
}