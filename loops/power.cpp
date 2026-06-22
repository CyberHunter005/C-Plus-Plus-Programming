#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a nummber a: ";
    cin>>a;
    cout<<"enter a number b: ";
    cin>>b;
    int k=1;
    for(int i=1;i<=b;i++){
        k = k*a;
    }
    cout<<k;
}
