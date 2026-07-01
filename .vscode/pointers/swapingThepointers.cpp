#include<iostream>
using namespace std;
void swap(int a,int b){
    int change = a;
         a = b;
         b = change;
         return ;
}

int main(){
    int a ,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}
