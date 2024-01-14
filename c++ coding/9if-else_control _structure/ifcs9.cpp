#include<iostream>
using namespace std;

// Basic Control Structures
// 1) Sequence Strucure     
// Entry --> [action1] ---> [action2] ---> [action3] ---> Exit
  
// 2) Selection Control Strucure   
// Entry --> Ask Condition --> true/false --> if true[action1] or if false[action2] ---> Exit

// IF STATEMENT:  If statement is used when we want to test a condition.
// if   else-if     else:
int main(){
    int age;
    cout<<"What is your age "<<endl;
    cin>>age;

    if(age<17 && age>0){
        cout<<"You cannot support me"<<endl;
    }
    else if(age<1){
        cout<<"you are not born"<<endl;
    }
    else if(age==17){
        cout<<"you can support me after 1 year"<<endl;
    }
    else{
        cout<<"you can support me"<<endl;
    }

// Switch Case 
    switch (age){
    case 18:
        cout<<"you are 18"<<endl;
        break;          // all cases will print if we not put "break"
    case 22:
        cout<<"you are 22"<<endl;
        break;
    case 2:
        cout<<"you are 2"<<endl;
        break;
    
    default:
    cout<<"no special cases";
        break;
    }

    int age3;
    cout<<"How old you are?";
    cin>>age3;
    if(age3<0){
        cout<<"You are not born";
    }
    if(age3>0 && age3<18){
        cout<<"You are a boy";
    }
    else{
        cout<<"You are a man";
    }


    return 0;
}


// 3) Loop Strucure
// Entry --> check condition --> perform action1 --> loop(again go to condition)  --> action2...