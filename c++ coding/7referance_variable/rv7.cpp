#include<iostream>
using namespace std;


// ******* Build-in Data Type ************
int c = 45;
int main(){
    // int a, b; c;
    // cout<<"enter 1st number "<<endl;
    // cin>>a;
    // cout<<"enter 2nd number "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the sum is "<<c<<endl;
    // cout<<"the global c is "<<::c; // "::" is resolution of scope used to select global variable


// *******  Float, Double and Long Double Literals ************
    // float f = 34.4;                  // float = 4 bytes      double = 8 bytes
    // long double ld= 34.4;            // long double = 12 bytes
    // cout<<"the value of f is "<<f;
    // cout<<", the value of ld is "<<ld<<"\n";
    // float f2 = 34.4f;       // f/F denotes that the number is float
    // long double ld2 = 34.4l;       // l/L denotes that the number is long double
    // cout<<"the value of f2 is "<<f2<<" and the value of ld2 is "<<ld2<<"\n";

    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;     //the number will be executed as double
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;     //the number will be executed as long double
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

// ******* Referance Variables ************ (Calling a value from two or more places/reference)
// Those variables which provide alternate name for the previously defined or existing variable called Reference Variables.
    // israr ---> Sheenai ----> isru 
    // sum()      add()         addition()
    // a=2      b=a or b+=a     c=b
    float x = 4;
    float & y = x;        // "y" referances(hawala dena) "x"
    cout<<"the value of y is "<<y<<endl;
    y = 10;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    y += 10;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    x = 5;
    cout<<"x = "<<x<<" y = "<<y<<endl;

    // ******* Typecasting ************
    //converting data type into another (changing Data type)
    int i = 45;
    float j = 45.46;
    cout<<"the value of i is "<<(float)i;
    cout<<" and the value of i is "<<float(i);
    cout<<"\n the value of j is "<<int(j)<<"\n \n";      //"j" was float and now it is integer
    int k = int(j);

    cout<<"the expression is "<<i + j<<"\n";
    cout<<"the expression is "<<i + (int)j<<"\n";
    cout<<"the expression is "<<i + int(j)<<"\n";
    return 0;
}