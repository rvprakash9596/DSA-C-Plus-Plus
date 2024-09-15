#include<iostream>
using namespace std;
int main(){

//1.Arithmetic Operators(+,-,*,/,%)

/*int a=15,b=10;
cout<<"Sum = "<<(a+b)<<"\n";
cout<<"Sub = "<<(a-b)<<"\n";
cout<<"Mul = "<<(a*b)<<"\n";
cout<<"Div = "<<(a/b)<<"\n";
cout<<"Modulo = "<<(a%b)<<"\n";
cout<<(5/(double)2)<<"\n";//2.5

int ans = (5/(double)2);
cout<<ans;//2 due to int data type
*/

//2.Relational Operator(<,<=,>,>=,==,!=)
/*
cout<<(3<5)<<"\n"; // true=1
cout<<(3>5)<<"\n"; // false=0
cout<<(3<=5)<<"\n";//1
cout<<(3>=5)<<"\n";//0
cout<<(3==5)<<"\n";//0
cout<<(3!=5)<<"\n";//1
*/

//3. Logical Operator (||,&&,!)
/*
cout<<!(3<1)<<"\n";//1
cout<<!(3<1)<<"\n";//1
cout<<((3>1)||(3<5))<<"\n";//1
cout<<((3>1)&&(5<3))<<"\n";//0
*/

//4. Unary Operator(Increment ++ , Decrement --)
// a=a+1 ===> a++ || ++a;
// a=a-1 ===> a-- || --a;

int a=10;
int b=a++;
cout<<b<<"\n";
cout<<a<<"\n";



return 0;
}