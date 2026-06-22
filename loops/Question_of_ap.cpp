#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    for (int i=100;i>=n;i=i-3){
            cout<<i<<endl;
        }
}