#include<iostream>
using namespace std;

int main(){
// ODD NUMBERS:
    // for (int i = 1; i < 50; i++)
    // {
    //     if(i%2 !=0){
    //         cout<<i<<endl;
    //     }
    // }

    
// EVEN NUMBERS:
    // for(int b=1; b<11; b++){
    //     if(b%2==0){
    //         cout<<b<<endl;
    //     }
    // }

    // for(int i=1; i<50; i++){
    //     if(i%1==0 && i%i==0 ){
    //         cout<<i<<endl;
    //     }
    // }
// for(int a=1; a<11; a++){
//         if(a/2 !=0){
//             cout<<a<<endl;
//         }
//     }

    // for(int c=1; c<=50; c++){
    //     if(c==5){
    //         break;
    //     }
    //     cout<<c<<endl;
    // }
    // int d=1;
    // while(d<20){
    //     if(d==5){
    //         continue;
    //     }
    //     cout<<d<<endl;
    //     d++;
    // }
    int a=4, b=5, c=6;
    int x = -b +- sqrt(b*b-4*a*c)/(2*a);
    cout<<x;
    
    return 0;
}