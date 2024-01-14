#include<iostream>
using namespace std;
struct shopkeeper{
    string name;        // 8 bytes
    int shopId;         // 4 bytes
    double salary;      // 8 bytes
};
int main(){
    struct shopkeeper S; // We declare "S" to call structure.
    S.name= "adnan";
    S.shopId= 1986421;
    S.salary= 1728.5;
    cout<<S.name<<ends<<S.shopId<<ends<<S.salary<<endl;
    cout<<"Size of string is "<<sizeof(S.name)<<" bytes"<<endl;
    cout<<"Size of int is "<<sizeof(S.shopId)<<" bytes"<<endl;
    cout<<"Size of double is "<<sizeof(S.salary)<<" bytes"<<endl;
    return 0;
}