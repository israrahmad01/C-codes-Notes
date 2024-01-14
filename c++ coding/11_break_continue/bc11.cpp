#include<iostream>
using namespace std;

int main(){
    //Break:    Program will escape when condition becomes true
    // for (int i=0; i<=40; i++){
    //     if(i==2){
    //         break;      //this loop will not run further or it escaped
    //     }
    //     cout<<i<<endl<<"\n\n";
    // }

    //Continue: Program will run but conditional statement will escape
    for (int j=0; j<=10; j++){
        if(j==2){
            continue;      //program runs further but 2 will escaped
        }
        cout<<j<<endl;
    }
    return 0;
}