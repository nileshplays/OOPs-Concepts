#include<bits/stdc++.h>
using namespace std;

/*
void fun(){
    static int x = 2;
    cout<<"x = "<<x<<endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();
    return 0;
}
*/

class ABC{
    public:
    ABC(){
        cout<<"Constructor"<<endl;
    }

    ~ABC(){
        cout<<"Destructor"<<endl;
    }
};

int main(){
    if( true){
        static ABC a;
        // So the destructor is called once the program is finished to destruct the object , if static not used the after const. , dest. call
    }
    cout<<"End of program !"<<endl;
    return 0;
}