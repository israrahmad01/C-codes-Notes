#include<iostream>
using namespace std;
/*
CALL BY VALUE: In call by value the actual value of variable cannot be changed, if you
                change the value of function's paramemter it is only changed for current
                function.
*/
int sum(int a, int b){
    int c = a+b;
    return c;
}
// This will not swap/exchange
void swap(int a, int b){ // Temp a b
    int temp = a;       // 4    4 5
    a = b;              // 4    5 5
    b = temp;           // 4    5 4
}

/*
CALL BY ADDRESS: Call by address is used when you want to modify a variable inside a function
                 and want that modification persist(exist) outside the function.
*/
// int callbyaddress(int *p){
//     *p= *p+10;      // Pointer(*p)= value at address p + 10.
//     // *p += 10;
// }
// int main(){
//     int num1;
//     cout<<"Enter Number: ";
//     cin>>num1;
//     cout<<"Original value: "<<num1<<endl;
//     callbyaddress(&num1);
//     cout<<"New value: "<<num1<<endl;
//     return 0;
// }

/*
CALL BY REFERENCE: Reference is nothing but alias to an existing variable. When you declare a
                   reference, you create a new name for an existing variable, and any
                   changes done in reference is treated as, if it were the original variable.
--> Giving new name to original variable (both will change if we update any variable in them)
*/
// Call by reference using pointers reference
// int swapPointer(int* a,int* b){ // Temp a b
//     int temp = *a;       // 4    4 5
//     *a = *b;              // 4    5 5
//     *b = temp;           // 4    5 4
// }
// int main(){
//     int a=4, b=5;
//     // cout<<"Sum of a and b is "<<swap(a, b)<<endl;
//     cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;
//     // swap(a, y); This will not work
//     swapPointer(&a, &b);     //This will swap a,b
//     cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;

//     return 0;
// }

// Call by reference using reference variables
// int swapRefereneVar(int &x, int &y){
//     int temp = x;
//         x = y;
//         y = temp;
// }
// int main(){
//     int x = 2, y=3;
//     cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
//     swapRefereneVar(x, y);  // This will swap x,y
//     cout<<"The value of x is "<<x<<" and value of y is "<<y<<endl;
// }

// Return value by call by reference varibable
// int & swapreferencereturn(int &i, int &j){
//     int temp = i;
//         i = j;
//         j = temp;
//         return i ;
// }
// int main(){
//     int i =6, j =7;
//     cout<<"The value of i is "<<i<<" and  j is "<<j<<endl;
//     swapreferencereturn(i, j) = 676;
//     cout<<"The value of i is "<<i<<" and j is "<<j<<endl;
//     return 0;
// }