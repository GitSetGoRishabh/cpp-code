#include<bits/stdc++.h>
using namespace std;

int main(){

    // for(int i=0;i<5;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

   
    //     for(int j=0;j<2*5-(2*i+1);j++){
    //         cout<<"*";
    //     }

    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<9;i++){
    //     int stars;
    //     if(i<6){
    //         stars=i;
    //     }else{
    //         stars=9-i;
    //     }
    //     for(int j=0;j<stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     int num;
    //     if(i%2==0){
    //         num=1;
    //         }
    //         else{
    //             num=0;
    //         }
    //     for(int j=0;j<=i;j++){
    //         cout<<num;
    //         num=1-num;
    //     }
    //     cout<<endl;
    // }


    // for(int i=1;i<5;i++){

    //     int spaces=6-2*i;
    //     int nums=i;
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }

    //     for(int j=0;j<=spaces;j++){
    //         cout<<" ";
    //     }
    
    //     for(int j=1;j<=i;j++){
    //         cout<<nums;
    //         nums-=1;
    //     }

    //     cout<<endl;
    // }

    int num=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    
    return 0;
}