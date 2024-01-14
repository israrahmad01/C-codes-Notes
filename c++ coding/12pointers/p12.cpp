#include<iostream>
using namespace std;

int main(){
// Pointers= Data type which holds the address of other data type.
    int a = 3;
    int* b = &a;
    // & --> Address of operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    
    // * --> Dereference operator (value at/on operator)
    cout<<"The value at b is "<<*b<<endl;
    

    int x= 5;
    int* y;
    y = &x;
    cout<<"the address of x is "<<&y<<endl;
    cout<<"the value of y is "<<*y<<endl;

    //Pointer to pointer
    int** z = &y;       // Putting 2 stars b/c y is already pointer
    cout<<"The address of y is "<<&y<<endl;
    cout<<"The address of z is "<<z<<endl;
    cout<<"The value of y is "<<*y<<endl;
    cout<<"The value at value at(value at(z)) is "<<**z<<endl;
    
    return 0;
}