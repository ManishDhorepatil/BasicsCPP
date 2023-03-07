#include<bits/stdc++.h>
using namespace std;
int main(){
    // write a progrm take age as ip from user and the decide accordingly
    //1. if age<18;
    //print not elgible for job
    //2. age>=18 and less than age<=54
    // print elgible for job
    //3. if age>=55 and age<=57
    //print elgible for job ,but retirement soon
    //4. if age>57
    //print retirement time
    int age;
    cin>>age;
    cout<<" Enter the age of person"<< " "<<age<<endl;
    if(age<18)
    {
        cout<<"not eligible for job";

    }
    else if(age<=57){
        cout<<"eligible for job"<< " ";
        if(age>=55){
            cout<<"but retirement soon";

        }
    }
    else{
        cout<<"reitre time";
    }
    return 0;
}