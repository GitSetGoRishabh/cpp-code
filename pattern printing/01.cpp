#include<bits/stdc++.h>
using namespace std;

int main(){

    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<5;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }



    // for(int i=0;i<5;i++){
    //     int num=1;
    //     for(int j=0;j<=i;j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }

    //or

    // for(int i=0;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // for(int i=0;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<=5;i++){
    //     for(int j=5;j<5-i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<=5;i++){
    //     for(int j=1;j<5-i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<5;i++){
        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        for(int j=0;j<5-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }


    return 0;
}

