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
    v2.emplace_back(3,4);  // you can pass values without using the {}

    vector<int> v3(5,100);  // this creates a vector of size 5 with 100 as all elements .
    vector<int> v4(5);      //vector of size 5 , it can give 0's or any garbage values (but it can also be increased ... try using push_back)
    vector<int> v5(v3);     //creates a copy of of v3 as v5
    //accessing elements in vector is similar to array , just like indexing from 0 ;
    cout<<v[0] << v.at(0);   //both are same 

    // ITERATORS

    vector<int>::iterator it=v3.begin();   //points to the first (base) memory address of the vector 
    it++;
    cout<<*(it)<<" ";
    
    it=it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v3.end();  // points not the memory location of the last element but right after the last element .
    // vector<int>::iterator it=v3.rend(); // points to the memeory location just before the first element (exact opposite of end).
    // vector<int>::iterator it=v3.rbegin(); //points to the last memory location (exact opposite of begin).

    // these reverse end and reverse begin works in opposite way with it++ and it-- as well i.e in it++ instead of moving to the right it will move to the left.

    cout<<v.back()<<" ";  // last 
    // to print the vector you can use the for loop for the index 0-n;
    //              OR
    for(vector<int>::iterator it=v.begin();it !=v.end();it++){
        cout<<*(it);
    }

    for(auto  it=v.begin();it!=v.end();it++){
        cout<<*(it);
    }

    for(auto it : v){
        cout<<it;
    }

    //To erase element
    v.erase(v.begin()+1);  // for single element 
    v.erase(v.begin()+1,v.begin()+3);   // last address won't be included and won't be erased , till begin()+2 will be erased.

    //to insert element
    vector<int>v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<<v.size();
    v.pop_back();

    v.swap(v);

    v.clear();

    cout<<v.empty();



}

int main(){
    // explainpair();
    return 0;
}