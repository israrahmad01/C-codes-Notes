#include<iostream>
using namespace std;
int main(){
    /*
ELSE IF STATEMENT: It is used when we have more than two coditions
    else if(condition){
        statement(code);
    }
FLOW CHART --> start --> condition --> True --> code execution.
           --> start --> condition --> False --> code escaped.
*/

//  Program that tells how much Tax I should Pay
    // int amount, tax;
    // cout<<"Enter the value of amount"<<endl;
    // cin>>amount;
    // if(amount<=100000){
    //     tax= amount*10/100;
    //     cout<<"You have to Pay "<<tax<<" Tax."<<endl;
    // }
    // else if(amount>100000 && amount<=500000){
    //     tax= amount*20/100;
    //     cout<<"You have to Pay "<<tax<<" Tax."<<endl;
    // }
    // else{
    //     tax= amount*40/100;
    //     cout<<"You have to Pay "<<tax<<" Tax."<<endl;
    // }

    int amount, tax;
    cout<<"Enter the value of amount"<<endl;
    cin>>amount;
    if(amount<=100000){
        tax= amount*10/100;
        cout<<"You have to Pay "<<tax<<" Tax."<<endl;
        cout<<"Your remaining ammount will be "<<amount-tax<<endl;
    }
    else if(amount>100000 && amount<=500000){
        tax= amount*20/100;
        cout<<"You have to Pay "<<tax<<" Tax."<<endl;
        cout<<"Your remaining ammount will be "<<amount-tax<<endl;
    }
    else{
        tax= amount*40/100;
        cout<<"You have to Pay "<<tax<<" Tax."<<endl;
        cout<<"Your remaining amount will be "<<amount-tax<<endl;
    }
}