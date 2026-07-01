#include<iostream>
using namespace std;
int main (){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    switch(x){
        case 1:
            cout<<" January 31";
            break;
        case 2 :
            cout<<" February 28";
            break;
        case 3:
            cout<<" march 31";
            break;
        case 4 :
            cout<<" april 30";
            break;
        case 5:
            cout<<" may 31";
            break;
        case 6 :
            cout<<" june 30";
            break;
        case 7:
            cout<<" July 31";
            break;
        case 8 :
            cout<<" august 31";
            break;
        case 9:
            cout<<" september 30";
            break;
        case 10 :
            cout<<" october 31";
            break;
        case 11:
            cout<<" november  30";
            break;
        case 12 :
            cout<<" december  31";
        default:
            cout<<"none of these ";
    }

}