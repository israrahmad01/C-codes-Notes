#include<iostream>
using namespace std;

// Inline Function:     (It save our time)
// It is used to copy the value of lots of variables one time
// you can call this function again and again
// used with small functions not with long
inline int mult(int a, int b){
    return a*b;
}

// Static Variables:       (Not run more then one time)
// when static is used with a variable then it will execute only one time
// Don't use it with inline function
int product(int a, int b){
    static int c = 0;     // initialised and will not run again(execute only once)
    c = c + 1;      // Value increases by 1
    return a*b +c;  // Value1*Value2(given by user) + 1(c)
}

//  Default Value Arrguments
float moneyReceived(int currentmoney, float factor=1.04){
//                  default argument    compulsory arguments
    return currentmoney * factor;
}

// Const Arguments:
// int strlen(const char *p){
   
// }
int main(){
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
// For Inline functon:
    // cout<<"The product is "<<mult(a, b)<<endl;
    // cout<<"The product is "<<mult(a, b)<<endl;
    // cout<<"The product is "<<mult(a, b)<<endl;
    // cout<<"The product is "<<mult(a, b)<<endl;
    // cout<<"The product is "<<mult(a, b)<<endl;
    // cout<<"\n\nThe product is "<<product(a, b)<<endl;

// For Static Variable:
    // cout<<"The product is "<<product(a, b)<<endl;
    // cout<<"The product is "<<product(a, b)<<endl;
    // cout<<"The product is "<<product(a, b)<<endl;
    // cout<<"The product is "<<product(a, b)<<endl;
    // cout<<"The product is "<<product(a, b)<<endl;

// For default value arrguments
    int money = 100000;
    cout<<"If you have "<<money<<"Rs , then you will recieved "<<moneyReceived(money)<<" after 1 year."<<endl;
    cout<<"For VIP: If you have "<<money<<"Rs , then you will recieved "<<moneyReceived(money, 1.1)<<" after 1 year."<<endl;
    //                          (Exact Money)                           (function name)      (Discount)
    return 0;
}