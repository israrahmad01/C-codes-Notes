#include<iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"enter first number ";    // << this is called insertion operator (used with cout)
    cin>>num1;                      // >> this is called extraction operator  (used with cin)
    cout<<"enter second number ";   // cout  used for taking output from program
    cin>>num2;                      // cin   used to give input to computer
    cout<<"resultant is "<<num1*num2;
    return 0;
}
/*
STREAM:
       C++ comes with libraries which which help us performing input/output. In C++
       sequence of bytes corresponding to iput and output are commomly known as Stream.

Input Stream:
            Direction of flow of bytes take place from input device(user)(e.g Keyboard)
             to main memory.

Output Stream:
            Direction of flow of bytes from main memory to output device(user)(e.g Display)

Reserved Keyworsds:
        Those keywords that are used by the language itself called reserved keywords.
        These keywords are not available for re-definition or overloading.
        Means that you can not create a variable with these words.
*/