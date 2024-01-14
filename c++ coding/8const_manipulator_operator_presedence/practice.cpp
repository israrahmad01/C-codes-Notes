#include<iostream>
#include<iomanip>
using namespace std;

int main(){
cout<<"**********  CONSTANT const  **********";
    const int pi = 3.14;
//  pi = 3.15;  // this will through an error b/c const can't be re-derfine
    cout<<pi<<endl;


cout<<"**********  MINIPULATORS ---> endl, setw  **********"<<endl;
//  setw = how much width does the data should cover ( used to give specific width to data)
//  "setw" is present in a liberary called "#include<iomanip>"
    int a = 3, b = 30, c = 130, d = 1300;
    cout<<"Without setw"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"With setw"<<endl;
    cout<<setw(3)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;

// Operator Presedence(means which one operation should execute first)
// if operator presedence is equal than we follow associativity(direction of brackets to be executed)
cout<<"********  Operator Presedence  *********"<<endl;
    int x=4, y=5, z=6;
    cout<<"Result is "<<(((x*z)/4)+y)-15<<endl;      //x+y/4*z-15
    return 0;
}