#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int change = *x;
         *x = *y;
         *y = change;
         return ;
}

int main(){
    int a ,b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}