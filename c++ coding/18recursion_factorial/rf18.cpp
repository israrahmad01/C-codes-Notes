#include<iostream>
using namespace std;
// Factorial(!\):
// Steps for calculation of factorial(!)
// factorial(4) = 4 * factorial(3)
// factorial(4) = 4 * 3 * factorial(2)
// factorial(4) = 4 * 3 * 2 * factorial(1)
// factorial(4) = 4 * 3 * 2 * 1
// factorial(4) = 24
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n - 1);
}


// Fibonacci Sequence: (1,1,2,3,5,8,13...)
int fib(int n){
if(n<2){
    return 1;
}
    return fib(n-2) + fib(n-1);
}
int main(){
//  0! = 1.
//  1! = 1.
//  6! = 6 * 5 * 4 * 3 * 2 * 1.
//  n! = n*(n-1)*(n-2)*(n-3)....
//  n! = n*(n-1)!
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    // cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}