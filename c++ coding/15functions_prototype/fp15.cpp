#include<iostream>
using  namespace std;
/*
FUNCTION: Function is a block of code which take input, process it and produce output
          in the form of result.
--> Function run only when it call.
SYNTAX:
return-type  function-name(parameter){
    code; 
}
*/
// Function ( it is a main part of Top down stuctured programing)
// Function does the works that is repeated again and again.


// int sum(int a, int b){
//     int c = a+b;  // a and b are formal parameters, takes values from actual parameters.
//     return c;   
// }
// int main(){
//     int num1, num2; // num1,num2 are Actual parameters.
//     cout<<"Enter the first number "<<endl;
//     cin>>num1;
//     cout<<"Enter the second number "<<endl;
//     cin>>num2;
//     cout<<"the sum is "<<sum(num1, num2); //return value function key
                    // Give values to Function sum()

//     return 0;   //it means  the program is successfully completed.
// }

// ACTUAL PARAMETERS: Parameters passed by function. in above function (num1,num2) are Actual..
// Formal PARAMETERS: Parameters passed by function. in above function (num1,num2) are Actual..


// Function Prototype:  Tell the program that this function maybe found further 
// type function name (arguments)

// int mult(int x, int y);     // Acceptable
// // int mult(int, int);     // Acceptable
// // int mult(int x, y);     //Not Acceptable
// void g(void);       // Printing optional content
// void g();       // Printing optional content
// int main(){
//     int num3, num4;
//     cout<<"Enter 1st number "<<endl;
//     cin>>num3;
//     cout<<"Enter 2nd number "<<endl;
//     cin>>num4;
//     cout<<"the product is "<<mult(num3, num4); 
//     g();
//     return 0;
// } 
// // a and b are formal parameters (it take value from actual parameters)
// // num1 and num2 are actual parameters

// int mult(int x, int y){
//     int z = x*y;
//     return z;
// }
// void g(){
//     cout<<"\nAssalamoalaikum";
// }


// Subtraction of two numbers
// int sub(int j, int k){
//     int i = j-k;
//     return i;
// }
// int main(){
//     int num5, num6;
//     cout<<"Enter the number "<<endl;
//     cin>>num5;
//     cout<<"Enter the number "<<endl;
//     cin>>num6;
//     cout<<"Subtraction = "<<sub(num5, num6);
// }
