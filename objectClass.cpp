#include<bits/stdc++.h>
using namespace std;

class Teacher{
    //properties
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;


    //methods
    void changeDept(string newDept){
        dept =newDept;  
    }
    void setSalary(double sal){
        salary = sal;
    }

    double getSalary(){
        return salary;
    }
};

class Student{
    public:
    string name;
    double cgpa;

    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<cgpa<<endl;
    }
};

int main(){
    /*Teacher t1;
    Teacher t2;

    t1.name = "Nilesh";
    t1.dept = "CSE";
    t1.subject = "OOPs";
    t1.setSalary(30000);
    t2.name = "Sarkar";
    
    cout<<t1.name<<" ";
    cout<<t2.name<<endl;
    cout<<t1.dept<<endl;
    t1.changeDept("ECE");
    cout<<"Changed Dept: "<<t1.dept<<endl;
    cout<<"Salary: "<<t1.getSalary();
    */
    
    Student s1("Nilesh" , 7.48);
    Student s2(s1);
    s2.getInfo();
    return 0;
}