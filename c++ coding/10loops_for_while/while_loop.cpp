#include<iostream>
using namespace std;

int main(){
//  PROGRAM FOR MOBILE LOCK:
    int password=1515;
    int mypassword;
    // cout<<"Enter your Password "<<endl;
    // cin>>mypassword;
    while(password>0){
        cout<<"Enter your Password "<<endl;
    cin>>mypassword;
        if(mypassword!=password){
            cout<<"Incorrect! Enter Password again: "<<endl;
        }
        else{
            cout<<"Unlocked";
            break;
        }
    }
}