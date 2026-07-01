#include<iostream>
using namespace std;
int main (){
    int t;
    cout<<"Enter any number :";
    cin>>t;
    int a = 2;
    for (int i = 2 ;i<=t;i++){
        cout<<a<<endl;
        a= a*3;
    }
}