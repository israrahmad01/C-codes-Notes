/*
There are two types of Header Files:
1. System header file: It comes with the compiler.
e.g #include<iostream>
e.g #include<string.h>
Search on Google "cpp referance for header file"
Deprecated: Means that Will be useless in future (will not work in coming time)

2. User define header file: It is written by programmer.
    user define header file must be available/saved in current dirrectory/memory
e.g  #include"header.file"
*/
// #include"header.file"

#include<iostream>
using namespace std;

int main(){
// Operators in C++
// Aithmatic Operators:
    int a=4, b=5;
    cout<<"ARITHMATIC"<<endl;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++  b is "<<a++<<endl; // print a(a=4), then increase a by 1(a+1=5)
    cout<<"The value of a--  b is "<<a--<<endl;   // print a(a=5), then decrease a by 1(5-1=4)
    cout<<"The value of ++a  b is "<<++a<<endl;   // increase a by 1(4+1=5), than print a(a=5)
    cout<<"The value of ==a  b is "<<--a<<endl;   // decrease a by 1(5-1=4), than print a(a=4)
// Increment: increase value of variable by 1. (++)(Pre--> (++a)),(Post--> (a++))
// decrement: decrease value of variable by 1. (--)(Pre--> (--a))(Post--> (a--))

//  Assignment Operators(=, +=, -=, *=, /=): Used to assign/give values to variables
//e.g  int a=2, b=4;
//      char d='d';
//      int x=a;
        int x = 10;
        cout<<"ASSIGNMENT"<<endl;
        x += 4; // means--> x= x+4
        // x -= 4; // means--> x= x-4
        // x *= 4; // means--> x= x*4
        // x /= 4; // means--> x= x/4
        // x %= 4; // means--> x= x%4
        cout<<"Assign "<<x<<endl<<endl;

//  Comparison Operators: These operators are used for true and false statemants.
//  True is denoted by 1 
//  False is denoted by 0
    cout<<"COMPARISON"<<endl;
    cout<<"The value of a == b is "<< (a==b) <<endl; //false b/c 4 not equal to 5
    cout<<"The value of a != b is "<< (a!=b) <<endl;   //true b/c 4 not equal to 5
    cout<<"The value of a >= b is "<< (a>=b) <<endl;   //false b/c 4 not greater/equal to 5
    cout<<"The value of a <= b is "<< (a<=b) <<endl;   //true b/c 4 is less than 5
    cout<<"The value of a > b is "<< (a>b) <<endl;     //false b/c 4 not greater than 5
    cout<<"The value of a < b is "<< (a<b) <<endl<<endl;     //true b/c 4 is less than  5

//  Relational Operators(<,>):

//  Logical Operators(&&, ||, !):
//  "&&" --> returns True if both conditions are True either false
//  "||"(or) --> returns True if one/all conditions are True (return false if both are false)
//  "!"(not) --> returns True if condition is False (return false if condition is true)
    int j=5, k=6;
    cout<<"LOGICAL"<<endl;
    cout<<(j<k && j>k)<<endl; // False b/c one condition is false
    cout<<(j<k || j>k)<<endl; // True b/c one condition is True
    cout<<!(j<k)<<endl; // False b/c condition is True
    cout<<!(j>k)<<endl<<endl; // True b/c condition is False

//  Ternary Operators(?:): (Confusion-ignore this for now)
// if condition is True it returns small/less value
// if condition is False it returns large/greater value
    cout<<"TERNARY"<<endl;
    cout<<(j>k?j:k)<<endl; // return large value so condition is false
    cout<<(j<k?j:k)<<endl; // return small value so condition is True
    cout<<(k<j?k:j)<<endl; // return small value so condition is True
    cout<<(k>j?k:j)<<endl<<endl; // return large value so condition is false
//  cout<<(5>6?5:6);

//  Bitwise Operators(&, |(or), >, <, <<, ^(zor), ~):
// These operators converts the value into binary than take operations on it.
    int a=4, b=5;
    cout<<"BITWISE"<<endl;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    return 0;
}
/*
        (a=4  ,  b=5)
    a    b             a&b     a|b     a^b

    0    0   --->       0       0       0
    1    1   --->       1       1       0
    0    0   --->       0       0       0
    0    1   --->       0       1       1

    4    5              4       5       1
                        AND      OR      ZOR
    (I think it works like logical gates)
*/