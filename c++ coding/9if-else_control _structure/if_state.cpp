#include<iostream>
using namespace std;
int main(){
/*
IF STATEMENT: else if statement is used when we want to test a condition.
    if(condition){
        statement(code);
    }
FLOW CHART --> start --> condition --> True --> code execution.
           --> start --> condition --> False --> code escaped.
*/
    string signal;
    cout<<"Enter the value of signal"<<endl;
    cin>>signal;
    // Wrong condition will be escaped.
    if(signal=="red"){
        cout<<"STOP"<<endl;
    }
    if (signal=="green"){
        cout<<"GO"<<endl;
    }
}