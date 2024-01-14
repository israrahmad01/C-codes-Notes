#include<iostream>
using namespace std;

int main(){
//  TO FIND MULTIPLICATION TABLE OF ANY NUMBER:
    // int num;
    // cout<<"Enter the number ";
    // cin>>num;
    // for(int i=1; i<=10; ++i){
    //     cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    // }

    // int num2;
    // cout<<"Enter number to find cube ";
    // cin>>num2;
    // cout<<num2*num2*num2;

/*
WRITE A PROGRAM IN C++ WHICH TAKE INPUT FROM USER IN NUMBERS AND THEN ADD 
    THE NUMBERS UPTO THE USER ENTERED NUMBER
*/
    int input;
    int output=0;
    cout<<"Enter number: ";
    cin>>input;
    if(input<0){
        cout<<"error";
    }
    for(int i=0; i<=input; i++){
        output= output + i; // =0, 1    -->confused
        
    }
    cout<<output;
    // int num1;
    // int num2=0;
    // cout<<"Enter your number: ";
    // cin>>num1;
    // for(int i=0; i<=num1; i++){
    //     // num2 += i;
    //     num2 = num2 + i;
    // }
    // cout<<"Sum of all numbers upto "<<num1<<" is "<<num2<<endl;
    // cout<<(20+19+18+17+16+15+14+13+12+11+10+9+8+7+6+5+4+3+2+1); //20

    // int num3;
    // int num4=0;
    // cout<<"Enter the number: ";
    // cin>>num3;
    // for(int i=0; i<=num3; i++){
    //     num4 += i;        // num4 = num4+i
    // }
    // cout<<"The sum of numbers upto "<<num3<<" is "<<num4<<endl;
    // cout<<(5+4+3+2+1);  // =15
    return 0;
}