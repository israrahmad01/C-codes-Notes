#include<iostream>
using namespace std;

int main(){
    int pass;
    int mypass=4444;
    do{
        cout<<"Enter Your Password : "<<endl;
        cin>>pass;

        if(pass!=mypass){
        cout<<"Incorrect"<<endl;
        }
        else{
            cout<<"Unlocked";
        }

    } while(pass!=mypass);
}