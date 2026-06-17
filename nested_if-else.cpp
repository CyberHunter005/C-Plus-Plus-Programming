//  #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     if ((n%3==0||n%5==0)&& n%15!=0){
//         cout<<"this number is divisible by both 5 or 3:";
    
//         }
//     else{
//         cout<<"condition not match ";
//     }
//     }


// int main () {
//     int n;
//      cout<<"Enter a number:";
//      cin>>n;
//      if (n%3==0||n%5==0){
//          if (n%15!=0){
//             cout<<"this number is divisible by both 5 or 3:";}
//         else {
//             cout<<" condition does not match";
//          }
//         }
//          else 
//             cout<<"condition does not match ";
//         }


// #include<iostream>
// using namespace std;
// int main(){
//     int a ;
//     cout<<"Enter a number :";
//     cin>>a;
//     if (a%3==0){
//         if (a%5==0){
//             cout<<"The number is dibisible by both 3 and 5";
//         }
//         else {
//             cout<<"condition not match";
//         }
        
//         }
//         else 
//         cout<<"condition not match";
//     }


//
#include<iostream>
using namespace std;
int main(){
    int a,b,c ;
    cout<<"Enter a number :";
    cin>>a;
    cout<<"Enter a number :";
    cin>>b;
    cout<<"Enter a number :";
    cin>>c;
    if (a>b){
        if (a>c){
            cout<<a<<"is the largest ";
        }
        else {
            cout<<c<<" is the largest ";
        }
        }
        if (b>a) {
            if(b>c){
            cout<<b<<" is the largest ";
            }
        
        }
    }
