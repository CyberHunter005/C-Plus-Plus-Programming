#include<iostream>
using namespace std;
int main (){
    float A = 6.678;
    float* P = &A;  /// we can also write int *p
    cout<<&A<<endl;
    cout<<P;
}