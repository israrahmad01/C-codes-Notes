#include<iostream>
using namespace std;
/*
UNION: Umion is user-define data type that allows you to store different data type in 
        same memory loaction.
*/
union emp{
    int Eid;
    double salary;
};
// e.g
union coders{
    int RNo;
    char favChar;
    double salary;
    // string name;   //string not works in union
};
int main(){
    emp E;
    E.Eid = 42356;
    cout<<E.Eid<<endl;
// Print values one by one, if not it will be currupted because unions use same memory location.
    E.salary = 432;
    cout<<E.salary<<endl;

// ***********************Taking user input than applying union *****************
    coders code;
    cout<<"Enter coder Roll number: ";
    cin>>code.RNo;
    cout<<code.RNo<<endl;
    cout<<"Enter coder favChar: ";
    cin>>code.favChar;
    cout<<code.favChar<<endl;
    cout<<"Enter coder salary: ";
    cin>>code.salary;
    cout<<code.salary<<endl;
    return 0;
}