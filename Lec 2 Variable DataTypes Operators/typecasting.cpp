#include<iostream>
using namespace std;
int main(){

    // implicit type conversion
    /*char grade = 'A';//65,97
    int value=grade;
    cout<<value;//65
    */


   //Explicit Conversion
   double price=100.98;
    cout<<"Price before explicit conversion : "<<price<<"\n";

   int newPrice=(int)price;
   cout<<"Price after explicit conversion is : "<<newPrice<<"\n";

    return 0;
}