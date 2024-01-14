#include<iostream>
using namespace std;

// Function OverLoad
// Using of one thing for multiple functions
// int sum(int a, int b){
//     cout<<"Using function with 2 arguments"<<endl;
//     return a+b;
// }
// int sum(int a, int b, int c){
//     cout<<"Using function with 3 arguments"<<endl;
//     return a+b+c;
// }
// int main(){
//     cout<<"The value of 2, 3 is "<<sum(2, 3)<<endl;
//     cout<<"The value of 2, 3 and 5 is "<<sum(2, 3, 5)<<endl;
//     return 0;
// }

// Over Loading Functions:
// Doing lots of works o one function

// Calculate the volume of a cylender
int volume(double r, int h){
    return (3.14 * r * r * h);
    // 3./14 = Pi
    // r = radius       (r*r=radius square)
    // h = height
}

// Calculate the volume of a cube
int volume(int a){
    return (a * a * a); // a = Area
}

// Calculate the volume of a Rectangular Box
int volume(int l, int b, int h){
    return (l*b*h);
// l= Length
// b= Breadth(width)
// h= Height
}
// Here the Function"Volume" does 3 functions
int main(){
    cout<<"The valume of cylender is "<<volume(3, 6)<<endl;
    cout<<"The valume of cube is "<<volume(3)<<endl;
    cout<<"The valume of box is "<<volume(3, 7, 6)<<endl;
}