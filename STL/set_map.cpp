// SET - stores everything in sorted order and also only stores unique data
// every operation like insert , emplace , push works fine here , begin , end, rbegin,rend,size,all are same as above 
// in set all operations take log n

// erase takes log(n) time 
// pop takes log(n) time 

// find takes o(1)


// multiset - it only obeys sorted i.e it can store the duplicates 

// while using the erase it erases all occurences of that element 
//  if you want to erase just one element ... use ms.erase(ms.find(element))



// unordered set - it won't store in sorted order but will store only unique elements (has better complexity in most cases than sets)
// in most of the cases the time complexity is o(1)
// all operations are similar to sets but the lower bound and upper bound doesn't work here bcz it is not sorted 


// map

#include<bits/stdc++.h>
using namespace std;


void explainmap(){
    map<int,int>mp;
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mppp;


    mp[1]=2;  // keys must be unique key but values can be duplicate also can be of any data type (as specified during declaration )
    mp.emplace(3,1);
    mp.insert({2,4});
    mppp[{2,3}]=10;

    // map stores unique keys in sorted order like the set

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    // erase , size , etc are same 

    // multimap and unordered map are just like multiset and unordered set but with respect to map .
}
int main(){
    return 0;
}