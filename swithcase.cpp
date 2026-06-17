#include<iostream>
using namespace std;
int main (){
    int t;
    cout<<"Enter a number :";
    cin>>t;
    switch (t){
    
    case 1 :
        cout<<"Monday";
        break;
    case 2 :
        cout<<"tuesday";
        break;
    case 3 :
        cout<<"wednesday";
        break;
    case 4 :
        cout<<"thrusday";
        break;
    case 5 :
        cout<<"friday";
        break;
    case 6 :
        cout<<"satarday";
        break;
    case 7:
        cout<<"sunday";
        break;
    default :
        cout<<"Invalid :";
}
}