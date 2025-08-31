#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int>ls;
    //push_back and emplace_back is used just like the vector 
    //every function is same as vector except
    // one difference is that it has the feature of push_front and emplace_front unlike the vector

    ls.push_front(5);
    ls.emplace_front(2,4);

    //Deque - double ended queue
    // all the functions same as list (but they aren't same )

    //Stack - LIFO

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout<< st.top();  // prints 5
    st.pop();   // deletes 5 i.e. the Last to   go in 

    cout<< st.size();
    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    // Queue - similar to stack but FIFO

    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back()+=5;  // the last element will get added to 5 and becomes the new number 
    q.front()+=2;

    q.pop(); // deletes the first element i.e here 1 which later became 3 will be deleted

    cout<<q.front();  // prints 2


    //Priority queue - the largest one stays at the top 
    priority_queue<int>pq;  // maximum priority queue or max heap
    // push and emplace works as usual , top as well
    // pop removes the topmost element 

    // to make the prirority queue store the smallest at the top write

    priority_queue<int,vector<int>,greater<int>>pq;  // min priority queue or min heap

}