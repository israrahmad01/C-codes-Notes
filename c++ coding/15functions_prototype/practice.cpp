#include<iostream>
using namespace std;

// ^^^^^^^^^^^^^^^^^^^^^^^^ Multiplication using function ^^^^^^^^^^^^^^^^^^
// int mult(int a, int b){
//     int c = a*b;
//     return c;
// }
// int main(){
//     int a1, a2;
//     cout<<"Enter a1: ";
//     cin>>a1;
//     cout<<"Enter a2 ";
//     cin>>a2;
//     cout<<"Multiplication is "<<mult(a1, a2)<<endl; // pass/give/return a1,a2 to function mult().
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^ void function ^^^^^^^^^^^^^^^^^^
// int division(int num1,int num2){
//     int c= num1/num2;
//     return c;
// }
// void g(){
//     cout<<"Assalamoalaikum"<<endl;
// }

// int main(){
//     int a, b;
//     cout<<"Enter a: ";
//     cin>>a;
//     cout<<"Enter b: ";
//     cin>>b;
//     cout<<"Division is "<<division(a, b)<<endl;
//     g();
//     g();
//     g();
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^ function that print value again, again ^^^^^^^^^^^^^^^^^^
// void print(){
//     cout<<"Print a value 10 times through loop"<<endl;
// }
// int main(){
//     for(int i=0; i<=10; i++){
//         cout<<i<<ends;
//         print();
//     }
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^ How function pass value ^^^^^^^^^^^^^^^^^^
void pass(string greet){
    cout<<"Assalamoallaikum Brother! ";
    cout<<greet;
}
int main(){
    pass("How are you?");
    return 0;
}