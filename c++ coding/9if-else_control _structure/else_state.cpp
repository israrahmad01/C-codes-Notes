#include<iostream>
using namespace std;
int main(){
    /*
ELSE STATEMENT: It is used to execute two statements either if statement execution or else statement execution for a single condition.
    else{
        statement(code);
    }
FLOW CHART --> start --> condition --> True --> code execution.
           --> start --> condition --> False --> code escaped.
*/
    string weather;
    cout<<"How is the weather"<<endl;
    cin>>weather;
    if(weather=="it is raining"){
        cout<<"Take an umbrella first"<<endl;
    }
    else{
        cout<<"Okay you can Go"<<endl;
    }
}