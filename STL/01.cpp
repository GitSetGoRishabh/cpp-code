#include<bits/stdc++.h>
using namespace std;


void explainpair(){
    pair<int,int> p = {2,3};    //creating a pair

    cout<<p.first<<" "<<p.second<<endl;    // accessing pair elements

    pair<int, pair<int,int>> q = {1,{3,4}};    // nested pair

    cout << q.first <<" "<< q.second.second <<" "<< q.second.first<<endl;   //accessing nested pair

    pair <int ,int> arr[] {{1,2},{2,3},{3,4}};     // pairs in array

    cout<<arr[1].second<<endl;    //accessing pair elements in array 
}


void explainVector(){
    vector<int>v;   //initialising vector ... (vector - dynamic memory , stores data like array .)

    v.push_back(1);    //creates a copy and add it to the vector
    v.emplace_back(2);  // adds the original one to the vector 

    vector<pair<int,int>> v2;
    v2.push_back({1,2});  // you have to write the {} for passing the values in push back 
    v2.emplace_back(3,4);  // you can pass values without useing the {}

    vector<int> v(5,100)  // this creates a vector of size 5 with 100 as all elements .

}

int main(){
    // explainpair();
    return 0;
}