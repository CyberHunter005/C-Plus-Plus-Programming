#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter your number :";
    cin>>n;
     bool flag  =true; // this means this number is prime 
    for (int i=2;i<=n-1;i++){
        if (n%i==0){
            flag = false;
            break;
        }
    }
    if (n==1) cout<<"1  is neighter prime nor composite";
        else if (flag==true) cout<<n<<"this is a prime number ";
        else cout<<n<<"this is composite number ";
}