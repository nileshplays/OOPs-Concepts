#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }
};

class Student : public Person{
public:
    int rollNo;

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll: "<<rollNo<<endl;
    }
};

int main(){
    // Person s1("Nilesh" , 21);
    Student s2;
    s2.name = "Nilesh";
    s2.age = 21;
    s2.rollNo = 11;
    s2.getInfo(); 
    return 0;
}