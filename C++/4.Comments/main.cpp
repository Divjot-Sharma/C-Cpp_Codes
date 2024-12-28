#include<iostream>
using namespace std;
int main(){
    //This is single line Comment
    /*This is  a
    multiline 
    comment*/
    
    cout<<"Hello World\n"; 
    cout<<"/*";
    cout<<"*/";
    //  cout<</*"/"/;   <-- Gives error Of semicolon
    //  cout<</*"""/*"*/;

    //  v Gives Error Because Comments cannot be Nested 
    //  /*
    //  this is a comment 
    //  /* */ */
    return 0;
}