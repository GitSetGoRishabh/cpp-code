#include<bits/stdc++.h>
using namespace std;

int main(){
    // for(char i='A';i<='E';i++){
    //     for(char j='A';j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     for(char ch='A';ch<'A'+(4-i+1);ch++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(char i='A';i<='E';i++){
    //     for(char j='A';j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<4;i++){

    //     for(int j=3;j>i;j--){
    //         cout<<" ";
    //     }

    //     char ch='A';
    //     int breakpoint = (2*i+1)/2;
    //     for(int j=1;j<=2*i+1;j++){
    //         cout<<ch;
    //         if(j<=breakpoint){
    //             ch++;
    //         }
    //         else{
    //             ch--;
    //         }
    //     }

    //     for(int j=3;j>i;j--){
    //         cout<<" ";
    //     }

    //     cout<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     for(char j='E'-i;j<='E';j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }

        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*(5-i-1);j++){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}