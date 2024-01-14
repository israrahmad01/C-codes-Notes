#include<iostream>
using namespace std;

// return:
    
    int sum(){
        int a=4, b=6;
        return a+b;     // returning value to main()
    }
int main(){
/*
JUMPING STATEMENT: Statement that can transfer the program control to different part of the program.
There are three Jumping Statements:
1) goto: If you want to jump a particular statement into another path for execution. 
2) break: Used to stop the flow of program.
3) continue: Used to skip/ignore a particular portion.
4) return: to return a value.
*/

// return:
    cout<<sum();    // calling the function

// break;
    // int num1;
    // for(int num=1; num<=10; num++){
    //     if(num==5){
    //         break;
    //     }
    //     cout<<num<<ends;
    // }
    // cout<<"Hi Bro";
// Continue:
    // for(int a=1; a<=10; a++){
    //     if(a==6){
    //         continue;
    //     }
    //     cout<<a<<endl;
    // }

//  goto:
    // int b;
    // for(b=1; b<=10; b++){
    //     if(b==4){
    //         goto out;
    //     }
    //     cout<<b<<endl;
        
    // }
    //     out:
    //         cout<<b<<endl;

    return 0;
}