#include<iostream>
using namespace std;

//  ************* Selection Control Structure ************
//  ************* if else-if else statement ************
// int cnic(){
//     int cnic;
//     cout<<"Do you have CNIC? (if YES enter 1, if NOT enter 0)"<<endl;
//     cin>>cnic;
//     if(cnic==1){
//         cout<<"Congratulation you are allowed";
//     }
//     else{
//         cout<<"Sorry you are not allowed";
//     }
// }

int color(){
    int color;
        cout<<"Enter the value of color"<<endl;
        cin>>color;
        if(color>0){
            cout<<"This color is available"<<endl;
        }
        else{
            cout<<"You are mad";
        }
    }
int main(){
//     int age;
//     cout<<"Enter your age"<<endl;
//     cin>>age;
//     if((age<18) && (age>0)){
//         cout<<"You are under 18";
//     }
//     else if(age==18){
//         cnic();
//     }
//     else{
//         cout<<"You are not allowed";
//     }
cout<<"****************************************************"<<endl;
//  ************* Switch Case Statement ************
    int paint;
    cout<<"Which one paint color do you prefer?"<<endl;
    cout<<"1.Green, 2.Blue, 3.Red"<<endl;
    cin>>paint;
    switch(paint){    
        case 1:
        cout<<"Price of green color is 400"<<endl;
        break;
        case 2:
        cout<<"Price of blue color is 500"<<endl;
        break;
        case 3:
        cout<<"Price of red color is 700"<<endl;
        break;
        default:
        color();
    }
// ******************************************************
cout<<"****************************************************"<<endl;
    int ice;
    cout<<"which one ice cream you want to buy?"<<endl;
    cout<<"Icebar=Rs.10, milk=Rs.20, chocolate=Rs.30"<<endl;
    cin>>ice;
    if(ice==10){
        cout<<"Here is the Icebar ice cream"<<endl;
    }
    else if(ice==20){
        cout<<"Here is the  milk ice cream"<<endl;
    }
    else if(ice==30){
        cout<<"Here the chocolate ice cream"<<endl;
    }
    else{
        cout<<"Sorry it is not available"<<endl;
    }
// ****************************************************
cout<<"****************************************************"<<endl;
    int pen;
    cout<<"Which one pen do you like to buy?"<<endl;
    cout<<"1.Clipper, 2.Piano, 3.Master"<<endl;
    cin>>pen;
    switch(pen){
        case 1:
        cout<<"Here is your clipper pen";
        break;
        case 2:
        cout<<"Here is Piano pen.";
        break;
        case 3:
        cout<<"Here is Master pen";
        break;
        default:
        cout<<"Sorry it's not available"<<endl;
        break;
    }    
        
    return 0;
}
