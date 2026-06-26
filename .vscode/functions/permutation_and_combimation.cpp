// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number n :";
//     cin>>n;
//     int r;
//     cout<<"Enter number r :";
//     cin>>r;
//     int nfactorial = 1; //(n!)
//     for (int i=2;i<=n;i++){
//         nfactorial *= i;
//     }
//     int rfactorial =1;  //(r!)
//     for (int i=2;i<=r;i++){
//         rfactorial *= i;
//     }
//     int nrfactorial =1;  //(n-r)!
//     for (int i=2;i<=n-r;i++){
//         nrfactorial *= i;
//     }
//     int ncrfactorial = nfactorial /(rfactorial*nrfactorial);
//     cout<<ncrfactorial;
// }

// here i am making an factorial with th help of loops 


// now i am making this with a function 




#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for (int i=2;i<=x;i++){
         f*=i;
    }
    return f;
}
int combination (int n,int r){
    int ncrfactorial = fact(n)/(fact(r)*fact(n-r));
    return ncrfactorial;
}
int main(){
    int n;
    cout<<"Enter number n :";
    cin>>n;
    int r;
    cout<<"Enter number r :";
    cin>>r;
    int ncrfactorial = combination(n,r);
    cout<<ncrfactorial;
}