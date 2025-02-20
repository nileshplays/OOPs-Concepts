#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int rollNo;
};
class Teacher{
    public:
        string subject;
        double salary;
};
class TAssistant : public Student ,public Teacher{
    public:
        string researchArea;

};

int main(){
    TAssistant t1;
    t1.name = "Nilesh";
    t1.rollNo = 11;
    t1.subject = "OOPs";
    t1. researchArea = "Cryptography";
    cout<<t1.name;
}