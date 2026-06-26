#include<iostream>
using namespace std;
int fact (int n){
    int fact =1;
    for (int i=2;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n ;
    cout<<"Enter a number :";
    cin>>n;
    int fact;
    for (int i=2;i<=n;i++){
        fact *= i;
    
    cout<<fact<<endl;
    }
}
