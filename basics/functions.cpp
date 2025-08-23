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


    // pass by value - a copy is made for the original and the program is executed on it.
    // pass by reference - everything is done the original memory location 
    // for this just add & with the variable name while passing the parameter.
    //arrays are always passed by reference even without expilicitly writing &.
    
    return 0;
}