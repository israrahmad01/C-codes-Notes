#include <iostream>
using namespace std;
// Arrays:
//  Collection of items of similar data type that stored in contiguous(close) memory location.
/*Some times a simple variable is not enough to store data
For Example: let we want to store the marks of 2500 students,
so making 2500 different variable is not good, so than we use arrays*/
int main()
{
    // Array Examples
    // 1st Methode
    // int marks[] = {34, 56, 78, 89}; // [] Shows that this is an Array
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // // 2nd methode:
    // int mathmarks[5];
    // mathmarks[0] = 1264;
    // mathmarks[1] = 3628;
    // mathmarks[2] = 8753;
    // mathmarks[3] = 6354;
    // mathmarks[4] = 2784;
    // cout << mathmarks[0] << endl;
    // cout << mathmarks[1] << endl;
    // cout << mathmarks[2] << endl;
    // cout << mathmarks[3] << endl;
    // cout << mathmarks[4] << endl;

    // // Arrays using for loop
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of " << i << " is " << marks[i] << endl;
    // }

    // Arrays and Pointers: (Pointer Arrithematics)
    int numbers[5]= {11,  22, 33, 444, 55};
    int *p = numbers;
    cout << "The value of *(p) is " << *p << endl;
    cout << "The value of *(p+1) is " << *(p + 1) << endl;
    cout << "The value of *(p+2) is " << *(p + 2) << endl;
    cout << "The value of *(p+3) is " << *(p + 3) << endl;
    cout << "The value of *(p+3) is " << *(p + 4) << endl;

    cout << *p++ << endl;
    cout << *p << endl;
    cout << *++p << endl;

    return 0;
}