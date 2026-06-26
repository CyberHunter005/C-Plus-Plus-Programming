#include<iostream>
using namespace std;
void fun(int x, int y){ // formal parameter 
    cout<<&x<<endl;
    cout<<&y<<endl;
}
int main(){
    int x = 3; // acttual parameter 
    int y = 4;
    cout<<&x<<endl;
    cout<<&y<<endl;
    fun(x,y);
}