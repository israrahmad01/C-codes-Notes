#include<iostream>
#include<string>
using namespace std;

// struct Person{
//     string name;
//     int age;
//     double height;
// };
// int main(){
//     Person myPerson;
//     cout<<"Enter name: ";
//     cin>>myPerson.name;
//     cout<<"Enter age: ";
//     cin>>myPerson.age;
//     cout<<"Enter height: ";
//     cin>>myPerson.height;
//     cout<<"Person Information: "<<endl;
//     cout<<"Name: "<<myPerson.name<<endl;
//     cout<<"Age: "<<myPerson.age<<endl;
//     cout<<"Height: "<<myPerson.height<<endl;
//     return 0;
// }

// // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//     struct Israr{
//     string job;
//     double salary;
// };

// struct Abuzar{
//     string job;
//     double salary;
// };
// int main(){
//     struct Israr Israr;
//     struct Abuzar Abuzar;
//     string inputName;
//     cout<<"Enter name: ";
//     cin>>inputName;
//     if(inputName=="israr"){
//         Israr.job = "Jobless";
//         Israr.salary= -1000;
//         cout<<"Israr --> "<<Israr.job<<ends<<Israr.salary<<ends;
//     }
//     else if(inputName=="abuzar"){
//         Abuzar.job= "Coder";
//         Abuzar.salary= 1000;
//         cout<<"Abuzar --> "<<Abuzar.job<<ends<<Abuzar.salary<<"$"<<ends;
//     }
//     else{
//         cout<<"Condidate on this name is not available.";
//     }
//         return 0;
//  }
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ STRUCTURE(STRUCT) ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//     struct Israr{
//     string job;
//     double salary;
// };

// int main(){
//     struct Israr Israr;
//     struct Israr Abuzar;
//     string inputName;
//     cout<<"Enter name: ";
//     cin>>inputName;
//     if(inputName=="israr"){
//         Israr.job = "Jobless";
//         Israr.salary= -1000;
//         cout<<"Israr --> "<<Israr.job<<ends<<Israr.salary<<ends;
//     }
//     else if(inputName=="abuzar"){
//         Abuzar.job= "Coder";
//         Abuzar.salary= 1000;
//         cout<<"Abuzar --> "<<Abuzar.job<<ends<<Abuzar.salary<<"$"<<ends;
//     }
//     else{
//         cout<<"Condidate on this name is not available.";
//     }
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ STRUCTURE ^^^^^^^^^^^^^^^^^^^^^^^^^^^
// struct book{
//     string title;
//     string author;
//     int year;
// };
// int main(){
//     book mybook;        // Declaring structure(struct)
//     cout<<"Enter Book Title: ";
//     cin>>mybook.title;
//     cout<<"Enter Author Name: ";
//     cin>>mybook.author;
//     cout<<"Enter Publication Year: ";
//     cin>>mybook.year;
//     cout<<"Here is your Book:"<<endl;
//     cout<<mybook.title<<endl;
//     cout<<mybook.author<<endl;
//     cout<<mybook.year<<endl;
//     return 0;
// }

// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ UNION ^^^^^^^^^^^^^^^^^^^^^^^^^^^ same like struct
union coders{
    int RNo;
    char favChar;
    double salary;
};
int main(){
    // ***********************Taking user input than applying union *****************
    coders code;
    cout<<"Enter coder Roll number: ";
    cin>>code.RNo;
    cout<<code.RNo<<endl;
    cout<<"Enter coder favChar: ";
    cin>>code.favChar;
    cout<<code.favChar<<endl;
    cout<<"Enter coder salary: ";
    cin>>code.salary;
    cout<<code.salary<<endl;

}
