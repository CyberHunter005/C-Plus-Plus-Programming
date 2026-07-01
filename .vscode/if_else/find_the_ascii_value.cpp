#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter a character :";
    cin>> ch;
   char ascii = (int)ch;
   if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 || ascii <= 90)){
    cout<<" This character  is an alphabet";
   }
   else {
    cout<< " this character  is not an albhabet  ";
   }
}