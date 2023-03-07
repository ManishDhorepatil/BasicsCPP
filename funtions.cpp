#include<bits/stdc++.h>
using namespace std;
// void PrintName(string name){
//     cout<<"hey"<<name<<endl;
//}
void doSomething(string s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    // funtion are set of code which performs something for you
    //it is used to moderlize the code
    //it is used to increase readiblity
    //funtion are used to use same code diffrent times
    // void----->which does not return any thing
    // string name;
    // cin>>name;
    // PrintName(name); // calling the funtion in main funtion 
    // return 0; 
    //pass by value
    string s= "raj";
    doSomething(s);
    cout<<s<<endl;/// print the orginal string
  
   



   
    return 0;
}