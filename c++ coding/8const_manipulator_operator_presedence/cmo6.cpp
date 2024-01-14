#include<iostream>
#include<iomanip>           // Another Header File
using namespace std;

int main(){

    int a = 34;
    a = 45;
// Counstant Variable (const)
// value can not be changed/renewed when const is used/declared
    cout<<a<<"\n";
    const int b = 12;
    // b = 23;          program will not run/ get error

// Manipulators (endl(line break)  or   setw)
//  Formate and control data (used for right justifying, arrange from right side)

//  setw = how much width does the data should cover ( used to give specific width to data)
//  "setw" is present in a liberary called "#include<iomanip>"
    int x = 3;
    int y = 24;
    int z = 8357;
    cout<<"the value of x is "<<setw(4)<<x<<endl;
    cout<<"the value of y is "<<setw(4)<<y<<endl;
    cout<<"the value of z is "<<setw(4)<<z<<endl<<"\n";

// Operator Presedence (BODMAS rule) 
// Means that which operation should execute/evaluate first
    int i = 3, j = 4;
    //int k = i*4 + j;
    int k = (i*4) + j;        //(multiply then add)
    int l = ((((i*4) + j) -45) +87);        //(then we will chack Associativity(Left to right))
    cout<<"the solution is "<<l<<endl;
//  if expression have same presedence than we check associativity
    int r=4, s=5,t=6;
    cout<<(s+t)<<" = "<<(t+s)<<endl;
    cout<<(r+(s+t))<<" = "<<((r+s)+t)<<endl;
    cout<<(r-s-t)<<" = "<<(r-s-t)<<endl;
    cout<<(r*(s*t))<<" = "<<((r*s)*t)<<endl;

    return 0;
}