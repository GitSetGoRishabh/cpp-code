#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    }else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;
}

void explainExtra(){
    // sort(a,a+n); //  from start pos a to end pos a+n (ascending order)

    // for descending order 
    // sort(a,a+n,greater<int>);

    // sort(a,a+n,comp);

    // __builtin_popcount() - returns the number of set bits i.e number of ones in the binary of 32 bit .
    int num=7;
    int count=__builtin_popcount(num);

    long long num = 1546387264547;
    int count = __builtin_popcountll(num);

    string s="123";
    do {
        cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));

    // int maxElement= *max_element(a,a+n);
    // ||ly there is min element.
}

int main(){

    return 0;
}