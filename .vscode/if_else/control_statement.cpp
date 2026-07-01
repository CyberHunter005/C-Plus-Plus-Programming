#include<iostream>
using namespace std;
    int main(){
        cout<< "enter a number ";
        int n;
        cin>>n;
        if (n%2==0){
            cout<<"even\n";
        }
        else if (n%2>= 0)
            cout <<" odd\n";
        else 
        cout<< "odd";
        }
    


absalute integer 
#include<iostream>
using namespace std;
    int main(){
        cout<<"Enter a number : ";
        int n ;
        cin>> n;
        if(n>0){
            cout<<n;

        }
        else if (n<0){
            cout<<-n;
        }
        else 
            cout<<0;
        }
    
profit and loss 


#include<iostream>
using namespace std;
int main(){
    cout<<" Enter a cp: ";
    int cp;
    cin>> cp;
    cout<<"Enter a sp: ";
    int sp;
    cin>> sp;
    if (sp>cp){
        cout<<"profit" <<sp-cp;
    }
     else if  (cp==sp)
            cout<< "No profit NO loss" <<sp-cp;
    else{
        cout<<"loss" <<cp-sp;
    }

}


#include<iostream>
using namespace std;
int main(){
    cout<< " Enter a number : ";
    int n;
    cin>>n;
    if (n>=100 && n<999){
        cout<<"Three digit number ";
    }
    else 
        cout <<"bigger than three digit number ";
}


 #include<iostream>
 using namespace std;
 int main (){
    cout<< "Enter a number : ";
    int n;
    cin>>n;
    if (n%3==0 || n%5==0){
        cout<<" Number is divisible : 5";

    }
    else {
        cout<<"number is not divisile"; 
    }
 }



