#include<iostream>
using namespace std;
/*
Function will not execute if it is declared after main() function, We use function prototype
    to execute/run it.
FUNCTION PROTOTYPE:
It is used if we want to execute a function that declared after main() function.
SYNTAX --> type function-name (arguments);
SYNTAX --> int sum(int num1, int num2);
*/
// int sum(int a, int b);  // Acceptable
// int sum(int a, b);  // Not Acceptable
// int sum(int , int);  // Acceptable

int sum(int num1, int num2);  // calling function through Function Prototype.
int main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Sum = "<<sum(a, b)<<endl; // function sum() was not declared (without prototype).
    return 0;
}
int sum(int num1, int num2){
    int sum= num1+num2;
    return sum;
}