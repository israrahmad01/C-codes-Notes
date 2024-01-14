#include<iostream>
using namespace std;

// loops in c++     (Used for repeatedly word)
// three types:
// 1: For Loop
// 2: While Loop
// 3: Do-While Loop
int main(){
    // For loop in c++
    // for(initialization; condition; updation){
    //     loop body (C++ code)
    // }
// => initialization run only one time.(program initiazed only one time)
// Syntax/Structure:
// initialization(only one time)--> check condition --> loop body --> updation --> condition....
    // for (int i = 0; i <= 40; i++){
    //     cout<<i<<endl;
    // }

// Example of infinite for loop         //Don't try
    // for (int i = 0; 34 <= 40; i++){
    //     //cout<<i<<endl;
    // }

// while loop in c++
// Syntax/Structure:
    // while (/* condition */)
    // {
    //     /* C++ Statement */
            // updation
    // }
    // int j=1;
    // while (j<=40) {
    //     cout<<j<<endl;
    //     j++;
    // }
    // Example of infinite whike loop
    // int j=1;
    // while (true) {
    //     cout<<j<<endl;
    //     j++;
    // }


    // Do while loop in c++ (Pragram will must run 1 time if condition is false)
// Syntax/Structure:
    // do
    // {
    //     /* C++ Statement */
            // updation
    // }while (condition);
    // int k=1;
    // do {
    //     cout<<k<<endl;
    //     k++;
    // }while (k<=40);

//  print 4 natural numbers using for loop
    // for (int q = 0; q <= 4; q++)
    // {
    //     cout<<q<<endl;
    // }
    
//  print 7 natural numbers using while loop
    // int r = 1;
    // while(r<=7){
    //     cout<<r<<endl;
    //     r++;
    // }

//  print 5 natural numbers by Do While loop
    // int s = 1;
    // do{;
    //     cout<<s<<endl;
    //     s++;
    // } while (s <= 5);

//  print 4 natural numbers by for loop
    // for (int x=1; x<=4; x++){
    //     cout<<x<<endl;
    // }

//  print 4 natural numbers by while loop
    // int y=0;
    // while (y<=4){
    //     cout<<y<<endl;
    //     y++;
    // }

//  print 4 natural numbers by do while loop
    int z=0;
    do{
        cout<<z<<endl;
        z++;
    } while (z<=4);
        

    return 0;
}