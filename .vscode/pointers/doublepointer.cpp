#include<iostream>
using namespace std;
int main(){
    int p = 4;
    int* p2 = &p;
    int** p3 = &p2;
    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<**p3<<endl;
}