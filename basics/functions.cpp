/*
functions are the set of code which helps to perform certain tasks
used to modularise code
used to increase code reusability 
used to increase code readability

void 
return
parameterised 
non parameterised
*/

#include<bits/stdc++.h>
using namespace std;

// non parameterised , void
// void greeting(){
//     cout <<"hey rishabh!";
// }


//parameterised , void
void greeting(string name){
    cout<<"Hey"<<name<<endl;
}
int main(){
    string name;
    cin>>name;
    greeting(name);
    return 0;
}