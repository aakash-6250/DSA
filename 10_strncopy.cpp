#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char str1[100];
    char str2[100];
    int n;

    cout<<"Enter the first string : ";
    cin>>str1;
    cout<<endl;
    cout<<"Enter the second string : ";
    cin>>str2;
    cout<<endl;
    cout<<"Enter the number of character you want to copy : ";
    cin>>n;
    cout<<endl;

    cout<<"Before copying the nth value : "<<endl;
    cout<<"value of str1 "<<str1<<endl;
    cout<<"value of str2 "<<str2<<endl;

    strncpy(str1,str2,n);
    
    cout<<"After copying the nth value : "<<endl;
    cout<<"value of str1 "<<str1<<endl;
    cout<<"value of str2 "<<str2<<endl;

    return 0;
    

}