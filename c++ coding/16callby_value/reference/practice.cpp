#include<iostream>
using namespace std;
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Call By address ^^^^^^^^^^^^^^^^^^^^^^^^^
// void callbyaddress(int *p){
//     *p= *p+10;      // Pointer(*p)= value at address p + 10.
//     // *p += 10;
// }
// int main(){
//     int num;
//     cout<<"Enter Number: ";
//     cin>>num;
//     cout<<"Original value: "<<num<<endl;
//     callbyaddress(&num);  // This address is given to pointer(*p) int callbyaddress()
//     cout<<"Updated value: "<<num<<endl;
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ Call By Reference ^^^^^^^^^^^^^^^^^^^^^^^^^
int main(){
    int a=10;
    int &ref= a;
    // int *ref= &a;
    cout<<a<<endl;
    cout<<&ref<<endl;
    // cout<<++*ref<<endl;
    cout<<++ref<<endl;
    cout<<a<<endl;
    return 0;
}