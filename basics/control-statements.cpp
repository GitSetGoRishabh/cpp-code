#include<bits/stdc++.h>
using namespace std;
int main(){

    //control statements
    // If-Else statements , else-if

    // int age;
    // cin>>age;
    // if(age<18){
    //     cout<<"Not an adult";
    // }
    // else if(age==18){
    //     cout<<"Just became adult";
    // }
    // else{
    //     cout<<"Adult";
    // }

    //switch statements

    int dayNum;
    cin>>dayNum;

    switch(dayNum){
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "wednesday";
        break;
        case 4:
        cout << "thursday";
        break;
        case 5:
        cout << "friday";
        break;
        case 6:
        cout << "saturday";
        break;
        case 7:
        cout << "sunday";
        break;
        default:
        cout<<"Enter a valid day number";
    }
    
    return 0;
}