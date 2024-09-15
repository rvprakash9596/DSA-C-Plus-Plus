#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age :";
    cin>>age;

    if(age>=18){
        cout<<"You are eligible for Vote";
    }
    else{
        cout<<"You are not eligible for Vote";
    }

    return 0;
}