#include<iostream>
using namespace std;
int main(){
   
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;

    cout<<"Before swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

   swap(a,b);

    cout<<"After swaping "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    return 0;
}