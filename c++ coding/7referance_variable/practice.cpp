#include<iostream>
using namespace std;
int a=40;
int main(){
    int a=4;
    cout<<"Value of Local a is "<<a<<endl;
    cout<<"Value of Global a is "<<::a<<endl;

cout<<"***** 3 bUILD IN DATA TYPES *****"<<endl;
    cout<<"Size of 23.5 is "<<sizeof(23.5)<<endl;
    cout<<"Size of 23.5f is "<<sizeof(23.5f)<<endl;
    cout<<"Size of 23.5F is "<<sizeof(23.5F)<<endl;
    cout<<"Size of 23.5l is "<<sizeof(23.5l)<<endl;
    cout<<"Size of 23.5L is "<<sizeof(23.5L)<<endl;

    cout<<"*****  SIZE OF Float, Double and Long Double  *****"<<endl;
    cout<<"*****  Float, Double Long Double Literals      *****"<<endl;
    float f= 35.4;
    double d= 35.4;
    long double ld= 35.4;
    cout<<"Size of float is "<<sizeof(f)<<" bytes"<<endl;
    cout<<"Size of double is "<<sizeof(d)<<" bytes"<<endl;
    cout<<"Size of long double is "<<sizeof(ld)<<" bytes"<<endl;

cout<<"*******  REFERENCE VARIABLES  **********"<<endl;
    int x = 5;
    int & y = x;
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    x = 10;
    cout<<"x = "<<x<<" y = "<<y<<endl;
    y += 10;
    cout<<"x = "<<x<<" y = "<<y<<endl;

cout<<"*******  TYPE CASTING  ***********"<<endl;
    float j = 50.34; 
    int i = 50; 
    cout<<"The value of i is "<<i<<endl;
    cout<<"The value of float(i) is "<<float(i)<<endl;
    cout<<"The value of (int)i is "<<(int)i<<endl;
    
    int k = int(i);
    cout<<"The value of k is "<<k<<endl;
    cout<<"The expression is equal to "<<i + j<<endl;
    cout<<"The expression is equal to "<<i + int(j)<<endl;
    cout<<"The expression is equal to "<<i + (int)j<<endl;

    return 0;
}