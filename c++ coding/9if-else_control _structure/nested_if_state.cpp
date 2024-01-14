#include<iostream>
using namespace std;

int main(){
//  Nested if statement: When there comes another if statement in if statement.
//  Nested if/else statement: When there comes another if and else statement in if statement.
//  Nested if/else statement: When there comes another else statement in if statement.
//  Nested else/if statement: When there comes another if statement in else statement.
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        if(age>=18 && age<=60){
            cout<<"You are eligible for work";
        }
        else{
            cout<<"You are over age";
        }
    }
    else{
        cout<<"You are a child";
    }
    return 0;
}