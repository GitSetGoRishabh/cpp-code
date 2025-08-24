#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n=5;
    // int spaces=2*n-2;
    // for(int i=1; i<=2*n-1;i++){
    //     int stars=i;
    //     if(i>n){
    //         stars=2*n-i;
    //     }
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }

    //     for(int j=1;j<=spaces;j++){
    //         cout<<" ";
    //     }

    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     if(i<n){
    //         spaces-=2;
    //     }
    //     else{
    //         spaces+=2;
    //     }
    // } 

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0 || j==0 || i==n-1 || j==n-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;

    // }
    
    int n=4;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
    return 0;
}