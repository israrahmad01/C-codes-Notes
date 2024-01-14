#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<= num/2; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    cout<<"prime numbers from 1 to 100"<<endl;
    for(int i=2; i<=100; i++){
        if (isPrime(i)){
            cout<<i;
            if(i<100){
                cout<<", ";
            }
        }
    }
    return 0;
}