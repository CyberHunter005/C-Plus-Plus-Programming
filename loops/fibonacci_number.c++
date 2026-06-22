#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int a=1;
    int b=1;
    int sum=0;
    for(int i=1;i<=n-2;i++){// here i am putting -2 because when we intialliging the value inside a and b
        //its start from 2 the 3rd number of fibonacci so thats why we here using n-2  
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b;
    // here i am using b because b and sum both are same but we put a=1 and b=1 than its give 0 so 
    //thats why i am using here b;
}
