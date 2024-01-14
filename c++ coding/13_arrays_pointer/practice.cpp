#include<iostream>
using namespace std;

int main(){
// cout<<"Marks:"<<endl;
//     int marks[5]= {50, 60, 70, 80, 90};
//     cout<<marks[0]<<endl;   // 0=1st number
//     cout<<marks[1]<<endl;   // 0=2nd number
//     cout<<marks[2]<<endl;   // 0=3rd number
//     cout<<marks[3]<<endl;   // 0=4th number
//     cout<<marks[4]<<endl;   // 0=5th number
// cout<<"My Marks:"<<endl;
//     int mathmarks[4];
//     mathmarks[0]= {20};
//     mathmarks[1]= {30};
//     mathmarks[2]= {40};
//     mathmarks[3]= {10};
//     cout<<mathmarks[0]<<endl;
//     cout<<mathmarks[1]<<endl;
//     cout<<mathmarks[2]<<endl;
//     cout<<mathmarks[3]<<endl;

//     for(int i=0; i<=4; i++){
//         cout<<"value of marks "<<i<<" is "<<marks[i]<<endl;
//         // OR 
//         cout<<marks[i]<<endl;
//     }

//  ***************************** ++ *****************************
    // int a[4]={10, 11, 12, 13};
    // for(int i=0; i<4; i++){
    //     cout<<a[i]<<endl;
    // }

//  ***************************** -- *****************************
    // int b[4]={20, 30, 40, 50};
    // for(int i=3; i>=0; --i){
    //     cout<<b[i]<<endl;
    // }

//  ************************ Using For Loop  **********************************
    // int c[4];
    // cout<<"Enter the value: "<<endl;
    // for(int i=0; i<4; i++){
    //     cin>>c[i];
    // }
    // for(int i=0; i<4; i++){
    //     cout<<c[i]<<ends;
    // }
    // cout<<endl;
    // for(int i=3; i>=0; --i){
    //     cout<<c[i]<<ends;
    // }

//  ************************ Array Using While Loop  **********************************
    // int d[4];
    // cout<<"Enter the Value: "<<endl;
    // int i=0;
    // while(i<4){
    //     cin>>d[i];
    //     i++;
    // }
    // i=0;
    // while(i<4){
    //     cout<<d[i]<<ends;
    //     i++;
    // }
//  ************************  ****************
    int g[4]={11, 22, 33, 44};
    int i=0;
    while(i<4){
        cout<<g[i]<<ends;
        i++;
    }
    cout<<endl;
    i=3;
    while(i>=0){
        cout<<g[i]<<ends;
        i--;
    }

//  ************************ Do While Loop  **********************************
    // int e[4];
    // cout<<"Enter Values: "<<endl;
    // int i=0;
    // do{
    //     cin>>e[i];
    //     i++;
    // }while(i<4);
    // i=0;
    // do{
    //     cout<<e[i]<<ends;
    //     i++;
    // }while(i<4);
//  ************************  ************
    // int f[4]={11, 22, 33, 44};
    // int i=0;
    // do{
    //     cout<<f[i]<<endl;
    //     i++;
    // }while(i<4);
    return 0;
}