# include<iostream>

using namespace std;    

// Data Types:
// data type define the type of data that a variable can hold
// e.g int data type can hold integers OR char DT holds characters
// Types:
// 1) Build-in DT:  
// a) int (integers)(1, -3, 7, 2, etc)
// b) float (short numbers with decimal)(1.0, -3.8, 7.5, 2.1, etc)
// c) char (characters/letters)('a', 'b', 'c'', 'd', etc)
// d) double (long numbers with decimal)(1.08530...,0.52147... etc)
// e) bool (boolean/true-false)(if 0 it is false)(if 1 it is true)(8=8,4<5,7>2)
int main(){
    int a = -8, k=9;
    float b = 6.7;
    char c = 'c';
    double d = 0.735736;
    bool e =  4>6;
    std::cout<<"the value of e is "<<e<<"\n and the value of d is "<<d; 
//  first this string will print, then print variable e, print string, print variable d
    std::cout<<"\nthe value of a is "<<a<<"\nand the value of k is "<<k; // \n= escape sequence character
    std::cout<<"\nthe value of a is "<<a<<"\nand the value of k is "<<k; 
    std::cout<<"\nthe value of b is "<<b<<"\nand the value of c is "<<c; 
    return 0;
}

// 2) User Define Data Type:
// struct
// union
// enum

// 3) Derived Data Type:
// array
// function
// pointer

//   \n is used for line break