#include<iostream>
/*
Low Level Language: Language closed to Hardware (the only language understand by the computer)
Deals with a computer hardware
Also called Machine Language 

High Level Language: Language Far from Hardware (Logical)
High level language are manageable, easy to understand, debug and widely used in today's time
*/

// Variable: Container to store your data (it holds data)
int x= 4; // means that x is an integer variable which holds 4.

// Variable Scope:
// the rigion where the variable is exist/present
// types:

// 2) Global Variable Scope:
// Varibles that are declared outside the function and can be access from avery where.
int glo = 6;    //global variable
void sum(){
    int a;
    std::cout<< glo;
}

// 1) Local Variable Scope:
// Varibles that are declared inside the braces{} of any function and can be access from this function only.
int main(){            //program always start execution from main()
    int glo = 9;     //local variable
    glo = 78;        //local updated
    sum();            //here the sum() is call(go to sum function)
    std::cout<<glo;
}

// Local variable must execute if available
// global variable will not execute if local variable is available
// we can guve same name to local and global variable but local variable will be executed   