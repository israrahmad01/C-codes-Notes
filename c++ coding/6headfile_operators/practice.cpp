#include<iostream>
using namespace std;

int main(){
cout<<"ARITHEMATIC OPERATORS"<<endl;
    int a=9, b=8;
    cout<<"Sum "<<a+b<<endl;
    cout<<"Subtraction "<<a-b<<endl;
    cout<<"Product "<<a*b<<endl;
    cout<<"Division "<<a/b<<endl;
    cout<<"Remainder "<<a%b<<endl;

cout<<"ASSIGNMENT OPERATORS"<<endl;
    int c=3;
    c += 2;
    // c -= 2;
    // c *= 2;
    // c /= 2;
    // c %= 2;
    cout<<c<<endl;

cout<<"COMPARISON OPERATORS"<<endl;
    int d=4, e=5;
    cout<<"d<e "<<(d<e)<<endl;
    cout<<"d>e "<<(d>e)<<endl;
    cout<<"d==e "<<(d==e)<<endl;
    cout<<"d<=e "<<(d<=e)<<endl;
    cout<<"d>=e "<<(d>=e)<<endl;
    cout<<"d!=e "<<(d!=e)<<endl;

cout<<"LOGICAL OPERATORS"<<endl;
    int f=6, g=7;
    cout<<"&& "<<(f<g && f>g)<<endl;
    cout<<"|| "<<(f<g || f>g)<<endl;
    cout<<"! "<< !(f<g)<<endl;
    cout<<"! "<< !(f>g)<<endl;
    return 0;
}